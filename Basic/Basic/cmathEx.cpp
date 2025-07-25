#include <iostream>
#include <cmath> //수학 관련 라이브러리
using namespace std;

int main()
{
	//반올림 - round()
	cout << round(2.54) << endl; //3
	cout << round(2.45) << endl; //2

	//내림 - floor()
	cout << floor(3.3) << endl; //3

	//올림 - ceil()
	cout << ceil(3.3) << endl; //4

	//절대값 - abs()
	cout << abs(-6) << endl; //6

	//거듭제곱 - pow()
	cout << pow(2, 4) << endl; //16

	//제곱근 - sqrt()
	cout << sqrt(16) << endl; //4

	return 0;
}
