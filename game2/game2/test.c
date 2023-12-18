#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
}
void game()
{
	//初始化棋盘
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
		printf("请输入:");
		scanf("%d", &input);
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
	return 0;
}