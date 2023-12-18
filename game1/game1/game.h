#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);
//打印棋盘
displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
playermove(char board[ROW][COL], int row, int col);
//电脑下棋
computermove(char board[ROW][COL], int row, int col);

