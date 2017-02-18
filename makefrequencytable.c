/***
Robert Villareal
rrvillareal@csu.fullerton.edu
CPSC223C-01
Assignment 1
Due: 2/11/2017
Program title: Frequency counting
File name: assignment1_makefrequencytable.c
Purpose: This main function makes the frequency table.
***/

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
