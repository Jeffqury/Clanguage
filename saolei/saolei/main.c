#include"game.h"
void menu()
{
	printf("1.����Ϸ\n");
	printf("2.�˳���Ϸ\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ�����Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų��������Ϣ
	//��ʼ�����������Ϊָ��������
	//mine������û�в����׵�ʱ��,����'0'
	initboard(mine, ROWS, COLS,'0');
	//show������û���Ų��׵�ʱ����'*'
	initboard(show, ROWS, COLS, '*');
	//������
	setmine(mine,ROW,COL);
	displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			input = 0;
			printf("������Ϸ\n");
			break;
		default:
			printf("�Ƿ��ֶΣ�����������\n");
			break;
		}
	} while (input);
	return 0;
}