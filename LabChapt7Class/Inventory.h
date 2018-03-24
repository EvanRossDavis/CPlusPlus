// INVENTORY.h is the INVENTORY class specification file.
// Header files go here
#include "stdafx.h"
#ifndef INVENTORY_H
#define INVENTORY_H

// INVENTORY class declaration
class Inventory
{
	private:
		int itemNumber; //An int that hold's the item's number.
		int quantity; //An int that holds the quantity of the item on hand.
		double cost; //A double that holds the wholesale per-unit cost of the item.
		//call functions here
	public:
		//Constructor sets all member variables to 0.
		Inventory();

		//Constructor #2
		Inventory(int num, int quant, double cost);

		void setItemNumber(int num);
		void setQuantity(int quant);
		void setCost(double Cost);
		int getItemNumber();
		int getQuantity();
		double getCost();
		double getTotalCost();
		
};
#endif
