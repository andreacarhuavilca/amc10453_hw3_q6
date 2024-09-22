// amc10453_hw3_q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// check for calls between 8 am to 6 pm monday thru friday and if true, then multiply it by 0.40
//calls before 8 am or after 6 pm mon - friday if true, multiply by 0.25 minute
//calls on saturday or sunday  charge at 0.15

#include <iostream>
using namespace std;

int main()
{
	const double daytimeRate = 0.40;
	const double nighttimeRate = 0.25;
	const double weekendRate = 0.15;
	double costOfCall;
	float callDurationInMins;
	string dayOfTheWeek;
	char colon; // doing this so user can do hh:mm format
	int hour, minute;
	
	cout << "What day of the week did you call? Ex: Monday is Mo "; cin >> dayOfTheWeek; 
	cout << "What time did the call start? Ex: 8:00 "; cin >> hour >> colon >> minute;
	cout << "How many minutes was the call? "; cin >> callDurationInMins;


	if  ((dayOfTheWeek  == "Mo" || dayOfTheWeek == "Tu" || dayOfTheWeek == "We" || dayOfTheWeek == "Th" || dayOfTheWeek == "Fr") && (hour >= 8 && hour < 18 ))
	{
		costOfCall = callDurationInMins* daytimeRate;
	}
	else if ((dayOfTheWeek == "Mo" || dayOfTheWeek == "Tu" || dayOfTheWeek == "We" || dayOfTheWeek == "Th" || dayOfTheWeek == "Fr") && (hour <= 8 || hour >= 18))
	{
		costOfCall = callDurationInMins* nighttimeRate;
	}
	else if (dayOfTheWeek == "Sa" || "Su") 
	{
		costOfCall = callDurationInMins * weekendRate;
	}
	else 
	{
		cout << "Invalid input";
	}

	cout << "The total cost of the call is: " << costOfCall << " dollars " << endl;





	return 0;
}

