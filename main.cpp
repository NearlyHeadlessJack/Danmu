#include "database.h"
#include "read.h"
#include "display.h"
#include<time.h>


int main()
{
	clock_t t1 = clock();
	
	while(1)
	{
		clock_t t2 = clock();
		if (t2 - t1 > 1.5)
		{
			Flash ne;
			t1 = clock();
		}

		else
			continue;

		
	//	system("pause");
	}
		
	return 0;
}