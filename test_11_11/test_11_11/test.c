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
//	printf("����%d\n", sum);
//	return 0;
//}
//int a(int x, int y)
//
//{
//
//    if (x > y)             //���x����y
//
//        return x;     //�򷵻�x
//
//    else               //���С��y
//
//        return y;        //�򷵻�y
//
//}
//
//int main()
//
//{
//
//    int c = 0;     //������������
//
//    int d = 0;
//
//    scanf("%d%d", &c, &d);    //����ֵ
//
//    int max = a(c, d);    //����
//
//    printf("max=%d", max);    //��ӡ���
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
//	// /���ŵ����˶���������ʱ��ִ�е��������������������ֻҪ��һ������������ִ�и������ĳ���
//	float a = 7 / 2.0;
//	int b = 7 % 2;  //ȡģ 
//	printf("%.2f\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//	a += 3;
//	a -= 3;
//	return 0;
//}


//c������
//0��ʾ�ٵ�
//��0��ʾ��
//int main()
	//int flag = 0;
	//if (!flag)
	//{
	//	printf("�Ǻ�\n");
	//}
	/*int a = -10;
	int b = -a;
	printf("%d\n", b);
	return 0;*/
	/*int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));*/
	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 ���������������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr[0]));
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//int a = 10;
	///*int b = a++;*/
	////int b = a;a= a+1;
	//int b = --a;
	//printf("%d\n", b);//
	//printf("%d\n", a);//
	//return 0; 
	//int a = (int)3.14;(int)//ǿ������ת��
	//printf("%d\n", a);
	////3.14���渡������������Ĭ�����Ϊdouble����
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
//	// &&�߼���-����
//	//||�߼���
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
//	int d = (c = a - 2, a = b + c, c - 3);//c = 10 - 2 =8,a =20 +8,8-3=5,ȡ���һ��ֵ5
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n]= 20;//�����arr[n]�Ƿ�������Ԫ�أ�����ʹ�ñ��������ᴴ�����飬[]�����±����ò�����
//
//	return 0;
//}

//�������ò�����
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int sum = add(2, 3);//()���Ǻ������ò�������add2��3����()�Ĳ�����
//	return 0;
//}
//int main()
//{
//	int a = 10;//�Զ����� ���оֲ���������auto���͵ģ�����ʡ�Ե�
//
//	return 0;
//}

 