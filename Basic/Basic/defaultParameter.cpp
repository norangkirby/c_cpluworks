#include <iostream>
using namespace std;
/*
   기본 매개 변수(default parameter)
   - 기본값이 제공된 함수의 매개변수임
   - 호출시 생략하면 기본값이 전달됨
*/

void take(int busNumber, int fee = 1500) {
	cout << busNumber << "번 버스 요금: " << fee << "원\n";
}

int main()
{
	take(101); //매개변수 값을 생략하면 기본값이 출력됨
	take(101, 1600);
	take(740);

	return 0;
}