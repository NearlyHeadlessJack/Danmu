#pragma once
#include "head.h"
 	void flash(void)
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





    }
 
   