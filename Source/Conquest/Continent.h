#pragma once

#include "stdafx.h"
#include "ContinentProperties.h"
#include "CountryActor.h"

class Continent {
public:
	Continent();
	Continent(ContinentProperties &);
	Continent(Continent *);

	ContinentProperties& GetProperties();

	bool IsControlledByPlayer(int);

private:
	ContinentProperties mProperties;
};