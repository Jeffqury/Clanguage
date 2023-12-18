#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 //int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 2,3,4,5,6,7,8,9,0,1,2,23,4,23, };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d",arr[i]);
//		i = i += 1;
//	}
//	return 0;
//}
//int get_max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int max = get_max(a, b);
//    printf("max=%d");
//    return 0;
//}
//int a(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int c = 0;
//	int d = 0;
//	scanf("%d%d", &c, &d);
//	int sum = a(c, d);
//	printf("答案是%d\n", sum);
//	return 0;
//}
//int a(int x, int y)
//
//{
//
//    if (x > y)             //如果x大于y
//
//        return x;     //则返回x
//
//    else               //如果小于y
//
//        return y;        //则返回y
//
//}
//
//int main()
//
//{
//
//    int c = 0;     //定义俩个变量
//
//    int d = 0;
//
//    scanf("%d%d", &c, &d);    //输入值
//
//    int max = a(c, d);    //计算
//
//    printf("max=%d", max);    //打印结果
//
//    return 0;
//
//}
//int top(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = top(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", i);
//		i = i + 1;
//	}
//	return 0;
//}

//int main()
//{	
//	// /除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数，就执行浮点数的除法
//	float a = 7 / 2.0;
//	int b = 7 % 2;  //取模 
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//	a += 3;
//	a -= 3;
//	return 0;
//}


//c语言中
//0表示假的
//非0表示真
//int main()
	//int flag = 0;
	//if (!flag)
	//{
	//	printf("呵呵\n");
	//}
	/*int a = -10;
	int b = -a;
	printf("%d\n", b);
	return 0;*/
	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));*/
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//int a = 10;
	///*int b = a++;*/
	////int b = a;a= a+1;
	//int b = --a;
	//printf("%d\n", b);//
	//printf("%d\n", a);//
	//return 0; 
	//int a = (int)3.14;(int)//强制类型转换
	//printf("%d\n", a);
	////3.14字面浮点数，编译器默认理解为double类型
	//return 0;
	

//int main()
//{
//	int a = 10;
//	if (a = 3)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	// &&逻辑与-并且
//	//||逻辑或
//	/*int a = 0;
//	int b = 20;
//	if (a || b)
//	{
//		printf("hehe");
//	}*/
//	/*int a = 100;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d\n", r);*/
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);//c = 10 - 2 =8,a =20 +8,8-3=5,取最后一个值5
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n]= 20;//下面的arr[n]是访问数组元素，可以使用变量，不会创建数组，[]就是下标引用操作符
//
//	return 0;
//}

//函数调用操作符
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//()就是函数调用操作符，add2，3都是()的操作数
//	return 0;
//}
//int main()
//{
//	int a = 10;//自动变量 所有局部变量都是auto类型的，可以省略掉
//
//	return 0;
//}

 