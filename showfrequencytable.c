#include <stdio.h>

void showfrequencytable(int frequencies[], int largestdatavalue)
{
	for(int i = 0; i <= largestdatavalue; i++)
	printf("%d\t%d\n" , i, frequencies[i]);
}
