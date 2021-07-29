#pragma once
#include "head.h"
 	void flash(void)
 	{
        const char* filename = "Log-10313214-20210729.txt";
       
        long offset = -1;
        char dest[7];
        char name_[40];
        int current_pos = 0;
        FILE* fp = fopen(filename, "r");
 	
        char  ch = (char)fgetc(fp);
    const char CR = '\n';/*假设文件中的换行符是回车符号*/
    const int MAX_CHAR_PER_LINE = 100;/*假设每行最大100个字符*/
 
    
    
 
    
    
  
    /*初始化dest数组*/

 
    /*将文件指针移动到倒数第一个字符*/
   fseek(fp, offset, SEEK_END);
 
    /*从后往前寻找第一个回车符号为止*/
  
        /*将找到的数字加入dest数组*/
        if (ch =='#')
        {
        	offset += -1;
        	current_pos = fseek(fp, offset, SEEK_END);
        	ch = (char)fgetc(fp);
            char src[2] = { ch, '\0' };
            strcat(dest, src);
            offset += -1;
        	current_pos = fseek(fp, offset, SEEK_END);
        	ch = (char)fgetc(fp);
            src[0] = ch;
            src[1] = '\0';
            strcat(dest, src);
            offset += -1;
        	current_pos = fseek(fp, offset, SEEK_END);
        	ch = (char)fgetc(fp);
        	if(ch=='#')
        	{
        		 offset += -3;
        		current_pos = fseek(fp, offset, SEEK_END);

        		while((ch = (char)fgetc(fp))!=' ')
        		{
                    src[0] = ch;
                    src[1] = '\0';
            		strcat(name_, src);
            		offset += -1;
        			current_pos = fseek(fp, offset, SEEK_END);
        		}
        	}
        	else
        	{
                src[0] = ch;
                src[1] = '\0';
            strcat(dest, src);
            offset += -1;
        	current_pos = fseek(fp, offset, SEEK_END);
        	offset += -3;
        		current_pos = fseek(fp, offset, SEEK_END);
        		while((ch = (char)fgetc(fp))!=' ')
                {
                    
                    src[0] = ch;
                    src[1] = '\0';
            		strcat(name_, src);
            		offset += -1;
        			current_pos = fseek(fp, offset, SEEK_END);
        		}

        	}
        	_strrev(dest);
        	_strrev(name_);
           // names[0] = name_;
        	//_seat.push_back(dest);
        	int temp=0;
        	if(dest[1]<='9'&&dest[1]>='0')
        	{
        		
        		temp=int(dest[0]-'0')*10+int(dest[1]-'0');
        		switch(dest[2])
        		{
        			case 'A':
        			{
        				seat[temp][1]=1;
        				break;
        			}
        			case 'B':
        			{
        				seat[temp][2]=1;
        				break;
        			}
        			case 'C':
        			{
        				seat[temp][3]=1;
        				break;
        			}
        			case 'H':
        			{
        				seat[temp][4]=1;
        				break;
        			}
        			case 'J':
        			{
        				seat[temp][5]=1;
        				break;
        			}
        			case 'K':
        			{
        				seat[temp][6]=1;
        				break;
        			}
        			default:
        			{
        				break;
        			}
        		}
        	}
        	else
        	{
        		temp=int(dest[0]-'0');
        		switch(dest[1])
        		{
        			case 'A':
        			{
        				seat[temp][1]=1;
        				break;
        			}
        			case 'B':
        			{
        				seat[temp][2]=1;
        				break;
        			}
        			case 'C':
        			{
        				seat[temp][3]=1;
        				break;
        			}
        			case 'H':
        			{
        				seat[temp][4]=1;
        				break;
        			}
        			case 'J':
        			{
        				seat[temp][5]=1;
        				break;
        			}
        			case 'K':
        			{
        				seat[temp][6]=1;
        				break;
        			}
        			default:
        			{
        				break;
        			}
        		}
        	}
        }

    
}
 
   