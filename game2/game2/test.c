#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
}
void game()
{
	//��ʼ������
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		computermove(board, ROW, COL);
		displayboard(board, ROW, COL);
	}

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ��ַ�������������\n");
			break;
		}
	} while (input);
	return 0;
}