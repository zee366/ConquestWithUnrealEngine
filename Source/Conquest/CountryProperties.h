#pragma once
#include "stdafx.h"

class ACountryActor;
class Player { public: int id; }; // stub

struct CountryProperties {
	static int staticGlobalID;
	int globalID;
	int localID;

	string name;
	vector <shared_ptr<ACountryActor>> adjCountries;
	int armyValue;
	shared_ptr<Player> occupyingPlayer;

	CountryProperties() {
		staticGlobalID++;
	}
};

int CountryProperties::staticGlobalID = 0;