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
	//下棋
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
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();
		printf("请输入:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("非法字符，请重新输入\n");
			break;
		}
	} while (input);
}