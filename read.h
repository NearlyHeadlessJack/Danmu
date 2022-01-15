#pragma once
#include "head.h"
#include "display.h"
class Flash
{
public:

    Flash();
    const char* filename = "Data-10313214-20220115.txt";
    FILE* fp = fopen(filename, "r");

    ~Flash()
    {
        fclose(fp);
    }
};


Flash:: Flash(void)
{

    char s[100],ch;
    char code[1000000];
    int length= 0;
    // fseek(this->fp, 0L, SEEK_SET);
    while (EOF != (code[length] = fgetc(fp)))//将文件读入source_code储存
    {
        length++;
    }
    code[length] = '\0';
    //int j = 0;
    //{
    //  printf("%c", code[j]);
    //}
    int trace = 0;
    while (code[length - trace] != '{')
    {
        trace++;
    }



    //  system("pause");


    //fseek(this->fp,0L,SEEK_END);
    // fprintf(this->fp, "1111");

    //fseek(this->fp, -2L, SEEK_CUR);

    //while (fgetc(this->fp) != '\n')
    // {

    //    fseek(this->fp, -2L, SEEK_CUR); 

    // }

    // fprintf(this->fp, "1111");        system("pause");
    // int i=0; //printf("1111");
    // while (EOF != (s[i] = fgetc(fp)))//将文件读入source_code储存
    {
        //    printf("%c", s[i]);

        // i++;

    }
    //  s[i] = '\0';
    //printf("%s", s);
    //printf("1111");


    char name_[40];
    int index=38;

    int  i=0;
    //printf("%s", s);

    while(code[length - trace + index]!='"')
    {

        name_[i]=code[length - trace + index];
        i++;
        index++;

    }
    name_[i] = '\0';
    //printf("\n\n\n%s", name_);
    //system("pause");
    index+=14;
    char num[4];
    i=0;
    if(code[length - trace + index] =='#'&& code[length - trace + index+1] <='9'&& code[length - trace + index+2] >='0')
    {

        num[i]= code[length - trace + index+1];
        index+=2;
        i++;
        if((code[length - trace + index] >='A'&& code[length - trace + index] <='C')||(code[length - trace + index] >='H'&& code[length - trace + index] <='K'))
        {

            num[i]= code[length - trace + index];
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
                total++;
                display();
            }

        }
        else if(code[length - trace + index] <='9'&& code[length - trace + index] >='0')
        {

            int row=int(code[length - trace + index-1] -'0')*10+int(code[length - trace + index] -'0');
            num[0]= code[length - trace + index-1];
            num[1]= code[length - trace + index];
            num[2]= code[length - trace + index+1];
            index++;
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
                total++;
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


    this->~Flash();
}


 
   