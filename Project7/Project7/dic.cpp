#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

	map<string, string> dict;

	dict.insert({ "�����","�ֿ�"});

	dict.insert({ "Gemini","Google���� ������ ����" });
	//cout << dict["Gemini"] << endl;
	//auto it = dict.find("�����");
	//cout << it->first <<" " << it->second << endl;
	

	string eng;
	while (true) {
		cout << "�ܾ� �Է�(exit-����)" << endl;
		cin >> eng;
		if (eng == "exit") {
			break;
		}
		else if (dict.find(eng) == dict.end()) {
			cout << "�ܾ� ����" << endl;
		}
		else {
			cout << dict[eng] << endl;
		}

	}
	return 0;
}