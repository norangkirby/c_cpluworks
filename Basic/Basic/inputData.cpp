#include <iostream>
#include <string> //getline() ���
using namespace std;
/*
    cin >> ����
	cin ��Ʈ������ ���� �����͸� ������ ���� ����
*/
int main()
{
	int number;  //�л��� �й�
	string address; //�ּҸ� ������ ���ڿ� ���� ����

	cout << "�й� �Է�: ";
	cin >> number;

	cout << "�ּ� �Է�: ";
	//cin >> address;
	//���� �Էµ� ���๮��('\n') ���� ����, ���๮�� �������� ������
	//getline()�� ���� ���°� ����
	//c��� - while(getchar() != '\n')
	cin.ignore(); 
	getline(cin, address);  //getline(stream, str)

	cout << "�й�: " << number << endl;
	cout << "�ּ�: " << address << endl;

	return 0;
}