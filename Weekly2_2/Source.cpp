#include<stdio.h>
int main() {//65010536
	int a, b, c=0, d = 0, i;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);
	printf("%d + %d = %d\n", a, b, (a + b));
	printf("%d - %d = %d\n", a, b, (a - b));
		for (i = 0; i < b; i++) {
			c = c + a;
		}
	printf("%d * %d = %d\n", a, b, c);
	if (a < b) {
		printf("%d / %d = 0\n", a, b);
	}
	else if (a > b) {
		for (i = 0; d < a; i++) {
			d = d + b;
		}
		printf("%d / %d = %d\n", a, b, i);
	}
	return 0;
}