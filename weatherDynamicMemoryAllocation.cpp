//Project 6 - Dynamic Memory Allocation

#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int size_m = 0;
double *tempMemory = new double[size_m];
double *windSMemory = new double[size_m];
string *windDMemory = new string[size_m];
int inputs = 0;

void option1(string &stat, double &temper, double &windS, string &windD)
{
	if (inputs == size_m)
	{
		inputs = size_m;
	}
	else
	{
		inputs++;
	}

	cout << "Name of station: ";
	cin.ignore(300, '\n');
	getline(cin, stat);
	cout << "Current Temperature (F): ";
	cin >> temper;
	cout << "Current wind speed (MPH): ";
	cin >> windS;
	cout << "Current wind direction (N, S, NE, etc): ";
	cin >> windD;

	cout << "welcome to the " << stat << " Weather Station" << endl;
	cout << "The current temperature is " << temper << " F" << endl;
	cout << "The current wind speed is " << windS << " MPH" << endl;
	cout << "with a wind direction of " << windD << endl;

	for (int i = size_m - 2; i >= 0; i--)
	{
		tempMemory[i + 1] = tempMemory[i];
	}

	for (int i = size_m - 2; i >= 0; i--)
	{
		windSMemory[i + 1] = windSMemory[i];
	}

	for (int i = size_m - 2; i >= 0; i--)
	{
		windDMemory[i + 1] = windDMemory[i];
	}

	tempMemory[0] = temper;
	windSMemory[0] = windS;
	windDMemory[0] = windD;
}

void option2(string stat)
{

	cout << "welcome to the " << stat << " Weather Station" << endl;
	cout << "The last temperature is " << tempMemory[0] << " F" << endl;
	cout << "The last wind speed is " << windSMemory[0] << " MPH" << endl;
	cout << "with a wind direction of " << windDMemory[0] << endl;
}

void option3(string stat)
{
	cout << "welcome to the " << stat << " Weather Station" << endl;
	cout << "The last temperatures are: ";
	for (int i = inputs - 1; i >= 0; i--)
	{
		cout << tempMemory[i] << ", ";
	}
	cout << "The last wind speeds are: ";
	for (int i = inputs - 1; i >= 0; i--)
	{
		cout << windSMemory[i] << " pointing " << windDMemory[i] << ", " << endl;
	}
}

void option4()
{
	exit(0);
}

int main()
{
	string station = "Typical";
	double temp = 0;
	double windSpeed = 0;
	string windDir = "";
	int option = 0;
	
	cout << "Please enter a size for your memory space: ";
	cin >> size_m;

	while (option != 4)
	{

		cout << "Welcome to our weather program! Please select what you would like to do with the given option: 1: input weather readings. 2: Print latest forecast. 3: Print the five latest weather readings, 4: exit program. (enter example: 'option 1' or '1' for the first option)";
		cin >> option;

		if (option == 1)
		{
			option1(station, temp, windSpeed, windDir);
		}
		else if (option == 2)
		{
			option2(station);
		}
		else if (option == 3)
		{
			option3(station);
		}
		else if (option == 4)
		{
			option4();
		}
		else
		{
			cout << "The option selected is invalid";
		}

	}

	return 0;
}

