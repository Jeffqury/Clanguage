#include"game.h"
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	while (1)
	{
		//����ƶ�
		playermove(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);
		//�����ƶ�
		computermove(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		displayboard(board, ROW, COL);
	}
	if (ret = '*')
		printf("���ʤ��\n");
	else if (ret = '#')
		printf("����ʤ��\n");
	else
		printf("ƽ��\n");
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
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("�Ƿ��ַ�������������\n");
			break;
		}
	} while (input);
	return 0;
}