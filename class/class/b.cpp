#include <iostream>

using namespace std;

class member {
public:
	//�α����Լ�
	bool login(string id,string pw);
	void logout();
};

bool member::login(string id, string pw) {
	if ((id.compare("hangang") == 0) && (pw.compare("k1234") == 0)) {
		return true;
	}
	return false;
}

void member::logout() {
	cout<<"�α׾ƿ�"<<endl;
}
int main() {
	member a;

	string id = "hangang";
	string pw = "k1234";
	if (a.login(id, pw)) {
		cout << "�α���" << endl;
	}
	else {
		cout << "���̵� ��й�ȣ�� �߸��Ǿ����ϴ�." << endl;
	}
	cout << "------------------------" << endl;
	a.logout();


	return 0;
}