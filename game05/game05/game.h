#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��ʼ������
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//����ƶ�
playermove(char board[ROW][COL], int row, int col);
//�����ƶ�
computermove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
iswin(char board[ROW][COL], int row, int col);