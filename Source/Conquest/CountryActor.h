// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CountryProperties.h"
#include "CountryActor.generated.h"

UCLASS()
class CONQUEST_API ACountryActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountryActor();
	ACountryActor(CountryProperties &);
	ACountryActor(ACountryActor *);

	CountryProperties& GetProperties();
	shared_ptr<Player> GetOccupyingPlayer() const;

	void AddArmies(int);
	void RemoveArmies(int);

	bool operator==(const int);
	bool operator==(string &);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	CountryProperties mProperties;
};
