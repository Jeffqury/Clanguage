#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#include"add.h"
//#pragma once防止头文件被重复包含
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int ret = add(a, b);
	printf("%d", ret);
	return 0;
}