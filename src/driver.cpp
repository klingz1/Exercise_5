// Name: Zachary Kling, Wade Glenn
// Course: CSC 260, Section 01
// Semester: Spring 2013
// Instructor: Dr. Pulimood
// Excersise 5
// Description: Calculates the mean and Standard deviation of a set of numbers in an input file
// Filename: driver.cpp
// Last modified on: 2/19/13

#include "stdDev.h"
#include <iostream>

using namespace std;

int main()
{
	int scores[200];
	double mean, stdDev;
	
	//Fill array with data from input file
	inputData(scores);
	
	//Calculate Std Dev and check for bool value
	//if true, display
	if(calcStdDev(scores, mean, stdDev))
		displayResults(mean, stdDev);
	else
		cout << "The standard deviation could not be calculated. " << endl
			 << "More than two values are required in the data set." << endl;
}