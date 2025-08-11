#include <iostream>

#include<map>

using namespace std;

int main() {

	map<string, int>dogs;
	dogs.insert({ "말티즈",12 });
	dogs.insert({ "도지",2 });
	dogs.insert({ "illgotomars",100000 });

	cout << dogs.size() << endl;

	cout << dogs["말티즈"] << endl;

	map<string, int>::iterator it;
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << endl;
	}

	dogs["도지"] = 1;
	for (auto dog : dogs) {
		cout << dog.second << endl;
	}
	dogs.erase("말티즈");
	for (auto dog : dogs) {
		cout << dog.second << endl;
	}
	return 0;
}