#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//玩家移动
playermove(char board[ROW][COL], int row, int col);
//机器人移动
computermove(char board[ROW][COL], int row, int col);
//判断电脑或者玩家赢
char iswin(char board[ROW][COL], int row, int col);