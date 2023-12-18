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
//	printf("计算的结果是%d\n", sum);
//	swap(&a, &b);
//	printf("转换后a=%d,b=%d\n",a,b);
//	return 0;
//}

//int main()
//{
//	char arr2[20] = { "hello! world!" };
//	memset(arr2+7, 'x', 5);//指针的偏移arr2+7;
//	memset(arr2, 'y', 5);
//	printf("%s", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[30];
//	char arr2[30] = { "hello world!my name is jack" };
//	strcpy(arr1, arr2);//把arr2的值复制到arr1
//	printf("%s", arr1);//输出结果为arr2的值
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
//	printf("转换前是%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("转换后是%d,%d\n", a, b);
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
//	printf("\n100-200的素数总共是:%d", count);
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

//判断是否是素数的函数
//int prinum(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)//从2开始遍历到n(i)的平方根，检查n(i)是否能被整除;
//	{
//		if (n % j == 0)//如果n(i)能被j整除说明n(i)不是素数
//			return 0;//则返回0
//	}
//	return 1;//如果n(i)不能被2到n(i)的平方根之间任何的数整除，说明n(i)是素数，返回1
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 101; i <= 200; i += 2)//遍历101-200之间所有的奇数(因为偶数肯定不是素数)
//	{
//		if (prinum(i))
//		{
//			k++;//计算一共多少个素数
//			printf("%d ", i);//打印素数
//		}
//	}
//	printf("\n%d", k);//打印出现了多少个素数
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
//	printf("1.开始游戏\n");
//	printf("0.结束游戏\n");
//}
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
//		else if(guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你猜中了\n");
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
//		printf("请输入：");
//		scanf("%d", &i);
//		switch (i)
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
//	} while (i);
//	return 0;
//}

//闰年的判断规则
//能被4整除并且不能被一百整除是闰年
//能被400整除也是闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d年\n", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d年\n", year);
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
//			printf("%d年\n", year);
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
//			printf("%d年\n", year);
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
//		判断year是不是闰年
//		if (leap_year(year))
//		{
//			printf("%d年\n", year);
//		}
//	}
//}

//int binary_search(int arr[], int k, int sz)//形参arr[]看上去是个数组，本质上是个指针变量
//{
//	//数组传参实际上传递的是数组首元素地址
//	//而不是整个数组
//	//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
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
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//找不到返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//	return 0;
//}
//形式参数和实际参数的名字可以相同也可以不同

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
//	printf("请输入要找的下标");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d",ret);
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
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到T_T");
//	}
//	else
//		printf("找到了!下标是:%d", ret);
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
//			printf("%d年\n", year);
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
//	printf("请输入要找的下标");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
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
//	printf("请输入要找的下标");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了,下标是%d", ret);
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
//	printf("请输入要找的下标");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了,下标是%d", ret);
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
//			printf("第%d年是闰年\n", year);
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
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了,下标是%d", ret);
//	}
//	return 0;
//}

//函数不写返回值的时候，默认返回类型是int
//add(int x, int y)不推荐
//{
//	return x + y;
//}
//链式访问
//int main()
//{
//	int len = strlen("abcdef");
//	/*printf("%d", len);*/
//	//链式访问
//	/*printf("%d", strlen("abcdef"));*/
//	printf("%d", printf("%d", printf("%d", 43)));//先打印43，传到前面的printf有43是两个值所以和前面的打印2，打印2之后第一个打印1的值，结果是4321
//	return 0;
//}

//int add(int x, int y)//不推荐
//{
//	printf("hehe\n");
//}
////上面的代码在一些编译器上返回的是函数中执行过程中最后一条指令执行的结果
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
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int ret = bat(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了，下标是:%d", ret);
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
