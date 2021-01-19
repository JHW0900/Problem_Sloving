#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	if (a == 0) puts("zero");
	else if (a > 0) puts("plus");
	else puts("minus");

	return 0;
}