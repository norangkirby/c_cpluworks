#include <iostream>
using namespace std; //�̸� ����(�Ҽ�) ����

int main()
{
	//������ �ڷ�
	char ch1 = 'A';
	char ch2 = 65; //�ƽ�Ű �ڵ尪 - A
	char ch3[] = "���"; //c��� �迭
	string str1 = "���"; //c++ �ڷ���
	string str2 = "apple";

	cout << ch1 << ", " << ch2 << endl; //A, A
	cout << ch3 << endl; //��
	cout << str1 << ", " << str2 << endl;  //���, apple

	//bool �ڷ���
	bool val;
	val = true;

	cout << val << endl; //1

	val = false;
	cout << val << endl; //0

	//���� ������ �����(bool) - (���ǽ�) ? �� : ����
	int fatherAge = 45;
	int motherAge = 47;
	char result1;
	bool b1;
	string result2;

	result1 = (fatherAge > motherAge) ? 'T' : 'F';
	cout << "�����: " << result1 << endl; //F

	b1 = (fatherAge > motherAge) ? true : false;
	cout << "�����: " << b1 << endl; //0

	result2 = (fatherAge > motherAge) ? "������ ����" : "������ ����";
	cout << "�����: " << result2 << endl;

	return 0;
}