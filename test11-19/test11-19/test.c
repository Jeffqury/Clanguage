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
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//�Ƚ������ַ����Ƿ���ȣ�����ʹ�� == ����Ӧ��ʹ��һ���⺯����strcmp
//�������ֵ��0����ʾ�����ַ������
//int main()
//{
//	int i = 0;
//	//�����������ַ�����abcdef
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);//�������������ǵ�ַ
//		if (strcmp(password,"abcdef")==0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������,����������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef")==0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳�����");
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