#include <iostream>
#include <string>
using namespace std;

int main()
{
	string birthYear; //출생연도
	
	cout << "출생연도 입력: ";
	cin >> birthYear;
	
	if (birthYear.length() != 4) { //오류 처리
	    cout << "입력 오류: 출생년도는 4자리여야 합니다.\n";
	    return 1;
	}
	
	char lastDigit = birthYear.at(3); //birthYear[3]
	
	switch (lastDigit) {
	case '1': case '6':
	    cout << "신청일은 월요일입니다.\n";
	    break;
	case '2': case '7':
	    cout << "신청일은 화요일입니다.\n";
	    break;
	case '3': case '8':
	    cout << "신청일은 수요일입니다.\n";
	    break;
	case '4': case '9':
	    cout << "신청일은 목요일입니다.\n";
	    break;
	case '5': case '0':
	    cout << "신청일은 금요일입니다.\n";
	    break;
	default:
	    cout << "신청할 수 없는 요일입니다.\n";
	    break;
	}

	return 0;
}