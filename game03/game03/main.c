#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("1.play\n");
	printf("0.exit\n");
}

void game()
{
	char ret=0;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		//判断输赢
		ret=iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);
		computermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);
	}
	if (ret == '#')
	{
		printf("玩家赢了\n");
	}
	else if (ret=='*')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	displayboard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入:");
		scanf("%d", &input);
		switch (input)
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