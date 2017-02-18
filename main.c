/***
Robert Villareal
rrvillareal@csu.fullerton.edu
CPSC223C-01
Assignment 1
Due: 2/11/2017
Program title: Frequency counting
File name: assignment1_main.c
Purpose: This main function controls the calling of other functions.

***/

#include <stdio.h>

int getdata(int values[], int arraysize);
void makefrequencytable(int values[], int actualsizeofcollection, int frequencies[], int largestdatavalue);
void showfrequencytable(int frequencies[], int largestdatavalue);

int main()
{
	int maxValue;
	printf("Welcome to Frequency Counter programmed by Robert Villareal\n");
	printf("What is the maximum value in the set of data? ");
	scanf("%d", &maxValue);
	printf("Enter the data values separated by white space. Hit Enter then Cntl+D to terminate.\n");
	int array[100];
	int numOfValues = getdata(array, 100);
	printf("Thank you. The number of values entered is %d.\n", numOfValues);
	int freq[maxValue+1];
	makefrequencytable(array, numOfValues, freq, maxValue+1);
	printf("Here is the frequency table:\nValue\tFrequency\n");
	showfrequencytable(freq, maxValue);
	printf("Thank you for using this open source software. Bye.\n");
}
