// 금속조형디자인과 2학년
// B743014 양혜진

#include <stdio.h>

int power(int *xp, int *yp)
{
	int i;
	int result = 1;

	for (i = 0; i < *yp; i++)
		result *= *xp;

	return result;
}

int main(void)
{
	int a = 2;
	int b = 3;
	int result = power(&a, &b);
	printf("%d^%d : %d\n", a, b, result);

	a = 3;
	b = 4;
	result = power(&a, &b);
	printf("%d^%d : %d\n", a, b, result);

	return 0;
}
