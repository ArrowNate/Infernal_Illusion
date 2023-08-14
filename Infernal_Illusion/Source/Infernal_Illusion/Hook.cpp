// Fill out your copyright notice in the Description page of Project Settings.


#include "Hook.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Components/PrimitiveComponent.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(MyLogCategory, Log, All);

// Sets default values for this component's properties
UHook::UHook()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
	InputComponent = CreateDefaultSubobject<UInputComponent>(TEXT("InputComponent"));
}


// Called when the game starts
void UHook::BeginPlay()
{
	Super::BeginPlay();

	// ...
	GetComponentAndBind();
}


// Called every frame
void UHook::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (PhysicsHandle->GrabbedComponent) {
		PhysicsHandle->SetTargetLocation(GetReachEnd());
	}
}

void UHook::GetComponentAndBind()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	InputComponent->BindAction("Grab", IE_Pressed, this, &UHook::Grab);
	InputComponent->BindAction("Grab", IE_Released, this, &UHook::Release);

	UE_LOG(MyLogCategory, Warning, TEXT("GetComponentAndBind is being called!"));
}

void UHook::Grab()
{
	auto HitResult = GetPhysicsBodyInReach();
	auto GrabComponent = HitResult.GetComponent();
	auto ActorHit = HitResult.GetActor();

	if (ActorHit) {
		PhysicsHandle->GrabComponentAtLocation(GrabComponent, NAME_None, HitResult.ImpactPoint);
	}
	UE_LOG(MyLogCategory, Warning, TEXT("Grab is being called!"));
}

void UHook::Release()
{
	PhysicsHandle->ReleaseComponent();
}

FHitResult UHook::GetPhysicsBodyInReach()
{

	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	FHitResult HitResult;

	GetWorld()->LineTraceSingleByObjectType(HitResult, GetReachStart(), GetReachEnd(), FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody), TraceParameters);

	UE_LOG(MyLogCategory, Warning, TEXT("GetPhysicsBodyInReach is being called!"));
	return HitResult;
}

FVector UHook::GetReachStart()
{

	FVector PlayerViewPoint;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPoint, PlayerViewPointRotation);

	UE_LOG(MyLogCategory, Warning, TEXT("GetReachStart is being called!"));
	return PlayerViewPoint;
}

FVector UHook::GetReachEnd()
{

	FVector PlayerViewPoint;
	FRotator PlayerViewPointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPoint, PlayerViewPointRotation);

	FVector LineTraceEnd = PlayerViewPoint + PlayerViewPointRotation.Vector() * Reach;

	UE_LOG(MyLogCategory, Warning, TEXT("GetReachEnd is being called!"));
	return LineTraceEnd;
}

