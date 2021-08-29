#include<stdio.h>
int main() {
	int x, y, z, a, b, c;
	printf("Enter number : ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	printf("\n---------------------------\n");
	a = x + y, b = x + z, c = y + z;
	if (a <= b && b <= c) {
		printf("Sum is %d and %d", a, b);
	}
	else if (a <= c && c <= b) {
		printf("Sum is %d and %d", a, c);
	}
	else if (b <= a && a <= c) {
		printf("Sum is %d and %d", b, a);
	}
	else if (b <= c && c <= a) {
		printf("Sum is %d and %d", b, c);
	}
	else if (c <= a && a <= b) {
		printf("Sum is %d and %d", c, a);
	}
	else if (c <= b && b <= a) {
		printf("Sum is %d and %d", c, b);
	}
	return 0;
}