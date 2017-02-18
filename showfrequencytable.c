/***
Robert Villareal
rrvillareal@csu.fullerton.edu
CPSC223C-01
Assignment 1
Due: 2/11/2017
Program title: Frequency counting
File name: assignment1_showfrequencytable.c
Purpose: This main function shows the frequency table that was created.
***/

#include <stdio.h>

void showfrequencytable(int frequencies[], int largestdatavalue)
{
	for(int i = 0; i <= largestdatavalue; i++)
	printf("%d\t%d\n" , i, frequencies[i]);
}
