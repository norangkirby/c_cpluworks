#include <stdio.h>

void convert(int a) {
	if (a == 0 || a ==1) {
		printf("%d", a);
	}
	else {
		convert(a / 2);
		printf("%d", a % 2);
	}
}

int main() {
	int x = 11;

	convert(x);
	



	return 0;
}