#pragma once
#include <iostream>

using namespace std;

/*추상 클래스:
	-구현 불가한 가상함수를 가지고 있는 클래스
	-virtual 키워드를 붙임
	-가상소멸자 필수
	*/
class Animal {
public:
	virtual  ~Animal() {}//가상소멸자

	void breathe() {
		cout << "숨을 쉽니다." << endl;
	}
	//가상함수 선언 시 상속받은 클래스에서 직접 구현해 줘야 함
	//함수 뒤에 override 키워드가 들어감
	virtual void cry() = 0;
};
