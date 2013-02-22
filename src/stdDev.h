// Name: Zachary Kling, Wade Glenn
// Course: CSC 260, Section 01
// Semester: Spring 2013
// Instructor: Dr. Pulimood
// Excersise 5
// Description: Calculates the mean and Standard deviation of a set of numbers in an input file
// Filename: stdDev.h
// Last modified on: 2/19/13


//-----------------------------------------------------------------------------------------
//
//  Function: inputData()
//
//  Parameters:
//  	input int; array of scores
//
//  Pre-condition:
//		the input file contains integers separated by white space
//
//  Post-condition: 
//		input scores will be populated with values from input file
//-----------------------------------------------------------------------------------------
void inputData(int scores[]);



//-----------------------------------------------------------------------------------------
//
//  Function: calcStdDev()
//
//  Parameters:
//  	input int; array of scores
//		input double&; mean is passed by reference to be changed in function
//		input double&; std dev is passed by reference to be changed in function
//
//  Pre-condition: 
//		input array is populated with more than 0 values
//
//  Post-condition: 
//		returns true if standard deviation is calculated 
//		successfully, false otherwise
//
//		mean and std dev will be calculated and set to according values
//-----------------------------------------------------------------------------------------
bool calcStdDev(int scores[], double& mean, double& stdDev);



//-----------------------------------------------------------------------------------------
//
//  Function: displayResults()
//
//  Parameters:
//  	input double; mean calculated by calcStdDev()
//		input double; standard deviation calculated by calcStdDev()
//
//  Pre-condition:
//		calcStdDev() call returned a true
//
//  Post-condition:
//		mean and std dev are printed to the screen
//-----------------------------------------------------------------------------------------
void displayResults(double mean, double stdDev);