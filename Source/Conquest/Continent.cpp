#include "Continent.h"

Continent::Continent()
{
}

Continent::Continent(ContinentProperties &properties) :
	mProperties(properties)
{
}

Continent::Continent(Continent *continent) :
	mProperties(continent->mProperties)
{
}

ContinentProperties & Continent::GetProperties()
{
	return mProperties;
}

bool Continent::IsControlledByPlayer(int id)
{
	for (auto &country : mProperties.countries)
		if (country->GetOccupyingPlayer()->id != id)
			return false;
	return true;
}
