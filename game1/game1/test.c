#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("1.play\n");
	printf("0.exit\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		computermove(board,ROW,COL);
		displayboard(board, ROW, COL);
	}
}

int main()
{
	srand((unsigned int)time(NULL));//������������������
	int input = 0;
	do
	{
		menu();
		printf("������:");
		scanf("%d",&input);
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
}