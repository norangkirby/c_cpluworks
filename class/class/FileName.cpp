#include <iostream>

using namespace std;

// class: 사물을 추상화한 자료형 
/*
	-첫 글자는 대문자
	-접근제어자 있음(private, public),끝은 :로
*/

class Dog {
public:
	//멤버 변수
	string type;
	int age;

	//정보 출력
	void showinfo() {
		cout << "종: " << type << endl;
		cout << "나이: " << age << endl;
	}

};
int main() {

	//클래스 사용법 - 인스턴스  생성 (구조체랑 비슷한 거) 
	Dog dog1[100];
	dog1[0].type = "멍머이";
	dog1[0].age = 10;
	dog1[0].showinfo();



	return 0;
}