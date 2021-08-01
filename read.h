#pragma once
#include "head.h"
#include "display.h"
class Flash
{
public:
   
    Flash();
    const char* filename = "Data-10313214-20210801.txt";
    FILE* fp = fopen(filename, "r+");
    ~Flash()
    {
        fclose(fp);
    }
};


 	Flash:: Flash(void)
 	{
        
        char s[100],ch;
        
        
        fseek(this->fp,0L,SEEK_END);
        fprintf(this->fp, "1111");
        
       
        
        while (fgetc(this->fp) != '\n')
        {
            
            fseek(this->fp, -2L, SEEK_CUR); 
            
        }
        
        fprintf(this->fp, "1111");        system("pause");
        int i=0; //printf("1111");
        while (EOF != (s[i] = fgetc(fp)))//将文件读入source_code储存
        {
            printf("%c", s[i]);
            
        i++;

        }
        s[i] = '\0';
       //printf("%s", s);
        //printf("1111");
        char name_[20];
        int index=38;
       
         i=0;
         //printf("%s", s);
        
        while(s[index]!='"')
        {
            
            name_[i]=s[index];
            i++;
            index++;
        }
        name_[i] = '\0';
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
                    case 'A':
                    {
                        col=1;
                        break;
                    }
                    case 'B':
                    {
                        col=2;
                        break;
                    }
                    case 'C':
                    {
                        if(row<=2)
                            return ;
                        col=3;
                        break;
                    }
                    case 'H':
                    {
                        col=4;
                        break;
                    }
                    case 'J':
                    {
                        if(row<=2)
                            return ;
                        col=5;
                        break;
                    }
                    case 'K':
                    {
                        col=6;
                        break;
                    }
                    default:
                    {
                        return;
                        break;
                    }
                }
                if(seat[row][col]==1)
                    return;
                else
                {
                    seat[row][col]=1;
                    int i = 0;
                    while (name_[i] != '\0')
                    {
                        names[index_][i] = name_[i];
                        i++;
                    }
                    names[index_][i] = '0';
                    
                   // names.push_back(str);
                    num[2] = '\0';
                    i = 0;
                    while (num[i] != '\0')
                    {
                        _seat[index_][i] = num[i];
                        i++;
                    }
                    _seat[index_][i] = '\0';
                   
                    //_seat.push_back(str);
                    index_++;
                    display();
                }
               
            }
            else if(s[index]<='9'&&s[index]>='0')
            {
               
                int row=int(s[index-1]-'0')*10+int(s[index]-'0');
                num[0]=s[index-1];
                num[1]=s[index];
                num[2]=s[++index];
                int col=0;
                switch(num[2])
                {
                    case 'A':
                    {
                        col=1;
                        break;
                    }
                    case 'B':
                    {
                        col=2;
                        break;
                    }
                    case 'C':
                    {
                        if(row<=2)
                            return;
                        col=3;
                        break;
                    }
                    case 'H':
                    {
                        col=4;
                        break;
                    }
                    case 'J':
                    {
                        if(row<=2)
                            return;
                        col=5;
                        break;
                    }
                    case 'K':
                    {
                        col=6;
                        break;
                    }
                    default:
                    {
                        return;
                        break;
                    }
                }
                if(seat[row][col]==1)
                    return;
                else
                {
                    seat[row][col] = 1;
                    int i = 0;
                    while (name_[i] != '\0')
                    {
                        names[index_][i] = name_[i];
                        i++;
                    }
                    names[index_][i] = '0';

                    // names.push_back(str);
                    num[3] = '\0';
                    i = 0;
                    while (num[i] != '\0')
                    {
                        _seat[index_][i] = num[i];
                        i++;
                    }
                    _seat[index_][i] = '\0';

                    //_seat.push_back(str);
                    index_++;
                    display();
                }
            }
            else
            {
            
                return;
            }

        }
        else
            return;
    
    
            
    }


 
   