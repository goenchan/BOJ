#include <stdio.h>

int main() {
	int a;
	
	scanf("%d", &a);
	printf("%c", a == 100 ? 65 : a > 59 ? 9 - a / 10 + 65 : 70);
}