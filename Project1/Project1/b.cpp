#include <iostream>

using namespace std;

typedef struct {
	int math;
	int kor;
	int eng;
}score;

int main() {
	int stu;
	cout << "�л� ��: " << endl;
	cin >> stu;
	score* arr = new score[stu];
	
	
	for (int i = 0; i < stu; i++) {
		cin >> arr[i].math;
		cin >> arr[i].kor;
		cin >> arr[i].eng;
	}
	int highmath = arr[0].math;
	int highkor = arr[0].kor;
	int higheng = arr[0].eng;
	int mathsum = 0;
	int korsum = 0;
	int engsum = 0;
	for (int i = 0; i < stu; i++) {
		if (arr[i].math > highmath) {
			highmath = arr[i].math;
		}
		if (arr[i].kor > highkor) {
			highkor = arr[i].kor;
		}
		if (arr[i].eng > higheng) {
			higheng = arr[i].eng;
		}
		mathsum += arr[i].math;
		korsum += arr[i].kor;
		engsum += arr[i].eng;
	}
	cout << "���� ���: " << (float)mathsum / stu << endl;
	cout << "���� ���: " << (float)korsum / stu << endl;
	cout << "���� ���: " << (float)engsum / stu << endl;
	cout << "���� �ְ���: " << highmath << endl;
	cout << "���� �ְ���: " << highkor << endl;
	cout << "���� �ְ���: " << higheng << endl;
	delete[] arr;

	return 0;
}