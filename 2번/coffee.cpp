#include "coffee.h"
#include <string>

Coffee::Coffee()
{
	setName("카푸치노");
	setIsHot(true);
	setIsRegular(false);
	setPrice(4000);
}

Coffee::Coffee(string name, bool isHot, bool isRegular, int price)
{
	setName(name);
	setIsHot(isHot);
	setIsRegular(isRegular);
	setPrice(price);
}

void Coffee::inputCoffeeInfo()
{
	int boolean;
	cout << "        -추가하시고자 하는 커피의 이름을 입력해 주시기 바랍니다. (예: 까페라떼): ";
	cin >> name;
	cout << "        -따뜻한 커피를 원하십니까? (1: 예, 기타: 아니오): ";
	cin >> boolean;
	setIsHot(boolean == 1 ? true : false);
	cout << "        -Regular Size를 원하십니까? (1: 예, 기타: 아니오): ";
	cin >> boolean;
	setIsRegular(boolean == 1 ? true : false);
	cout << "        -커피의 가격을 입력해 주시기 바랍니다.: ";
	cin >> price;
}

void Coffee::showCoffeeInfo()
{
	string isHot(getIsHot() ? "" : "(ICE) ");
	string isRegular(getIsRegular() ? "REGULAR " : "GRANDE ");
	cout << "커피명: " << getName() << " " << isHot << isRegular << getPrice() << "원" << endl;
}

int main(int argc, char* argv[])
{
	Coffee americano("아메리카노", true, true, 2000);
	Coffee latte, input;

	latte.setName("라떼");
	latte.setIsHot(false);
	latte.setIsRegular(false);
	latte.setPrice(4000);

	input.inputCoffeeInfo();

	cout << "\n== 입력하신 커피의 내용입니다. ==\n";
	americano.showCoffeeInfo();
	latte.showCoffeeInfo();
	input.showCoffeeInfo();
}