#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//&��λ��ֻҪ��0��Ϊ0������ͬʱΪ1��Ϊ1
//|��λ��ֻҪ��1��Ϊ1������ͬʱΪ0��Ϊ0
//^��λ�����ͬΪ0����ͬΪ1
//ֻ�ʺ�����(������)

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
//	printf("��������:");
//	scanf("%d", &num);
//	int a = count(num);
//	printf("32������λ��һ����%d��1",a);
//	return 0;
//}

//��ֵ������

//int mian()
//{
//	int a = 3;//��ʼ��
//	int b = 0;
//	b = 20;//��ֵ
//
//}

//��Ŀ������-->ֻ��һ��������

//a+b˫Ŀ������+������2��2��������
//int main()
//{
//	int flag = 3;
//	if (flag)//flagΪ�棬����if
//	{}
//	if(!flag)//flagΪ�٣�����if
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

//�߼�������
//&&�߼��룬����
//||�߼��򣬻���
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;//aΪ3��bΪ��5������Ϊ�棬C���Ϊ1,���Ϊ��C���Ϊ0
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
