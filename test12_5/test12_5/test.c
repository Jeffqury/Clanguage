#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//&按位与只要有0就为0，两个同时为1就为1
//|按位或只要有1就为1，两个同时为0就为0
//^按位异或相同为0，不同为1
//只适合整数(正负数)

//		int count(int num)
//		{
//			int count = 0;
//			while (num)
//			{
//				count += num & 1;
//				num >>= 1;
//			}
//			return count;
//		}
//
//int main()
//{
//	int num;
//	printf("输入数字:");
//	scanf("%d", &num);
//	int a = count(num);
//	printf("32个比特位中一共有%d个1",a);
//	return 0;
//}

//赋值操作符

//int mian()
//{
//	int a = 3;//初始化
//	int b = 0;
//	b = 20;//赋值
//
//}

//单目操作符-->只有一个操作数

//a+b双目操作符+操作符2有2个操作数
//int main()
//{
//	int flag = 3;
//	if (flag)//flag为真，进入if
//	{}
//	if(!flag)//flag为假，进入if
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a+1);
//	printf("%p\n", &a);
//	printf("%p\n", &a-1);
//	return 0;
//}

//逻辑操作符
//&&逻辑与，并且
//||逻辑或，或者
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;//a为3，b为非5两个都为真，C结果为1,如果为假C结果为0
//	printf("%d\n", c);
//	c = a || b;
//	printf("%d", c);
//}

//leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}


int main()
{
	char i = 'n';
	int j = 10;
	int c = 20;
	char k = "hello world";

}
