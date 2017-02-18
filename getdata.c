/***
Robert Villareal
rrvillareal@csu.fullerton.edu
CPSC223C-01
Assignment 1
Due: 2/11/2017
Program title: Frequency counting
File name: assignment1_getdata.c
Purpose: This getdata function gets data from user.

***/
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
