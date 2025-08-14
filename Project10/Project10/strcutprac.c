#include <stdio.h>

#include <string.h>

#include <stdlib.h>

typedef struct {
	int score;
	char name[100];


}tasklist;

int main() {

	int stdnum;
	scanf("%d", &stdnum);

	tasklist* arr = (tasklist*)malloc(sizeof(tasklist) * stdnum);
	for (int i = 0; i < stdnum; i++) {
		scanf("%s", arr[i].name);

		scanf("%d", &arr[i].score);
	}

	free(arr);

	return 0;
}