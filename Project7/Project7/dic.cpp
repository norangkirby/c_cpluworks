#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

	map<string, string> dict;

	dict.insert({ "고양이","애옹"});

	dict.insert({ "Gemini","Google에서 개발한 깡통" });
	//cout << dict["Gemini"] << endl;
	//auto it = dict.find("고양이");
	//cout << it->first <<" " << it->second << endl;
	

	string eng;
	while (true) {
		cout << "단어 입력(exit-종료)" << endl;
		cin >> eng;
		if (eng == "exit") {
			break;
		}
		else if (dict.find(eng) == dict.end()) {
			cout << "단어 없음" << endl;
		}
		else {
			cout << dict[eng] << endl;
		}

	}
	return 0;
}