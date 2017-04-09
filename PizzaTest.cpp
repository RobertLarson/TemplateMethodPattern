/*
 * PizzaTest.cpp
 *
 *  Created on: Apr 8, 2017
 *      Author: Robert Larson
 */


#include "CheesePizza.h"
#include "MeatLoversPizza.h"


int main()
{
	CheesePizza cheesePizza;

	cheesePizza.Prepare();

	MeatLoversPizza meatLoversPizza;

	meatLoversPizza.Prepare();

	return 0;
}
