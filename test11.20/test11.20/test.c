#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
//void menu()
//{
//	printf("*******************\n");
//	printf("****1.��ʼ��Ϸ*****\n");
//	printf("****0.�˳���Ϸ*****\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand();
//	while (1)
//	{
//		printf("��������Ҫ�µ�����:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡������^_^\n");
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
//		printf("������:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���ϷT_T\n");
//			break;
//		default:
//			printf("�Ƿ��ַ�������������v_v\n");
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
//	printf("1.��ʼ��Ϸ\n");
//	printf("0.������Ϸ\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������Ҫ�µ�����\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("������Ϸ\n");
//			break;
//		default:
//			printf("�Ƿ��ַ�������������\n");
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
//	printf("���ֵΪ:%d", c);
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
//	printf("������Ҫ���ҵ��ַ��±�:");
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//void menu()
//{
//	printf("1.��ʼ��Ϸ\n");
//	printf("0.�˳���Ϸ\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������²������:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!!\n");
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
//		printf("������:");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�Ƿ��ַ�������������\n");
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

