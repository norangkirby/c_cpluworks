#include <iostream>
using namespace std;

int main()
{
	//C언어
	/*char seasons[4][10] = {"봄", "여름", "가을", "겨울"};

	//printf("%s\n", seasons[0]); //봄
	int len = sizeof(seasons) / sizeof(seasons[0]); //4
	for (int i = 0; i < len; i++) {
		printf("%s ", seasons[i]);
	}*/

	//문자열 배열 관리 - 생성, 요소 추가, 요소 수정, 요소 삭제, 검색
	string carts[] = { "라면", "쌀", "생수", "화장지" };

	//배열의 크기 - size()
	cout << size(carts) << endl; //4

	//요소 조회
	cout << carts[2] << endl;  //생수

	//전체 조회
	for (int i = 0; i < size(carts); i++) {
		cout << carts[i] << " ";
	}
	cout << endl;

	//요소 수정
	carts[1] = "빵";

	//범위 기반 for문 - for(자료형 변수 : 배열이름){}
	for (string cart : carts)
		cout << cart << " ";

	return 0;
}
