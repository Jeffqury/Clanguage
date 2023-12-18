#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));
	printf("%zu\n", sizeof(long long));
	printf("%zu\n", sizeof(float));
	printf("%zu\n", sizeof(double));
	return 0;
}
int main()
{
	int age = 20;
	float price = 66.6;
	printf("%f\n", price);
	return 0;
*/
//int b = 20;//全局变量
//int main()
//{
	//short age = 18;//年龄
	//int hight = 168;//身高
	//float weight = 62.5;//体重
//	int a = 10;//局部变量
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}

//写一个代码，计算2个整数的和
int main()
{
	int num1 = 0;
	int num2 = 0;//创建的时候加个0就是初始化，就是给一个值

	//输入两个整数
	scanf("%d %d", &num1, &num2);
	//求和
	int sum = num1 + num2;
	//输出
	printf("%d\n", sum);
	return 0;
}