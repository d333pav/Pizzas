#pragma once
#include<string>
class Pizza {
public:
	void clear() {
		tomatoes = 0;
		sausage = 0;
		cheese = 0;
		roast = "default";
	}
	void count_tomatoes(int n) {
		tomatoes = n;
	}
	void count_sausage(int n) {
		sausage = n;
	}
	void count_cheese(int n) {
		cheese = n;
	}
	void roasting_degree(std::string s) {
		roast = s;
	}
	std::string ingredients() {
		std::string s = "pizza: " + std::to_string(tomatoes) + " tomatoes, "
			+ std::to_string(sausage) + " sausages, "
			+ std::to_string(cheese) + " cheese, "
			+ roast + " roasting";
		return s;
	}

private:
	int tomatoes = 0;
	int sausage = 0;
	int cheese = 0;
	std::string roast = "default";
};