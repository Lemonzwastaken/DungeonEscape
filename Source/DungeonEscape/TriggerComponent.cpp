// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

	if (MoverActor != nullptr)
	{
		Mover = MoverActor->FindComponentByClass<UMover>();
		if (Mover != nullptr)
		{
			UE_LOG(LogTemp, Display, TEXT("Found mover component"));
			Mover->ShouldMove = true;
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Mover actor is NullPtr"));
	}


}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	



}
