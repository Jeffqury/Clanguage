#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Add.h"
//函数的声明
//x和y写不写都可以

//导入静态库
#pragma comment(lib,"add.lib")
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d", sum);
}