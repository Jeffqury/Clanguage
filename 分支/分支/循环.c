#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = '\0';//定义一个初始转义字符
//	while ((ch = getchar()) != EOF)//开始循环，getchar函数从键盘上获取字符并且赋值到ch上，如果读取到的不是文件结束符，循环将继续执行
//	{
//		if (ch < '0' || ch>'9')//如果ch小于0或者大于9，则continue跳过本次循环进行下一次循环
//			continue;
//		putchar(ch);//将ch中的字符输出到屏幕上面
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
//    //sizeof(arr)计算的是数组的总大小，单位是字节
//    //sizeof(arr[0])--计算的是数组元素的大小
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
//        //假设max是最大值
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
//	int a[10][10];//定义了二维数组a，数组的大小是10x10
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
//	//int i = 1;//初始化
//	//while (i < 10)//判断
//	//{
//	//	printf("%d", i);
//	//	i++;//调整
//	//}
//	for (int i = 1; i <= 10; i++)//判断循环调整合为一体
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i = 12;//循环体内不要随便修改循环变量
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标0-9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//for循环的判断部分省略意味着判断会恒成立
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
//		for (j = 0; j < 10; j++)//j循环完10次后，循环结束，再回到外层循环，外层循环再循环一次内部循环，内部又循环完10次之后再出去回到外部，外部再进入内部循环，如此往复一直到外部十次内部十次循环完之后停止
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
//	printf("最大值是%d\n", max);
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
//	printf("最大值是:%d", c);
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



//计算N的阶乘
//1*2*3.....*n
//
//5*4*3*2*1

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//i为真，i小于等于n，则i++。打个比方：i为1，1小于等于5，则i循环5次
//	{
//		ret = ret * i;//ret是1，循环第一次是1*1，第二次是1*2，第三次是2*3，第四次是6*4，第五次是24*5等于120
//	}
//	printf("%d\n", ret);//打印结果为120
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
//	printf("最大公因数是%d", b);
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
//	printf("最大值是%d", max);
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
//		printf("找到了，下标是%d", i);
//		break;
//	}
//	if (i == sz)
//	{
//		printf("没找到");
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
//			printf("找到了%d",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到");
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
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到");
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
			printf("找到了%d", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到");
		}
	}
}