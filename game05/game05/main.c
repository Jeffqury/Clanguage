#include"game.h"
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("2.������Ϸ\n");
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
		printf("���ʤ��\n");
	else if (ret == '#')
		printf("����ʤ��\n");
	else
		printf("ƽ��");
	displayboard(board, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("������:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("��Ϸ�˳�\n");
			input = 0;
			break;
		default:
			printf("�Ƿ��ַ�������������\n");
			break;
		}
	} while (input);
	return 0;
}