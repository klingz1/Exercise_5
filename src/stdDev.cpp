// Name: Zachary Kling, Wade Glenn
// Course: CSC 260, Section 01
// Semester: Spring 2013
// Instructor: Dr. Pulimood
// Excersise 5
// Description: Calculates the mean and Standard deviation of a set of numbers in an input file
// Filename: stdDev.cpp
// Last modified on: 2/19/13

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

void inputData(int scores[])
{
	ifstream inputFile;
	string fname;
	bool fileFound = false;
		
	do
	{
		//Prompt user for filename
		cout << "Please enter the filename.\n";
		cin >> fname;
		
		//Check to see if file is found
		inputFile.open(fname.c_str());
		
		//If not, error msg and repeat
		if(inputFile.fail())
		{
			cout << "File not found. Please try again!\n";
			inputFile.ignore(80, '\n');
			inputFile.clear();
		}
			
		else
			fileFound = true;
			
	} while(!fileFound);
	
	//Instantiate values in array to -1
	for(int i = 0; i < 200; i++)
		scores[i] = -1;
	
	//Fill scores with data from file
	int count = 0;
	while(!inputFile.eof())
	{
		inputFile >> scores[count];
		count++;
	}
	
	inputFile.close();
}

bool calcStdDev(int scores[], double& mean, double& stdDev)
{
	//if scores has less than three values, return false
	if(scores[2] == -1)
		return false;
	
	//Calculate the mean
	double sum = 0.0;
	for(int i = 0; i < 200; i++)
	{
		if(scores[i] == -1)
		{
			mean = (sum/(double)i);
			break;
		}
		sum += (double)scores[i];
	}
	
	
	//Calculate the std dev	
	sum = 0.0;
	for(int i = 0; i < 200; i++)
	{
		if(scores[i] == -1)
		{
			stdDev = sqrt(sum/(double)(i-1));
			break;
		}
		sum += pow(mean-scores[i], 2);
	}
	
	return true;
}

void displayResults(double mean, double stdDev)
{
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "The mean of the data set in the input file is: " << mean << endl
		 << "The standard deviation of the data set in the input file is: " << stdDev << endl;
}