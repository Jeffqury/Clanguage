#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = '\0';//����һ����ʼת���ַ�
//	while ((ch = getchar()) != EOF)//��ʼѭ����getchar�����Ӽ����ϻ�ȡ�ַ����Ҹ�ֵ��ch�ϣ������ȡ���Ĳ����ļ���������ѭ��������ִ��
//	{
//		if (ch < '0' || ch>'9')//���chС��0���ߴ���9����continue��������ѭ��������һ��ѭ��
//			continue;
//		putchar(ch);//��ch�е��ַ��������Ļ����
//	}
//	return 0;
//}
//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	return 0;
//}

//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int i = 0;
//    //sizeof(arr)�������������ܴ�С����λ���ֽ�
//    //sizeof(arr[0])--�����������Ԫ�صĴ�С
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    while (i < sz)
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//    return 0;
//}

//int main()
//{
//        int i = 0;
//        int n = 0;
//        int max = 0;
//        //����max�����ֵ
//        scanf("%d", &max);
//        while (i < 3)
//        {
//            scanf("%d", &n);
//            if (n > max)
//                max = n;
//            i++;
//        }
//        printf("%d\n", max);
//        return 0;
//}

//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int i = 0;
//    sizeof(arr);
//    sizeof(arr[0]);
//    int sum = sizeof(arr) / sizeof(arr[0]);
//    while (i < sum)
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//    return 0;
////}
//int main()
//{
//	int arr[] = { 81,74,67,110,109,115,108};
//	int i = 0;
//	sizeof(arr);
//	sizeof(arr[0]);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//}

//int main()
//{
//	char ch[] = {12,123,34,223,34,54,42,123};
//	int i = 0;
//	int sum = sizeof(ch) / sizeof(ch[0]);
//	while (i < sum)
//	{
//		printf("%c", ch[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a[10][10];//�����˶�ά����a������Ĵ�С��10x10
//	for (int i = 0; i < 10; i++) {
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (int i = 2; i < 10; i++) {
//		for (int j = 1; j < i; j++) {
//
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++) {
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	//int i = 1;//��ʼ��
//	//while (i < 10)//�ж�
//	//{
//	//	printf("%d", i);
//	//	i++;//����
//	//}
//	for (int i = 1; i <= 10; i++)//�ж�ѭ��������Ϊһ��
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i = 12;//ѭ�����ڲ�Ҫ����޸�ѭ������
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�±�0-9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//forѭ�����жϲ���ʡ����ζ���жϻ�����
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)//jѭ����10�κ�ѭ���������ٻص����ѭ�������ѭ����ѭ��һ���ڲ�ѭ�����ڲ���ѭ����10��֮���ٳ�ȥ�ص��ⲿ���ⲿ�ٽ����ڲ�ѭ�����������һֱ���ⲿʮ���ڲ�ʮ��ѭ����֮��ֹͣ
//		{
//			printf("hehe");
//		}
//	}
//}

//int main()
//{
//	int arr[] = { 10,21,32,43,54,65,77,88,99,100 };
//	int i = 0;
//	int sum = sizeof(arr) / sizeof(arr[0]);
//	while (i < sum)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int weight = 0;
//	int heigh = 0;
//	scanf("%d %d", &weight, &heigh);
//	float bmi = weight / (heigh / 100.0) / (heigh / 100.0);
//	printf("%.2f", bmi);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (a < 3)
//	{
//		scanf("%d", &b);
//		if (b > max)
//			max = b;
//		a++;
//	}
//	printf("���ֵ��%d\n", max);
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
//			c = b;
//		a++;
//	}
//	printf("���ֵ��:%d", c);
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100;a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}



//����N�Ľ׳�
//1*2*3.....*n
//
//5*4*3*2*1

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//iΪ�棬iС�ڵ���n����i++������ȷ���iΪ1��1С�ڵ���5����iѭ��5��
//	{
//		ret = ret * i;//ret��1��ѭ����һ����1*1���ڶ�����1*2����������2*3�����Ĵ���6*4���������24*5����120
//	}
//	printf("%d\n", ret);//��ӡ���Ϊ120
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = ret+sum;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���������%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (a < 3)
//	{
//		scanf("%d", &b);
//		if (b > max)
//			max = b;
//		a++;
//	}
//	printf("���ֵ��%d", max);
//}

//int main()
//{
//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//int k = 7;
//int i = 0;
//int sz = sizeof(arr) / sizeof(arr[0]);
//for (i = 1; i < sz; i++)
//{
//	if (arr[i] == k)
//	{
//		printf("�ҵ��ˣ��±���%d", i);
//		break;
//	}
//	if (i == sz)
//	{
//		printf("û�ҵ�");
//	}
//}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = left+(right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���%d",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���");
//		}
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���%d", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���");
		}
	}
}