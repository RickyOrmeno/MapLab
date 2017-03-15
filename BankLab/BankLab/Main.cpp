#include <iostream>
#include <string>
#include "Map.h"

using namespace std;

void GoNorth(Map &map);
void GoSouth(Map &map);
void GoEast(Map &map);
void GoWest(Map &map);
void PathToHome(Map &map);

int main()
{
	Map map = Map("Home");

	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Choose an option" << endl;
		cout << "1) Get current location info" << endl;
		cout << "2) Go North" << endl;
		cout << "3) Go East" << endl;
		cout << "4) Go South" << endl;
		cout << "5) Go West" << endl;
		cout << "5) Path to Home" << endl;
		cout << "0) Exit" << endl;

		cin >> choice;
		switch (choice)
		{
		case 0: break;
		case 1: cout << map.CurrentLocation->GetLocationInfo() << endl;	break;	//HOW TO ACCESS POINTER INFO
		case 2: GoNorth(map); break;
		case 3: GoEast(map); break;
		case 4: GoSouth(map); break;
		case 5: GoWest(map); break;
		case 6: PathToHome(map); break;

		default: cout << "Please enter a valid option" << endl; break;
		}
		system("pause");
	}

	return 0;

}

void GoNorth(Map &map)
{
	system("cls");

	if (map.CurrentLocation->North == nullptr)
	{
		cout << "You haven't been here before. Enter a name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->North = new Location(newName);		//"new" creates a new object
		map.CurrentLocation->North->South = *&map.CurrentLocation;		//dereference pointer and get the address
		return;
	}
	map.CurrentLocation = map.CurrentLocation->North;
	cout << "You are now at " << map.CurrentLocation->GetLocationInfo() << endl;
	
}

void GoSouth(Map &map)
{
	system("cls");

	if (map.CurrentLocation->South == nullptr)
	{
		cout << "You haven't been here before. Enter a name: ";
		string newName;
		cin >> newName;

		map.CurrentLocation->South = new Location(newName);		//"new" creates a new object
		map.CurrentLocation->South->North = *&map.CurrentLocation;		//dereference pointer and get the address
		return;
	}
	map.CurrentLocation = map.CurrentLocation->South;
	cout << "You are now at " << map.CurrentLocation->GetLocationInfo() << endl;

}

void GoEast(Map & map)
{
	//TODO: implement this
}

void GoWest(Map & map)
{
	//TODO: implement this
}

void PathToHome(Map & map)
{
}
