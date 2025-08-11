#include <iostream>

using namespace std;

/*추상 클래스:
	-구현 불가한 가상함수를 가지고 있는 클래스
	-virtual 키워드를 붙임
	-가상소멸자 필수
	*/
class Animal {
public:
	virtual  ~Animal(){}//가상소멸자

	void breathe() {
		cout << "숨을 쉽니다." << endl;
	}
	//가상함수 선언 시 상속받은 클래스에서 직접 구현해 줘야 함
	//함수 뒤에 override 키워드가 들어감
	virtual void cry() = 0;
};

class Cat : public Animal {
public:
	void cry() override {
		cout << "애옹"<<endl;
	}

	~Cat() override {
		cout << "슈뢰딩거 ON" << endl;
	}

};//inherit

class Dog : public Animal {
public:
	void cry()override {
		cout << "개짖는소리" << endl;
	}
	~Dog() override {
		cout << "오늘 복날이다" << endl;
	}
};
int main() {
	/*Cat cat;
	cat.breathe();
	cat.cry();
	Dog dog;
	dog.breathe();
	dog.cry();*/

	Animal* cat = new Cat;
	cat->cry();

	Animal* dog = new Dog;

	delete cat;
	delete dog;

	return 0;
}