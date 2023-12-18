#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "AAAAAAaaaabbbbbBBBBBcccccCCCCCDD";
//	char arr2[] = "********************************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(300);
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//比较两个字符串是否相等，不能使用 == ，而应该使用一个库函数：strcmp
//如果返回值是0，表示两个字符串相等
//int main()
//{
//	int i = 0;
//	//假设密码是字符串：abcdef
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);//数组名本来就是地址
//		if (strcmp(password,"abcdef")==0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入均错误，请退出程序");
//	}
//	return 0;
//}


int main()
{
	char arr1[] = "AAAAAAaaaaaaAAAAAA";
	char arr2[] = "##################";
	int left = 0;
	int right = strlen(arr2)-1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(300);
		/*system("cls");*/
		left++;
		right--;
	}
	printf("%s", arr2);
}