#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//��ʼ������
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//�������
playermove(char board[ROW][COL], int row, int col);
//��������
computermove(char board[ROW][COL], int row, int col);
//���Ӯ��--����*
//����Ӯ��--����#
//ƽ��--����q
//����--����c
char iswin(char board[ROW][COL], int row, int col);