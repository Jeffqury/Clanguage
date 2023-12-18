#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a1 = 0;
	int a2 = 0;
	scanf("%d %d", &a1, &a2);
	int sum = add(a1, a2);
	printf("%d\n", sum);
	return 0;
}