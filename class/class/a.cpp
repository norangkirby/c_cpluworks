#include <iostream>

using namespace std;

// class: �繰�� �߻�ȭ�� �ڷ��� 
/*
	-ù ���ڴ� �빮��
	-���������� ����(private, public),���� :��
*/

//������ (construct)

/*
Ŭ���� �̸��� ������


*/

class Dog {
public:
	//��� ����
	string type;
	int age;

    Dog () {}

	Dog(string a, int b) {
		type = a;
		age = b;
	}

	//�Ҹ��� 
	~Dog() {
		cout << "deleted" << endl;

	}

	//���� ���
	void showinfo() {
		cout << "��: " << type << endl;
		cout << "����: " << age << endl;
	}
	void bark() {
		cout << "�߿�" << endl;
	}

};
int main() {

	//Ŭ���� ���� - �ν��Ͻ�  ���� (����ü�� ����� ��) 
	Dog dog1[100];
	dog1[0].type = "�۸���";
	dog1[0].age = 10;
	dog1[0].showinfo();

	Dog dog2("�ɳ���", 5);
	dog2.showinfo();
	dog2.bark();

	return 0;
}