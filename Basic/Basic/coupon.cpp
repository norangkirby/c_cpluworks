#include <iostream>
#include <string>
using namespace std;

int main()
{
	string birthYear; //�������
	
	cout << "������� �Է�: ";
	cin >> birthYear;
	
	if (birthYear.length() != 4) { //���� ó��
	    cout << "�Է� ����: ����⵵�� 4�ڸ����� �մϴ�.\n";
	    return 1;
	}
	
	char lastDigit = birthYear.at(3); //birthYear[3]
	
	switch (lastDigit) {
	case '1': case '6':
	    cout << "��û���� �������Դϴ�.\n";
	    break;
	case '2': case '7':
	    cout << "��û���� ȭ�����Դϴ�.\n";
	    break;
	case '3': case '8':
	    cout << "��û���� �������Դϴ�.\n";
	    break;
	case '4': case '9':
	    cout << "��û���� ������Դϴ�.\n";
	    break;
	case '5': case '0':
	    cout << "��û���� �ݿ����Դϴ�.\n";
	    break;
	default:
	    cout << "��û�� �� ���� �����Դϴ�.\n";
	    break;
	}

	return 0;
}