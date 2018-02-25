#include <string>

class Roast_Light{
public:
	virtual std::string ingredients() = 0;
	std::string get_roast() {
		return roast;
	}
private:
	std::string roast = "light";
};

class Roast_Default{
public:
	virtual std::string ingredients() = 0;
	std::string get_roast() {
		return roast;
	}
private:
	std::string roast = "default";
};