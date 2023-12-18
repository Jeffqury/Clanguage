#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void initboard(char board[ROW][COL], int row, int col);

displayboard(char board[ROW][COL], int row, int col);

playermove(char board[ROW][COL], int row, int col);

computermove(char board[ROW][COL], int row, int col);