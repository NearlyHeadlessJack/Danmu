#pragma once
#include "head.h"
void display();
void display()
{
	system("cls");
	int i=0;
	int j=0;
	printf("     \t|A|B|C|\t|H|J|K|\n");
	seat[1][3] = 1;
	seat[1][5] = 1;
	seat[2][3] = 1;
	seat[2][5] = 1;
	for(i=1;i<=25;i++)
	{
		printf(" %d \t|",i);
		if(i<=2)//头等舱
		{
			for (j = 1; j <= 3; j++)
			{
				if (seat[i][j] == 1)
				{
					printf("*|");
				}
				else
				{
					printf(" |");
				}
			}
			printf("\t|");
			for (j = 4; j <= 6; j++)
			{
				if (seat[i][j] == 1)
				{
					printf("*|");
				}
				else
				{
					printf(" |");
				}

			}
			printf("\n");
		}
		else
		{
			
			for(j=1;j<=3;j++)
			{
				if(seat[i][j]==1)
				{
					printf("*|");
				}
				else
				{
					printf(" |");
				}
			}
			printf("\t|");
			for(j=4;j<=6;j++)
			{
				if(seat[i][j]==1)
				{
					printf("*|");
				}
				else
				{
					printf(" |");
				}

			}
			printf("\n");
		}
	}
	
	printf("Total: %d\n", total+4);
	
	//for (i = 0; i < index_; i++)
	//{
	//	printf("\n", names[i], _seat[i], index_,i);
	//}
	


}
