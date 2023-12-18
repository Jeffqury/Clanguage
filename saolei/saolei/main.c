#include"game.h"
void menu()
{
	printf("1.玩游戏\n");
	printf("2.退出游戏\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷信息
	//初始化数组的内容为指定的内容
	//mine数组在没有布置雷的时候,都是'0'
	initboard(mine, ROWS, COLS,'0');
	//show数组在没有排查雷的时候都是'*'
	initboard(show, ROWS, COLS, '*');
	//设置雷
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
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			input = 0;
			printf("结束游戏\n");
			break;
		default:
			printf("非法字段，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}