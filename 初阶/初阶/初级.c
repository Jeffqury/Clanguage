#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[3];
//	char tele[12];
//};
//void print(struct stu* s)
//{
//	/*printf("%s,%d,%s,%s", (*s).name, (*s).age, (*s).sex, (*s).tele);*/
//	printf("%s,%d,%s,%s", s->name, s->age, s->sex,s->tele);
//}
//int main()
//{
//	struct stu s = { "张三",18,"男","1423424141" };
//	/*printf("%s,%d,%s,%s", s.name, s.age, s.sex, s.tele);*/
//	print(&s);
//	return 0;
//}

//int main()
//{
	/*int a = 10;
	if (a=3)如果只写了一个等于，意思就是赋值给a一个3，两个等号判断不是10就不会打印
	{
		printf("hehe\n");
	}*/
	/*int age = 10;
	if (age > 18)
	{
		printf("成年");
	}*/
	/*int age = 10;
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能饮酒\n");
	}
	else
	{
		printf("成年");
	}*/

//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 100)
//	{
//		printf("老年\n");
//	}
//	else
//		printf("老寿星");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	else
//		printf("cnm\n");
//	return 0;
//}

//int test()
//{
//	int a = 1;
//	if (a == 1)
//		return 2;
//	else
//		return 5;
//}
//int main()
//{
//	int r = test();
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a%2)
//		printf("奇数\n");
//	else
//		printf("no");
//	return 0;
//}

/*int main()
{
	*//*int a = 0;*/
	/*for (int a= 0;a <= 100; a++)
		if (a % 2 == 1)
			printf("%d\n", a);*/
	/*int i = 1;
	while (i < 100)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
		i++;
	}
	return 0;
}*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	return 0;
//}



//int main()
	/*for (int i = 1; i <= 100; i++)
		if (i % 2 == 1)
			printf("%d\n", i);
	return 0;*/
	//int i = 1;
	//while (1 <= 100)
	//{
	//	printf("%d\n",i);
	//	i += 2;
	//}
	//return 0;

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//		break;
//	}
//}
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)//switch允许被嵌套
//		{
//		case 1:n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("M=%d,N=%d", m, n);
//	return 0;
//}


//
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
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		a++;
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int main()
//{
	/*int ch = 0;
	while(getchar())*/
	/*EOF;end of file<--*/
//	int ch = getchar();//getchar获取字符
//	printf("%c\n", ch);//方法1
//	putchar(ch);//方法2
//	return 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//运行时没有输入数据的时候，ch等待里面放了一个\n
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//
//int main()
//{
//	//举一个例子
//	//假设密码是一个字符串
//	char password[20];
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//getchar();//读取走了\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



int main()
{
	int n = 5, mids;
	mids = (n + 1) / 2;//折中
	for (int i = 0; i < mids; i++)
	{
		for (int j = 0; j < mids - i - 1; j++)
			printf(" ");
		//跟上一个星号
		printf("*");

		if (i != 0)
		{
			//空心棱形中间空格，奇数个空格数
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
				//每行最后输出*号
			printf("*");
		}
		//每行换行
		printf("\n");
	}	
	//棱形下半部分，i循环控制行数
	for (int i = mids - 2; i >= 0; i--)
	{
		//控制空格数
		for (int j = 0; j < mids - i - 1; j++)
			printf(" ");
		//空格输出跟上一个星号
		printf("*");
		//这里此时判断是不是最后一行了
		//最后一行是不需要输出空格的
		if (i != 0)
		{
			//控制中间空格数
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			//跟上一个星号
			printf("*");
		}
		printf("\n");
	}
	return 0;
}