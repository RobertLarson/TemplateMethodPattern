/*
 * CheesePizza.h
 *
 *  Created on: Apr 8, 2017
 *      Author: Robert Larson
 */

#ifndef CHEESEPIZZA_H_
#define CHEESEPIZZA_H_

#include "Pizza.h"

class CheesePizza : public Pizza {
public:
	CheesePizza();
	virtual ~CheesePizza();

protected:
	virtual void AddToppings();
};

#endif /* CHEESEPIZZA_H_ */
