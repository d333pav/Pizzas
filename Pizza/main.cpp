#include <iostream>
#include "cook.cpp"
#include "peperoni_pizza.cpp"
#include "cheese_pizza.cpp"
int main() {
	Cook c;
	PeperoniBuilder peperoni_builder;
	c.set_pizzabuilder(&peperoni_builder);
	c.cook_pizza();
	Pizza p = c.get_pizza();
	std::cout << p.ingredients() << std::endl;
	p.clear();
	CheeseBuilder cheese_builder;
	c.set_pizzabuilder(&cheese_builder);
	c.cook_pizza();
	p = c.get_pizza();
	std::cout << p.ingredients() << std::endl;
	return 0;
}