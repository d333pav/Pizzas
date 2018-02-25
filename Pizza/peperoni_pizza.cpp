#include "pizzabuilder.h"

class PeperoniBuilder : public PizzaBuilder{
public:
	PeperoniBuilder(): PizzaBuilder(){}
	void build_tomatoes() { order.count_tomatoes(5); }
	void build_sausage() { order.count_sausage(15); }
	void build_cheese() { order.count_cheese(15); }
	void build_roasting() { order.roasting_degree("light"); }
};
