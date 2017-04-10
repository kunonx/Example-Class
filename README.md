1. Book 클래스를 만드시기 바랍니다. 클래스의 속성은 다음과 같습니다.
```c
name (string), 
author (string), 
publisher (string), 
price (int)
```

이들 멤버들을 protected로 선언하여 외부로부터의 접근을 제한하시기 바라고, 아울러 이들에 대한 접근을 위해 set/get 함수를 인라인함수 형태로 추가하시기 바랍니다. 그리고, 이들 정보를 출력하는 <code>showBookInfo()</code> 함수를 만드시고 <code>Book(string name, string author, string publisher, int price)</code> 형태의 매개변수 생성자를 만드시기 바랍니다.
아래의 테스트 프로그램이 성공적으로 수행되도록 해야 합니다.
```c
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
``` 

출력:
```
책명: 명품 JAVA 저자: 김철수 출판사: 생능출판사 가격: 30000
책명: C++ 프로그래밍 저자: 박영희 출판사: 영진출판사 가격: 30000
```
=================================================================================
2. Coffee 클래스를 만드시기 바랍니다. 클래스의 속성은 다음과 같습니다. 
```c
name (string), 			// 메뉴이름 예) 라떼, 아메리카노 등
is_hot (bool), 			// hot이면 true, ice면 false 값을 가짐
is_regular (bool), 		// regular size면 true, 아니면 fase
price (int)			// 가격	
```

이들 멤버들을 protected로 선언하여 외부로부터의 접근을 제한하시기 바라고, 아울러 이들에 대한 접근을 위해 set/get 함수를 인라인 형태로 추가하시기 바랍니다. 그리고, 이들 정보를 직접 입력받는 <code>inputCoffeeInfo()</code> 함수, 출력하는 <code>showBookInfo()</code> 함수를 만드시고 <code>Coffee(string name, bool is_hot, bool is_regular, int price);</code> 형태의 매개변수 생성자를 만드시기 바랍니다.

아래의 테스트 프로그램이 성공적으로 수행되도록 해야 합니다.

```c
#include "coffee.h"

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
```
	
출력:
```c
$ ./sim
        -추가하시고자 하는 커피의 이름을 입력해 주시기 바랍니다. (예: 까페라떼): 까페모카
        -따뜻한 커피를 원하십니까? (1: 예, 기타: 아니오): 2
        -Regular Size를 원하십니까? (1: 예, 기타: 아니오): 2
        -커피의 가격을 입력해 주시기 바랍니다.: 6000

== 입력하신 커피의 내용입니다. ==
 커피명: 아메리카노 REGULAR 2000원
 커피명: 라떼 (ICE) GRANDE 4000원
 커피명: 까페모카 (ICE) GRANDE 6000원
```
 
=================================================================================
3. 시간이 된다면 첨부된 coffee.exe 기능과 같은 프로그램을 작성하시기 바랍니다.
