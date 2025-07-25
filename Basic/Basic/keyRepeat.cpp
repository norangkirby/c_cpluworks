#include <iostream>
#include <string> //compare()

using namespace std;
/*
   //string - 문자열함수를 가지고 있는 라이브러리
   //문자열 비교 
   - 문자열 객체.compare(비교할 문자)
*/

int main()
{
	string key;  //입력할 키보드 변수

	while (true) {
		cout << "계속 반복할까요(y/n 입력)? ";
		cin >> key;
		
		if (key.compare("y") == 0 || key.compare("Y") == 0) {
			cout << "계속 반복!\n";
		}
		else if(key.compare("n") == 0 || key.compare("N") == 0) {
			cout << "반복 중단!\n";
			break;
		}
		else {
			cout << "잘못된 입력입니다! 다시 입력하세요!\n";
		}
	}

	/*string str1 = "apple";
	string str2 = "apple";
	int value;

	value = str1.compare(str2);
	cout << value << endl; //0-일치, -1-불일치

	if (value == 0) {
		cout << "두 문자열이 일치합니다.\n";
	}
	else {
		cout << "두 문자열이 일치하지 않습니다.\n";
	}*/

	return 0;
}