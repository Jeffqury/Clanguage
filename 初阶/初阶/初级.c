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
//	struct stu s = { "����",18,"��","1423424141" };
//	/*printf("%s,%d,%s,%s", s.name, s.age, s.sex, s.tele);*/
//	print(&s);
//	return 0;
//}

//int main()
//{
	/*int a = 10;
	if (a=3)���ֻд��һ�����ڣ���˼���Ǹ�ֵ��aһ��3�������Ⱥ��жϲ���10�Ͳ����ӡ
	{
		printf("hehe\n");
	}*/
	/*int age = 10;
	if (age > 18)
	{
		printf("����");
	}*/
	/*int age = 10;
	if (age < 18)
	{
		printf("δ����\n");
		printf("��������\n");
	}
	else
	{
		printf("����");
	}*/

//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("������\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 100)
//	{
//		printf("����\n");
//	}
//	else
//		printf("������");
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
//		printf("����\n");
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
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
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
//		printf("ѡ�����");
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
//		switch (n)//switch����Ƕ��
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
//	int ch = getchar();//getchar��ȡ�ַ�
//	printf("%c\n", ch);//����1
//	putchar(ch);//����2
//	return 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//����ʱû���������ݵ�ʱ��ch�ȴ��������һ��\n
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//
//int main()
//{
//	//��һ������
//	//����������һ���ַ���
//	char password[20];
//	printf("����������:>");
//	scanf("%s", password);
//	//getchar();//��ȡ����\n
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):>");
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
	mids = (n + 1) / 2;//����
	for (int i = 0; i < mids; i++)
	{
		for (int j = 0; j < mids - i - 1; j++)
			printf(" ");
		//����һ���Ǻ�
		printf("*");

		if (i != 0)
		{
			//���������м�ո��������ո���
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
				//ÿ��������*��
			printf("*");
		}
		//ÿ�л���
		printf("\n");
	}	
	//�����°벿�֣�iѭ����������
	for (int i = mids - 2; i >= 0; i--)
	{
		//���ƿո���
		for (int j = 0; j < mids - i - 1; j++)
			printf(" ");
		//�ո��������һ���Ǻ�
		printf("*");
		//�����ʱ�ж��ǲ������һ����
		//���һ���ǲ���Ҫ����ո��
		if (i != 0)
		{
			//�����м�ո���
			for (int k = 0; k < 2 * i - 1; k++)
				printf(" ");
			//����һ���Ǻ�
			printf("*");
		}
		printf("\n");
	}
	return 0;
}