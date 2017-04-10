#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	string name;
	string author;
	string publisher;
	int price;
public:
	Book();
	Book(string name, string author, string publisher, int price);
	void setName(string n) { name = n; }
	void setAuthor(string a) { author = a; }
	void setPublisher(string p) { publisher = p; }
	void setPrice(int p) { price = p; }
	string getName() { return name; }
	string getAuthor() { return author; }
	string getPublisher() { return publisher; }
	int getPrice() { return price; }
	void showBookInfo() { cout << "책명: " << getName() << " 저자: " << getAuthor() << " 출판사: " << getPublisher() << " 가격: " << getPrice() << endl; }
};

Book::Book()
{
	setName("이름 없음");
	setAuthor("작가 없음");
	setPublisher("출판사 없음");
	setPrice(0);
}

Book::Book(string name, string author, string publisher, int price)
{
	setName(name);
	setAuthor(author);
	setPublisher(publisher);
	setPrice(price);
}
int main(int argc, char* argv[])
{
	Book cpp;
	Book java("명품 JAVA", "김철수", "생능출판사", 30000);	//Book(string name, string author, string publisher, int price)

	cpp.setName("C++ 프로그래밍");
	cpp.setAuthor("박영희");
	cpp.setPublisher("영진출판사");
	cpp.setPrice(30000);

	java.showBookInfo();
	cpp.showBookInfo();
}