#include "Pizza.cpp"
#include <iostream>
#include <vector>
class Orders_Factory {
public:
	virtual Roast_Light* cook_light() = 0;
	virtual Roast_Default* cook_default() = 0;
};

class Cheese_Orders : public Orders_Factory{
public:
	Roast_Light* cook_light() {
		return new Cheese_Light;
	}
	Roast_Default* cook_default() {
		return new Cheese_Default;
	}
};

class Pepperoni_Orders : public Orders_Factory {
public:
	Roast_Light* cook_light() {
		return new Pepperoni_Light;
	}
	Roast_Default* cook_default() {
		return new Pepperoni_Default;
	}
};

class Waiter {
private:
	std::vector<Roast_Light*> l;
	std::vector<Roast_Default*> d;

public:
	void serve_light(Roast_Light* rl){l.push_back(rl);}
	void serve_default(Roast_Default* rd) { d.push_back(rd); }
	std::string orders() {
		return "Light roasting pizzas: " + std::to_string(l.size()) + ", default roasting pizzas: " + std::to_string(d.size());
	}
};

class Kitchen {
public:
	Waiter* create_order(Orders_Factory& f) {
		Waiter* w = new Waiter;
		w->serve_default(f.cook_default());
		w->serve_light(f.cook_light());
		return w;
	}
};