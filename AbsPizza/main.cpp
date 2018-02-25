#include "Orders.cpp"

int main() {
	Kitchen k;
	Cheese_Orders co;
	Pepperoni_Orders po;
	Waiter* cheese_pizzas = k.create_order(co);
	Waiter* pepperoni_pizzas = k.create_order(po);
	std::cout << cheese_pizzas->orders() << std::endl;
	std::cout << pepperoni_pizzas->orders() << std::endl;
	return 0;
}