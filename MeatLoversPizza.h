/*
 * MeatLoversPizza.h
 *
 *  Created on: Apr 8, 2017
 *      Author: Robert Larson
 */

#ifndef MEATLOVERSPIZZA_H_
#define MEATLOVERSPIZZA_H_

#include "Pizza.h"

class MeatLoversPizza : public Pizza {
public:
	MeatLoversPizza();
	virtual ~MeatLoversPizza();

protected:
	virtual void AddToppings();
};

#endif /* MEATLOVERSPIZZA_H_ */
