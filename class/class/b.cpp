#include <iostream>

using namespace std;

class member {
public:
	//로그인함수
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
	cout<<"로그아웃"<<endl;
}
int main() {
	member a;

	string id = "hangang";
	string pw = "k1234";
	if (a.login(id, pw)) {
		cout << "로그인" << endl;
	}
	else {
		cout << "아이디나 비밀번호가 잘못되었습니다." << endl;
	}
	cout << "------------------------" << endl;
	a.logout();


	return 0;
}