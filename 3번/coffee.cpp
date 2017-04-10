#include "coffee.h"

using namespace std;

int main(int argc, char **argv)
{
	int select;
	Coffee* head = NULL;

	cout << "======================================================" << endl;
	cout << "커피 메뉴 시스템에 오신 것을 환영합니다" << endl;
	cout << "======================================================";
	while (1)
	{
		cout << endl;
		cout << endl;
		cout << "원하시는 기능을 입력하시기 바랍니다. (1: 메뉴추가, 2: 메뉴현황보기, 기타: 종료): ";
		cin >> select;
		switch (select)
		{
		case 1:
			cout << endl;
			if (head == NULL)
			{
				head = new Coffee();
				head->inputCoffeeInfo();
				head->setNext(NULL);
			}
			else
			{
				Coffee* temp = head;
				while (temp->getNext() != NULL)
				{
					temp = temp->getNext();
				}
				Coffee* coffee = new Coffee();
				coffee->inputCoffeeInfo();
				coffee->setNext(NULL);
				temp->setNext(coffee);
			}
			break;
		case 2:
			cout << endl;
			cout << endl;
			cout << "======================================================" << endl;
			for (Coffee* coffee = head; coffee != NULL; coffee = coffee->getNext())
			{
				coffee->showCoffeeInfo();
			}
			cout << "======================================================" << endl << endl;
			break;
		default:
			delete head;
			return 0;
		}
	}
}

Coffee::Coffee()
{
	setName("까페모카");
	setIsHot(true);
	setIsRegular(false);
	setPrice(6000);
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
	cout << "        Regular Size를 원하십니까? (1: 예, 기타: 아니오): ";
	cin >> boolean;
	setIsRegular(boolean == 1 ? true : false);
	cout << "        -커피의 가격을 입력해 주시기 바랍니다.: ";
	cin >> price;
}

void Coffee::showCoffeeInfo()
{
	string isHot(getIsHot() ? " " : "(ICE) ");
	string isRegular(getIsRegular() ? "REGULAR " : "GRANDE ");
	cout << " 커피명: " << getName() << " " << isHot << isRegular << getPrice() << "원" << endl;
}