#pragma once
#include "head.h"
void display();
void display()
{
	system("cls");
	int i=0;
	int j=0;
	printf("     \t|A|B|\t|H|K|\n");
	for(i=1;i<=25;i++)
	{
		printf(" %d \t|",i);
		if(i<=2)//头等舱
		{
			for(j=1;j<=2;j++)
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
			for(j=4;j<=6;j+=2)
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
		else
		{
			if(i==3)
			{
				printf("\n");
				printf("     \t|A|B|C|\t|H|J|K|\n");
			}
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
			printf("\t");
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
	

	
	for (i = 0; i < names.size(); i++)
	{
		printf("%s   %s  size:%d,i:%d\n", names[i], _seat[i], names.size(),i);
	}
	


}
