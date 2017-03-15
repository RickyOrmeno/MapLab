#include "Map.h"
#include <string>


Map::Map(std::string startingLocationName)
{
	CurrentLocation = new Location(startingLocationName);
	Path.push(CurrentLocation);
}


Map::~Map()
{
}
