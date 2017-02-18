#include <stdio.h>

void makefrequencytable(int values[ ], int actualsizeofcollection, int frequencies[ ], int largestdatavalue)
{
//Ensures 0 is initialized for each frequency.
	for(int i = 0; i < largestdatavalue; i++)
		frequencies[i] = 0;
	//Updates frequency values.
	for(int i = 0; i < actualsizeofcollection; i++)
	frequencies[values[i]]++;
}
