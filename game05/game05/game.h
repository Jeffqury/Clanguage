#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//玩家移动
playermove(char board[ROW][COL], int row, int col);
//电脑移动
computermove(char board[ROW][COL], int row, int col);
//判断输赢
iswin(char board[ROW][COL], int row, int col);