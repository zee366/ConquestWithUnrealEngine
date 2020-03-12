#pragma once
#include "stdafx.h"

class ACountryActor;

struct ContinentProperties {
	int localID;

	string name;
	vector <shared_ptr<ACountryActor>> countries;
	int bonusPoints;
};