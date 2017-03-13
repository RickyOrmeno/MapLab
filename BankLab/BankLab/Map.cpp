#include "Map.h"
#include <string>


Map::Map(std::string startingLocationName)
{
	_currentLocation = new Location(startingLocationName);
}


Map::~Map()
{
}
