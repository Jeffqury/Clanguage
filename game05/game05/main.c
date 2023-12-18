#include"game.h"
void menu()
{
	printf("1.开始游戏\n");
	printf("2.结束游戏\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		playermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
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
	if (ret == '*')
		printf("玩家胜利\n");
	else if (ret == '#')
		printf("电脑胜利\n");
	else
		printf("平局");
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
		case 2:
			printf("游戏退出\n");
			input = 0;
			break;
		default:
			printf("非法字符，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}