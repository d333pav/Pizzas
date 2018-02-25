#pragma once
#include "pizza.cpp"


class PizzaBuilder {
protected:
	Pizza order;
public:
	virtual ~PizzaBuilder() {}
	Pizza get_order() {
		return order;
	}
	void createpizza() {
		order.clear();
	}
	virtual void build_tomatoes() = 0;
	virtual void build_sausage() = 0;
	virtual void build_cheese() = 0;
	virtual void build_roasting() = 0;
};