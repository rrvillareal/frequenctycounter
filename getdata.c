#include <stdio.h>

int getdata(int values[], int arraysize)
{
	int count = 0, num;
	do
	{
		scanf("%d", &num);
		values[count++] = num;
	
	}while(!feof(stdin));

return count-1;
}
