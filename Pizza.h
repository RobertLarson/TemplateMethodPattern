/*
 * Pizza.h
 *
 *  Created on: Apr 8, 2017
 *      Author: Robert Larson
 */

#ifndef PIZZA_H_
#define PIZZA_H_

#include <string>

class Pizza {
public:
	Pizza(std::string description);
	virtual ~Pizza();

	void Prepare();

protected:
	virtual void PrepareDough();
	virtual void AddSauce();
	virtual void AddToppings() = 0;
	virtual void Bake();

private:
	std::string m_description;
};

#endif /* PIZZA_H_ */
