#define _CRT_SECURE_NO_WARNINGS
//#include"game.h"
//void initboard(char board[ROW][LIS], int row, int lis)//三子棋
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <lis; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void displayboard(char board[ROW][LIS], int row, int lis)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < lis; j++)
//		{
//			printf("%c", board[i][j]);
//			if (j < lis - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			for (j = 0; j < lis; j++)
//			{
//				printf("-");
//				if (j < lis - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//void playermove(char board[ROW][LIS], int row, int lis)
//{
//	printf("玩家走\n");
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//		printf("请输入要下的坐标\n");
//		scanf("%d%d", &x, &y);
//		//判断落子处是否有棋
//		if (x > 0 && x <= row && y > 0 && y <= row)
//		{
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("输入错误，请重新输入：\n");
//			}
//		}
//		else
//		{
//			printf("输入错误，请重新输入：\n");
//		}
//	}
//}
//void computermove(char board[ROW][LIS], int row, int lis)
//{
//	printf("电脑走\n");
//	Sleep(1000);
//	int x = 0;
//	int y = 0;
//	while (1)
//	{
//			x = rand()%LIS;
//			y = rand()%LIS;
//			if (board[x][y] == ' ')
//			{
//				board[x][y] = '#';
//				break;
//			}
//	}
//}
//int isfull(char board[ROW][LIS], int row, int lis)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < lis; j++)
//		{
//			if (board[i][j] == ' ')
//				return 1;
//		}
//	}
//	return 0;
//}
//char iswin(char board[ROW][LIS], int row, int lis)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//横行
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//		//竖行
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//斜行
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	int m = isfull(board, ROW, LIS);
//	if (m == 0)
//	{
//		return 'f';
//	}
//}——————————————————————————
//扫雷
//#include "game.h"
//void initboard(char show[ROWS][LISS], int rows, int liss,char set)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0; x <= rows; x++)
//	{
//		for (y = 0; y <= liss; y++)
//		{
//			show[x][y] = set;
//		}
//	}
//}
//void displayboard(char show[ROWS][LISS], int row, int lis)
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0; x <row+1; x++)
//	{
//		printf("%d ", x);
//	}
//	printf("\n");
//	for (x = 1; x <= row; x++)
//	{
//		printf("%d ", x);
//		for (y = 1; y <= lis; y++)
//		{
//			printf("%c ", show[x][y]);
//		}
//		printf("\n");
//	}
//}
//void setmine(char mine[ROWS][LISS], int row, int lis)
//{
//	int x = 0;
//	int y = 0;
//	int i = MINE;
//	while (i > 0)
//	{
//		x = rand()%row+1;
//		y = rand()%lis+1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			i--;
//		}
//	}
//}
//int minecount(char mine[ROWS][LISS], int x, int y)
//{
//	return mine[x][y - 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y] +
//		mine[x + 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x - 1][y + 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y + 1] - 8 * '0';//1+'0'='1'  3+'0'='3' '1'-'0'=1....
//}
//void showmore(char show[ROWS][LISS], char mine[ROWS][LISS], int x, int y)
//{
//	if (x > 0 && y > 0 && x <= ROW && y <= LIS)
//	{
//		int count = 0;
//		y -= 1;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		y += 1;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		y -= 1;
//		x -= 1;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		x += 2;//x+=1
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		x -= 2;
//		y -= 1;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		x -= 1;
//		y += 2;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		x += 2;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//		y -= 2;
//		count = minecount(mine, x, y);
//		show[x][y] = count + '0';
//		if (show[x][y] == '0')
//		{
//			showmore(show, mine, x, y);
//		}
//	}
//}
//void findmine(char show[ROWS][LISS], char mine[ROWS][LISS], int row, int lis)
//{
//	int x = 0;
//	int y = 0;
//	int m = 0;
//	while (1)
//	{
//		printf("请输入坐标：");
//		scanf("%d%d", &x, &y);
//		if (x > 0 && x <= row && y > 0 && y <= lis)
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("踩到雷了，你被炸死了！\n");
//				displayboard(mine, ROW, LIS);
//				break;
//			}
//			else
//			{
//				
//				int count = minecount(mine,x,y);
//				show[x][y] = count + '0';
//				/*if (show[x][y] == '0')
//				{
//					showmore(show, mine, x, y);
//				}*/
//				printf("恭喜你成功避开了雷，继续排雷吧\n");
//				displayboard(show, ROW, LIS);
//				m++;
//			}
//			if (m == row*lis - MINE)
//			{
//				printf("真厉害！雷已经扫完了\n");
//				break;
//			}
//		}
//		else
//		{
//			printf("输入错误，请重新输入：");
//		}
//	}
//}
