// Fill out your copyright notice in the Description page of Project Settings.

#include "CountryActor.h"


// Sets default values
ACountryActor::ACountryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

ACountryActor::ACountryActor(CountryProperties &properties) :
	mProperties(properties)
{
	PrimaryActorTick.bCanEverTick = false;
}

ACountryActor::ACountryActor(ACountryActor *country) :
	mProperties(country->mProperties)
{
	PrimaryActorTick.bCanEverTick = false;
}

CountryProperties & ACountryActor::GetProperties()
{
	return mProperties;
}

shared_ptr<Player> ACountryActor::GetOccupyingPlayer() const
{
	return mProperties.occupyingPlayer;
}

void ACountryActor::AddArmies(int value) {
	mProperties.armyValue += value;
}

void ACountryActor::RemoveArmies(int value) {
	mProperties.armyValue -= value;
}

bool ACountryActor::operator==(const int id)
{
	return mProperties.globalID == id;
}

bool ACountryActor::operator==(string &name)
{
	return mProperties.name == name;
}

// Called when the game starts or when spawned
void ACountryActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACountryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

