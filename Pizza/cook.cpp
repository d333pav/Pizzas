#include "pizzabuilder.h"
class Cook {
private:
	PizzaBuilder* pizzabuilder;
public:
	Cook() : pizzabuilder(NULL) {}
	~Cook() {}
	void set_pizzabuilder(PizzaBuilder* pb) {
		pizzabuilder = pb;
	}
	Pizza get_pizza() {
		return pizzabuilder->get_order();
	}
	void cook_pizza() {
		pizzabuilder->createpizza();
		pizzabuilder->build_tomatoes();
		pizzabuilder->build_sausage();
		pizzabuilder->build_cheese();
		pizzabuilder->build_roasting();
	}
};