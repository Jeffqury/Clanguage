#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��ʼ������
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//����ƶ�
playermove(char board[ROW][COL], int row, int col);
//�������ƶ�
computermove(char board[ROW][COL], int row, int col);
//�жϵ��Ի������Ӯ
char iswin(char board[ROW][COL], int row, int col);