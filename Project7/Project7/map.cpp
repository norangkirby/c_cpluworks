#include <iostream>

#include<map>

using namespace std;

int main() {

	map<string, int>dogs;
	dogs.insert({ "��Ƽ��",12 });
	dogs.insert({ "����",2 });
	dogs.insert({ "illgotomars",100000 });

	cout << dogs.size() << endl;

	cout << dogs["��Ƽ��"] << endl;

	map<string, int>::iterator it;
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << endl;
	}

	dogs["����"] = 1;
	for (auto dog : dogs) {
		cout << dog.second << endl;
	}
	dogs.erase("��Ƽ��");
	for (auto dog : dogs) {
		cout << dog.second << endl;
	}
	return 0;
}