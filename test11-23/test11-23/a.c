#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
//void swap(int *x, int *y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//compute(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum =compute(a,b);
//	printf("����Ľ����%d\n", sum);
//	swap(&a, &b);
//	printf("ת����a=%d,b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	char arr2[20] = { "hello! world!" };
//	memset(arr2+7, 'x', 5);//ָ���ƫ��arr2+7;
//	memset(arr2, 'y', 5);
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[30];
//	char arr2[30] = { "hello world!my name is jack" };
//	strcpy(arr1, arr2);//��arr2��ֵ���Ƶ�arr1
//	printf("%s", arr1);//������Ϊarr2��ֵ
//}

//void swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("ת��ǰ��%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("ת������%d,%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n100-200�������ܹ���:%d", count);
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		int j = 0;
//		int f = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				f = 0;
//				break;
//			}
//		}
//		if (f == 1)
//		{
//			k++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", k);
//	return 0;
//}

//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime(i))
//		{
//			k++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", k);
//	return 0;
//}

//�ж��Ƿ��������ĺ���
//int prinum(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//��2��ʼ������n(i)��ƽ���������n(i)�Ƿ��ܱ�����;
//	{
//		if (n % j == 0)//���n(i)�ܱ�j����˵��n(i)��������
//			return 0;//�򷵻�0
//	}
//	return 1;//���n(i)���ܱ�2��n(i)��ƽ����֮���κε���������˵��n(i)������������1
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 101; i <= 200; i += 2)//����101-200֮�����е�����(��Ϊż���϶���������)
//	{
//		if (prinum(i))
//		{
//			k++;//����һ�����ٸ�����
//			printf("%d ", i);//��ӡ����
//		}
//	}
//	printf("\n%d", k);//��ӡ�����˶��ٸ�����
//	return 0;
//}

//int main()
//{
//	char arr[] = { "hello world!" };
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	
//}

//int main()
//{
//	char arr1[20];
//	char arr2[] = { "hello world" };
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
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
//		printf("������²������:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if(guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�������\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &i);
//		switch (i)
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
//	} while (i);
//	return 0;
//}

//������жϹ���
//�ܱ�4�������Ҳ��ܱ�һ������������
//�ܱ�400����Ҳ������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d��\n", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d��\n", year);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d��\n", year);
//		}
//	}
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d��\n", year);
//		}
//	}
//}

//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
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
//		�ж�year�ǲ�������
//		if (leap_year(year))
//		{
//			printf("%d��\n", year);
//		}
//	}
//}

//int binary_search(int arr[], int k, int sz)//�β�arr[]����ȥ�Ǹ����飬�������Ǹ�ָ�����
//{
//	//���鴫��ʵ���ϴ��ݵ���������Ԫ�ص�ַ
//	//��������������
//	//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
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
//			return mid;//�ҵ��˷����±�
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������Ҫ�ҵ��±�:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˷����±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//��ʽ������ʵ�ʲ��������ֿ�����ͬҲ���Բ�ͬ

//bool prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int add(int r)
//{
//	return r+1;
//}
//
//int main()
//{
//	int num = 0;
//	num=add(num);
//	printf("%d\n", num);
//	num=add(num);
//	printf("%d\n", num);
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
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
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������Ҫ�ҵ��±�");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d",ret);
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������Ҫ�ҵ��±�:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���T_T");
//	}
//	else
//		printf("�ҵ���!�±���:%d", ret);
//	return 0;
//}

//int run_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
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
//		if (run_year(year))
//			printf("%d��\n", year);
//	}
//	return 0;
//}

//int leap_year(int y)
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
//			printf("%d\n", year);
//	}
//	return 0;
//}

//int prime(int n)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			f = 0;
//			break;
//		}
//	}
//	if (f == 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime(i))
//			printf("%d ", i);
//	}
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ�ҵ��±�");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//}

//int leap_year(int y)
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
//}

//int sushu(int s)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(s); j++)
//	{
//		if (s % j == 0)
//		{
//			f = 0;
//			break;
//		}
//	}
//	if (f == 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i++)
//	{
//		if (sushu(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//leap_year(y)
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
//}

//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ�ҵ��±�");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d", ret);
//	}
//}

//int sushu(int n)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			f = 0;
//			break;
//		}
//	}
//	if (f == 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (sushu(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int leap_year(y)
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
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ�ҵ��±�");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d", ret);
//	}
//}

//int prime(int n)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			f = 0;
//			break;
//		}
//	}
//	if (f == 1)
//	{
//		return 1;
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int leap_year(int y)
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
//			printf("��%d��������\n", year);
//	}
//	return 0;
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if(arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("������Ҫ�ҵ��±�:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d", ret);
//	}
//	return 0;
//}

//������д����ֵ��ʱ��Ĭ�Ϸ���������int
//add(int x, int y)���Ƽ�
//{
//	return x + y;
//}
//��ʽ����
//int main()
//{
//	int len = strlen("abcdef");
//	/*printf("%d", len);*/
//	//��ʽ����
//	/*printf("%d", strlen("abcdef"));*/
//	printf("%d", printf("%d", printf("%d", 43)));//�ȴ�ӡ43������ǰ���printf��43������ֵ���Ժ�ǰ��Ĵ�ӡ2����ӡ2֮���һ����ӡ1��ֵ�������4321
//	return 0;
//}

//int add(int x, int y)//���Ƽ�
//{
//	printf("hehe\n");
//}
////����Ĵ�����һЩ�������Ϸ��ص��Ǻ�����ִ�й��������һ��ָ��ִ�еĽ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

/*nt main()
{
	printf("%d", strlen("abcde"));
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}*/

//int prime(int n)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			f = 0;
//			break;
//		}
//	}
//	if (f == 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (prime(i))
//		{
//			c++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d", c);
//}

//int bat(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
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
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ�ҵ��±�:");
//	scanf("%d", &k);
//	int ret = bat(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d", ret);
//	}
//}

//int bat(char* a)
//{
//	if (*a != '\0')
//		return 1 + bat(a + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//int bat(char* y)
//{
//	int c = 0;
//	while (*y != '\0')
//	{
//		c++;
//		y++;
//	}
//	return c++;
//}
//
//int main()
//{
//	char ch[] = { "hello world" };
//	int ret = bat(ch);
//	printf("%d", ret);
//	return 0;
//}

void print(int a)
{
	if (a > 9)
		print(a / 10);
	printf("%d ", a % 10);
}

int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
