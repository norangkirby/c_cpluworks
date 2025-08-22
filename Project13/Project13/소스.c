#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int id;
	char password[100];
	
}login;

int main() {

	int a;
	scanf("%d", &a);
	login* arr = (login*)malloc(sizeof(login) * a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i].id);
		scanf("%s", arr[i].password);
	}


}