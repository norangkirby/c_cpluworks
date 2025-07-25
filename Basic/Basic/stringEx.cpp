#include <iostream>
#include <string> //문자열 처리 관련 함수 가진 라이브러리
using namespace std;

int main()
{
	string str = "Hello World";

	//문자열 길이
	cout << str.length() << endl; //11

	//문자열 인덱싱 - 문자로 반환
	cout << str.at(0) << endl; //H
	cout << str[6] << endl; //W

	//주민등록번호로 성별 구분(1, 3 - 남자, 2, 4 - 여자)
	string jumin = "030815-4567890";

	char genderDigit = jumin.at(7); //'4'

	switch (genderDigit) {
	case '1': case '3':
		cout << "남자\n"; break;
	case '2': case '4':
		cout << "여자\n"; break;
	default:
		cout << "지원되지 않는 기능입니다.\n"; break;
	}

	return 0;
}