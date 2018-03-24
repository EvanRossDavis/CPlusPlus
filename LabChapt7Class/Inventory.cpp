// Inventory.cpp is the Inventory class function implementation file.
// Functions definitions go here
#include "stdafx.h"
#include "Inventory.h"



Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.0;
}

Inventory::Inventory(int num, int quant, double Cost)
{
	itemNumber = num;
	quantity = quant;
	cost = Cost;
}

void Inventory::setItemNumber(int num)
{
	itemNumber = num;
}


void Inventory::setQuantity(int quant)
{
	quantity = quant;
}


void Inventory::setCost(double Cost)
{
	cost = Cost;
}

int Inventory::getItemNumber()
{
	return itemNumber;
}

int Inventory::getQuantity()
{
	return quantity;
}

double Inventory::getCost()
{
	return cost;
}

double Inventory::getTotalCost()
{
	

	return (cost * quantity);
}
	