#include <iostream>
#include <string> //compare()

using namespace std;
/*
   //string - ���ڿ��Լ��� ������ �ִ� ���̺귯��
   //���ڿ� �� 
   - ���ڿ� ��ü.compare(���� ����)
*/

int main()
{
	string key;  //�Է��� Ű���� ����

	while (true) {
		cout << "��� �ݺ��ұ��(y/n �Է�)? ";
		cin >> key;
		
		if (key.compare("y") == 0 || key.compare("Y") == 0) {
			cout << "��� �ݺ�!\n";
		}
		else if(key.compare("n") == 0 || key.compare("N") == 0) {
			cout << "�ݺ� �ߴ�!\n";
			break;
		}
		else {
			cout << "�߸��� �Է��Դϴ�! �ٽ� �Է��ϼ���!\n";
		}
	}

	/*string str1 = "apple";
	string str2 = "apple";
	int value;

	value = str1.compare(str2);
	cout << value << endl; //0-��ġ, -1-����ġ

	if (value == 0) {
		cout << "�� ���ڿ��� ��ġ�մϴ�.\n";
	}
	else {
		cout << "�� ���ڿ��� ��ġ���� �ʽ��ϴ�.\n";
	}*/

	return 0;
}