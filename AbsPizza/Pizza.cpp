#include "Roast.cpp"
class Cheese_Light : public Roast_Light{
public:
	std::string ingredients() {
		std::string s = "pizza: " + std::to_string(tomatoes) + " tomatoes, "
			+ std::to_string(sausage) + " sausages, "
			+ std::to_string(cheese) + " cheese, ";
		return s;
	}

private:
	int tomatoes = 15;
	int sausage = 9;
	int cheese = 25;
};

class Pepperoni_Light : public Roast_Light {
public:
	std::string ingredients() {
		std::string s = "pizza: " + std::to_string(tomatoes) + " tomatoes, "
			+ std::to_string(sausage) + " sausages, "
			+ std::to_string(cheese) + " cheese, ";
		return s;
	}

private:
	int tomatoes = 10;
	int sausage = 15;
	int cheese = 20;
};

class Cheese_Default : public Roast_Default {
public:
	std::string ingredients() {
		std::string s = "pizza: " + std::to_string(tomatoes) + " tomatoes, "
			+ std::to_string(sausage) + " sausages, "
			+ std::to_string(cheese) + " cheese, ";
		return s;
	}

private:
	int tomatoes = 15;
	int sausage = 9;
	int cheese = 25;
};

class Pepperoni_Default : public Roast_Default {
public:
	std::string ingredients() {
		std::string s = "pizza: " + std::to_string(tomatoes) + " tomatoes, "
			+ std::to_string(sausage) + " sausages, "
			+ std::to_string(cheese) + " cheese, ";
		return s;
	}

private:
	int tomatoes = 10;
	int sausage = 15;
	int cheese = 20;
};