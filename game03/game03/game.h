#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);
displayboard(char board[ROW][COL], int row, int col);
//玩家输入
playermove(char board[ROW][COL], int row, int col);
//电脑输入
computermove(char board[ROW][COL], int row, int col);
//玩家赢了--返回*
//电脑赢了--返回#
//平局--返回q
//继续--返回c
char iswin(char board[ROW][COL], int row, int col);