/*
 * MeatLoversPizza.cpp
 *
 *  Created on: Apr 8, 2017
 *      Author: Robert Larson
 */

#include "MeatLoversPizza.h"

#include <iostream>

MeatLoversPizza::MeatLoversPizza()
: Pizza(std::string("Meat Lover's Pizza")){
}

MeatLoversPizza::~MeatLoversPizza() {
}


void MeatLoversPizza::AddToppings()
{
	std::cout << "adding cheese, pepperoni, sausage and bacon toppings\n";
}
