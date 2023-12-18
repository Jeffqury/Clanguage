#include<stdio.h>
int main()
{
	char a; //字符型变量
	short int b;//
	int c;//整型
	long int d;//长整型
	float e = 3.8f;//浮点数
	double f = 5.6;//双浮点型(实数)
	unsigned int g = 101;
	printf("sizeof(a) =%d\n",sizeof(a));
	printf("sizeof(b) =%d\n",sizeof(b));
	printf("sizeof(c) =%d\n",sizeof(c));
	printf("sizeof(d) =%d\n",sizeof(d));
	printf("sizeof(e) =%d\n",sizeof(e));
	printf("sizeof(f) =%d\n",sizeof(f));
	printf("sizeof(g) =%d\n",sizeof(g));
	return 0;
}