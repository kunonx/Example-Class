#include <iostream>
#include <string>

using namespace std;

class Coffee
{
protected:
	string name;
	bool is_hot;
	bool is_regular;
	int price;
public:
	Coffee();
	Coffee(string name, bool isHot, bool isRegular, int price);
	void setName(string n) { name = n; }
	void setIsHot(bool isHot) { is_hot = isHot; }
	void setIsRegular(bool isRegular) { is_regular = isRegular; }
	void setPrice(int p) { price = p; }
	void inputCoffeeInfo();
	void showCoffeeInfo();
	string getName() { return name; }
	bool getIsHot() { return is_hot; }
	bool getIsRegular() { return is_regular; }
	int getPrice() { return price; }
};