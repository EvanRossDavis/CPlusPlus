// LabChapt7Class.cpp : Defines the entry point for the console application.
//Main function

#include "stdafx.h"
#include <iostream>
#include "Inventory.h"


using namespace std;

void DisplayAttributes(Inventory inv[]);
void DisplayLowestCostItem(Inventory inv[], int numInvs);
double AverageOfCostInventoryItems(Inventory inv[], int numInvs);

int main()
{

	Inventory inv1(1, 5434, 22.31);     //0
	Inventory inv2(2, 4535, 45.47);     //1
	Inventory inv3(3, 2456, 73.24);     //2
	Inventory inv4(4, 5437, 84.78);     //3
	Inventory inv5(5, 6543, 95.62);     //4

	//creates an array type Inventory with 5 elements
	const int NumInvs = 5;//InvItems //0   //1   //2   //3   //4
	Inventory InvItems[NumInvs] = {inv1, inv2, inv3, inv4, inv5};

	//Displays the attributes in tab format
	DisplayAttributes(InvItems);

	//Displays the item NUMBER with the lowest cost
	DisplayLowestCostItem(InvItems, NumInvs);

	//function computes average cost of the inventory items and stores in var to be printed
	double AvgCost = AverageOfCostInventoryItems(InvItems, NumInvs);
	cout << "The average cost... " << AvgCost;
	
	/*int Number;
	int Quantity;
	double Cost;

	cout << "Please enter an item's number\n";
	cin >> Number;

	cout << "Please enter the item's quantity\n";
	cin >> Quantity;

	cout << "Please enter the item's cost\n";
	cin >> Cost;

	inv1.setItemNumber(Number);
	cout << "The item number is: " << inv1.getItemNumber() << endl;

	inv1.setQuantity(Quantity);
	cout << "The quantity is: " << inv1.getQuantity() << endl;

	inv1.setCost(Cost);
	cout << "The cost of the item is: $" << inv1.getCost() << endl;

	cout << "The total cost is: $" << inv1.getTotalCost() << endl;*/

	int c;
	cin >>c;
    return 0;
}

void DisplayAttributes(Inventory inv[])
{
	//Create a function to display the attributes of the Inventory items in a table.
	int invNum = 5;
	for (int i = 0; i <= invNum - 1; i++)
	{
		cout << "Item Number:" << inv[i].getItemNumber() << '\t';
		cout << "Item Quantity:" << inv[i].getQuantity() << '\t';
		cout << "Item Price:" << inv[i].getCost() << endl;
	}
}
void DisplayLowestCostItem(Inventory inv[], int numInvs)
{
	//for loop that starts iterated through the array
	//it makes note of the lowest valid and stores it
	Inventory tempItem = inv[0];
	for (int i = 1; i <= numInvs - 1; i++)
	{
		if (inv[i].getCost() < tempItem.getCost())
		{
			tempItem = inv[i];
		}
	}
	cout << "Lowest Cost Item Number: " << tempItem.getItemNumber() << endl;
	//return; //THIS DID NOT WORK
		/*if (inv[1].getCost() < inv[0].getCost())
		{
			LowestCost = inv[1].getCost();
			cout << "The least expensive item has a price of: " << LowestCost << endl;
		}
		else if (inv[2].getCost() < inv[1].getCost())
		{
			LowestCost = inv[2].getCost();
			cout << "The least expensive item has a price of: " << LowestCost << endl;
		}
		else if (inv[3].getCost() < inv[2].getCost())
		{
			LowestCost = inv[3].getCost();
			cout << "The least expensive item has a price of: " << LowestCost << endl;
		}
		else
		{
			LowestCost = inv[4].getCost();
			cout << "Too Far...lowest is " << LowestCost << endl;
		}*/
}
double AverageOfCostInventoryItems(Inventory inv[], int numInvs)
{//computes the average cost of all items and returns
 //that average as a double
	double sum = 0;
	for (int i = 0; i <= numInvs - 1; i++)
	{
		sum += inv[i].getCost();
	}
	return sum / (numInvs * 1.0);
}