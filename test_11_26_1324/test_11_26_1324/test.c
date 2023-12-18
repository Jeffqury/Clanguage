#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int  num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//%d是打印有符号的整数(会有正负数)
//%u是打印无符号的整数
//int main()
//{
//	unsigned int  num = 0;
//	scanf("%u", &num);
//	//while (num)
//	//{
//	//	printf("%d", num % 10);
//	//	num = num / 10;
//	//}
//	return 0;
//}

//int my_strlen(char str[])//参数部分写出的数组的形式
//int my_strlen(char* str)//参数部分写出指针的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen("arr");
//	printf("%d\n",len);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;//计数，临时变量
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);//可以写成++str,但是不建议A
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "abcef" };
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int bat(char* str)
//{
//	if (*str != '\0')
//		return 1 + bat(str + 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int bat(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count++;
//}
//
//int main()
//{
//	char ch[] = { "helloworld" };
//	int ret = bat(ch);
//	printf("%d", ret);
//	return 0;
//}

//int bat(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int bat(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + bat(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "helloworld" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int bat(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//int bat(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + bat(arr + 1);
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

//int bat(char*n)
//{
//	int count = 0;
//	while (*n != '\0')
//	{
//		count++;
//		n++;
//	}
//	return count++;
//}
//
//int main()
//{
//	char ch[] = { "hello world" };
//	int ret = bat(ch);
//	printf("%d", ret);
//	return 0;
//}

//int bat(char* y)
//{
//	if (*y != '\0')
//		return 1 + bat(y + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[] = { "hello world" };
//	int ret = bat(ch);
//	printf("%d", ret);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
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
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//	return 0;
//}

//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		printf("%c->%c\n", a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	hanoi(2 ,'a','b','c');
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
//	printf("最大公倍数是%d", b);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//}
//
//int main()
//{
//	int  n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c->%c\n", A,C);
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c->%c\n", A, C);
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//}

//int my_strlen(char *n)
//{
//	if (*n != '\0')
//		return 1 + my_strlen(n + 1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//int prime(int i)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
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
//		if (prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}

//int leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else 
//		return 0;
//}
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
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了，下标是:%d", ret);
//	}
//}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c->%c\n", A, C);
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//		printf("%c->%c\n", A, C);
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int bat(int a)
//{
//	if (a < 3)
//		return 1;
//	else
//		return bat(a - 1) + bat(a - 2);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = bat(a);
//	printf("%d", ret);
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
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要找的下标:");
//	scanf("%d", &k);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了，下标是:%d", ret);
//	}
//}

//int prime(int i)
//{
//	int j = 0;
//	int f = 1;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
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
//	for (year = 1000; year <= 2000; year+=4)
//	{
//		if (leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//}

//void print(int a)
//{
//	if (a > 9)
//		print(a / 10);
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int bat(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + bat(arr + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = {"hello world"};
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//
//}

//int bat(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "hello world" };
//	int ret = bat(arr);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Fib(a);
//	printf("%d", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Fib(a);
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公因数是:%d", b);
//}

//int main()
//{
//	int count = 0;
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			count++;
//		if (a / 10 == 9)
//			count++;
//	}
//	printf("count=%d", count);
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//			count++;
//		if (a / 10 == 9)
//			count++;
//	}
//	printf("count=%d", count);
//}

//int main()
//{
//	int a = 0;
//	double sum= 0;
//	int flag = 1;
//	
//	for (a = 1; a <= 100; a++)
//	{
//		sum = sum + flag * (1.0 / a);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//void menu()
//{
//	printf("1.开始游戏\n");
//	printf("0.结束游戏\n");
//}
//
//int game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入要猜测的数字:");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜中了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
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
//	double sum = 0;
//	int flag = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum = sum + flag * (1.0 / a);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//}

//int main()
//{
//	//数组是一组相同类型元素的集合
//	int arr[10];
//	char ch[5];
//	double data1[20];
//	double data2[15 + 5];
//	//下面的代码只能在支持C99标准的编译器上编译
//	/*int n = 10;
//	scanf("%d", &n);
//	int arr2[n];*///这种数组是不能初始话的
//	//在C99标准之前，数组的大小必须是常量或者常量表达式
//	//在C99之后，数组的大小可以是变量，为了支持边长数组
//	return 0;
//}

//int main()
//{
//	//不完全初始化，剩余的元素默认初始化为0；
//	int arr[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	char ch1[10] = { 'a','b','c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	char ch3[] = { 'a','b','c' };
//	char ch4[] = "abc";//字符串里面有个默认的\0;
//	//a b c \0 0 0 0 0 0 0
//	return 0;
//}

//int main()
//{
//	//一维数组随着数组下标的增长，元素的地址也在有规律的递增的
//	// 由此可以得出结论数组在内存中是有连续存放的
//	int arr[] = { 1,2,3,4,5,5,6,7,8,9,10 };
//	//[]下标引用操作符;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	return 0;
//}

//int main()
//{
//	//二维数组[][]第一个是行，第二个是列
//	int arr1[][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };//[3][4]3行4列,依次往进放
//	//int arr1[][4] = { {1,2,3,4},{3,4,5,6},{5,6,7,8} };//可以省略行，但是不可以省略列
//	char arr2[5][10];//5行数据，一行可以放10个字符；
//}


//int main()
//{
	//可以把二维数组理解为一维数组的数组；
	//int arr[3][3] = { {1,2,1},{2,2,2},{3,2,3} };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 3; j++)
	//	{
	//		scanf("%d", &arr[i][j]);
	//	}
	//}
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//
//	//二维数组也是在内存中连续存放
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//}


//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//冒泡排序法
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 6,7,8,9,5,4,2,1,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,9,8,2,3,7,6,4,5,10,20,11,19,12,18,13,17,14,16,15 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int  i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] >arr[j + 1])
//			{
//				int tmp = arr[j+1];
//				arr[j+1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,7,8,9,2,3,4,5,7,8,7,6,4,2,3,0,1,2,3,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] <arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = arr[j + 1];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}