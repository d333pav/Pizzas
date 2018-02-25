#include "pizzabuilder.h"

class CheeseBuilder : public PizzaBuilder {
public:
	CheeseBuilder() : PizzaBuilder() {}
	void build_tomatoes() { order.count_tomatoes(12); }
	void build_sausage() { order.count_sausage(6); }
	void build_cheese() { order.count_cheese(25); }
	void build_roasting() { order.roasting_degree("default"); }
};
