#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("****1.开始游戏*****\n");
//	printf("****0.退出游戏*****\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand();
//	while (1)
//	{
//		printf("请输入你要猜的数字:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你！猜中了^_^\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏T_T\n");
//			break;
//		default:
//			printf("非法字符！请重新输入v_v\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	char arr1[] = { "AAAaaaAAA" };
//	char arr2[] = { "*********" };
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);
//		/*system("cls");*/
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}

//void menu()
//{
//	printf("1.开始游戏\n");
//	printf("0.结束游戏\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入要猜的数字\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("结束游戏\n");
//			break;
//		default:
//			printf("非法字符，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &c);
//	while (a < 3)
//	{
//		scanf("%d", &b);
//		if (b > c)
//		{
//			c = b;
//		}
//		a++;
//	}
//	printf("最大值为:%d", c);
//}

//int main()
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 10 == 8)
//		{
//			printf("%d ", a);
//		}
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	printf("请输入要查找的字符下标:");
//	scanf("%d", &k);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	while (left<=right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("1.开始游戏\n");
//	printf("0.退出游戏\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入猜测的数字:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("非法字符，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			j++;
//		if (i / 10 == 9)
//			j++;
//	}
//	printf("%d", j);
//	return 0;
//
//}

