#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//typedef unsigned int uint;
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//void test()
//{
//	//ִ������
//	printf("hello world\n");
//}
//int main()
//{
//	return 0;
//}


//����ȫ�ֱ���
//�����ⲿ����
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//extern int add(int x, int y);
//int main()
//{
//	int c = 10;
//	int d = 20;
//	int z = add(c, d);
//	printf("%d\n", z);
//	return 0;
//}
//int main()
//{
//	//�Ĵ�������
//	register int num = 3;����3����ڼĴ����У������ǽ��飬���ܾ���
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//#define ADD(x,y) ((x)+(y))
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
	/*printf("%d\n", NUM);
	int N = NUM;
	printf("%d\n", N);
	int arr[NUM] = { 0 };*/
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int sum(int a)
//{
//	int c = 0;
//	static int b = 2;
//	c += 2;
//	b += 3;
//	return(a+ b+ c);
//}
//int main()
//{
//	int i;
//	int a = 5;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}


//int main()
//{
//	int i;
//	int num[100] = { 0 };
//	while(1)
//	{
//		for (i = 0; i < 100; i++)
//		{
//			if (num[i] > 10)
//			{
//				Sleep(10);
//				printf("%s", num[i] % 2 ? "�ú�ѧϰ" : "��������");
//			}
//			else printf("                       ");
//			if (num[i]-- < 0);
//			num[i] = rand() % 20;
//		}
//		system("color 0D");
//	}
//}


//ָ�����
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}


//ѧ��
struct stu
{
	//��Ա
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct stu* qs)
{
	/*printf("%s,%d,%s,%s\n", (*qs).name, (*qs).age, (*qs).sex, (*qs).tele);*/
	printf("%s,%d,%s,%s\n", qs->name, qs->age, qs->sex, qs->tele);
}
int main()
{
	struct stu s = {"Ǯ����",18,"��","12312312312"};
	/*printf("%s,%d,%s,%s\n",s.name,s.age,s.sex,s.tele);*/
	print(&s);
	return 0;
}

//int main()
//{
//	int i = 0;
//	while (i < 101)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}