#include <stdio.h>


int commoness(int a, int b) {
    if (b == 0)
        return a;
    else
        return commoness(b, a % b);
}


int main() {

    int a, b;
    scanf("%d %d", &a, &b);

	printf("�ִ�����: %d", commoness(a, b)); 
    
    
	return 0;
}