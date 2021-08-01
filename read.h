#pragma once
#include "head.h"
 	int flash(void)
 	{
        const char* filename="xxx.txt";
        char s[200],ch;
        FILE *fp=fopen(filename,"r");
        fseek(fp,0L,SEEK_END);

        while(fgetc(fp)!='\n')
            fseek(fp,-2L,SEEK_CUR);
        int i=0;
        while (EOF != (s[i] = fgetc(fp)))//将文件读入source_code储存
        {

        i++;

        }
        s[i] = '\0';

        printf("%s",s);
        char name_[30];
        int index=38;
        int i=0;
        while(s[index]!='"')
        {
            name_[i]=s[index];
            i++;
            index++;
        }
        index+=14;
        char num[4];
        i=0;
        if(s[index]=='#'&&s[index+1]<='9'&&s[index+1]>='0')
        {

            num[i]=s[index+1];
            index+=2;
            i++;
            if((s[index]>='A'&&s[index]<='C')||(s[index]>='H'&&s[index]<='K'))
            {
                num[i]=s[index];
                int row=int(num[0]-'0');
                int col=0;
                switch(num[1])
                {
                    case A:
                    {
                        col=1;
                        break;
                    }
                    case B:
                    {
                        col=2;
                        break;
                    }
                    case C:
                    {
                        if(row<=2)
                            return 0;
                        col=3;
                        break;
                    }
                    case H:
                    {
                        col=4;
                        break;
                    }
                    case J:
                    {
                        if(row<=2)
                            return 0;
                        col=5;
                        break;
                    }
                    case K:
                    {
                        col=6;
                        break;
                    }
                    default:
                    {
                        return 0;
                        break;
                    }
                }
                if(seat[row][col]==1)
                    return 0;
                else
                {
                    seat[row][col]=1;
                    names.push_back(name_);
                    _seat.push_back(num);
                    display();
                }
               
            }
            else if(s[index]<=9&&s[index]>=0)
            {
                int row=int(s[index-1]-'0')*10+int(s[index]-'0');
                num[0]=s[index-1];
                num[1]=s[index];
                num[2]=s[++index];
                int col=0;
                switch(num[2])
                {
                    case A:
                    {
                        col=1;
                        break;
                    }
                    case B:
                    {
                        col=2;
                        break;
                    }
                    case C:
                    {
                        if(row<=2)
                            return 0;
                        col=3;
                        break;
                    }
                    case H:
                    {
                        col=4;
                        break;
                    }
                    case J:
                    {
                        if(row<=2)
                            return 0;
                        col=5;
                        break;
                    }
                    case K:
                    {
                        col=6;
                        break;
                    }
                    default:
                    {
                        return 0;
                        break;
                    }
                }
                if(seat[row][col]==1)
                    return 0;
                else
                {
                    seat[row][col]=1;
                    names.push_back(name_);
                    _seat.push_back(num);
                    display();
                }
            }
            else
            {
                return 0;
            }

        }
        else
            return 0;




    }
 
   