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
//int b = 20;//ȫ�ֱ���
//int main()
//{
	//short age = 18;//����
	//int hight = 168;//���
	//float weight = 62.5;//����
//	int a = 10;//�ֲ�����
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	return 0;
//}

//дһ�����룬����2�������ĺ�
int main()
{
	int num1 = 0;
	int num2 = 0;//������ʱ��Ӹ�0���ǳ�ʼ�������Ǹ�һ��ֵ

	//������������
	scanf("%d %d", &num1, &num2);
	//���
	int sum = num1 + num2;
	//���
	printf("%d\n", sum);
	return 0;
}