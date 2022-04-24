#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Company
{

	ifstream inputFile;
	string  File_name;
	bool Simulationdone = false;



	/*PriorityQueue <Cargo*> CargoWaitingVIP <;
	* Time CurrentTime
	Queue <Cargo*> CargoWaitingSpecial < ;
	Queue <Cargo*> CargoWaitingNormal < ;
	Queue <Cargo*> CargoDeliveredVIP < ;
	Queue <Cargo*> CargoDeliveredSpecial < ;
	Queue <Cargo*> CargoDeliveredNormal < ;
	Queue <Events*> EventsList;
	Queue <Trucks*> TrucksAvailableVIP;
	Queue <Trucks*> TrucksAvailableSpecial;
	Queue <Trucks*> TrucksAvailableNormal;

	PriorityQueue < ;
	PriorityQueue < ;
	PriorityQueue < ;
	PriorityQueue < ;*/

public:
	bool Endcondition()
	{
		//if(EventsList.getcount() == 0)
		// Simulationdone = true
		//TODO: Add checks for trucks by checking none are loading, moving or in maintenace 
		// return Simulationdone;
	}
	bool ExecuteEvent()
	{
		/*Events* x;
		EventsList.peak(x);
		while (CurrentTime.executenow(x->getEventTime())
		{
			EventsList.dequeue(x);
			x->Execute();
		}
		*/

	}
	bool MoveCargo()
	{
		/*Cargo* buffer;

		CargoWaitingVIP.dequeue(x);

		CargoWaitingSpecial.dequeue(x);


		CargoWaitingNormal.dequeue(x);*/

		//Still need to add enque but need to decide on what type of list delivered will be first






	}
	bool FileLoading()
	{
		inputFile.open(File_name + ".txt", ios::in);
		if (!inputFile.is_open())
		{
			//pUI->PrintMessage("Failed to open file, aborting loading");
			return false;

		}

		int countCargo, countTrucks, countEvents;

		inputFile >> countCargo;
		cin >> countCargo >> countTrucks >> countEvents;

		for (int i = 0; i <= countCargo; i++)
		{
			/*Cargo* pCargo;
			pCargo = new Cargo;
			pCargo->LoadCargo(event el ready);*/
		}

		for (int i = 0; i <= countTrucks; i++)
		{
			/*Trucks* pTrucks;
			pTrucks = new Trucks;
			pTrucks->LoadTruck(inputFile);
			if (pTrucks->getType() == Normal)
			TrucksAvailableNormal.enque(pTrucks);
			elseif(pTrucks->getType() == VIP)
			TrucksAvailableVIP.enque(pTrucks);
			elseif(pTrucks->getType() == Special)
			TrucksAvailableSpecial.enque(pTrucks);*/
		}

		for (int i = 0; i <= countEvents; i++)
		{
			/*Events* Events;
			pEvents = new Events;
			pEvents->LoadEvent(inputFile);
			EventsList.enque(pEvents);*/

		}


		return true;

	}



};
