#include <iostream>

using namespace std;

// class: �繰�� �߻�ȭ�� �ڷ��� 
/*
	-ù ���ڴ� �빮��
	-���������� ����(private, public),���� :��
*/

class Dog {
public:
	//��� ����
	string type;
	int age;

	//���� ���
	void showinfo() {
		cout << "��: " << type << endl;
		cout << "����: " << age << endl;
	}

};
int main() {

	//Ŭ���� ���� - �ν��Ͻ�  ���� (����ü�� ����� ��) 
	Dog dog1[100];
	dog1[0].type = "�۸���";
	dog1[0].age = 10;
	dog1[0].showinfo();



	return 0;
}