#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

//Q1------------------------------------------------------------------------------------------------

int myRand(int a, int b)
{
	return rand() % b + a; // return a random number between two given values
}

void exercise1()
{
	int a, b;
	cout << "Enter your first value: ";
	cin >> a;
	cout << "Enter your second value: ";
	cin >> b;
	cout << myRand(a, b) << endl; // give the two values to the random number generator to generate a random between them.
}

//Q2------------------------------------------------------------------------------------------------
void rolling(vector<int> &r)
{
	int a, b, c;
	for (int i = 1; i <= 360000; i++) // make i number of dice rolls.
	{
		a = myRand(1, 6);
		b = myRand(1, 6);
		if (a > b) // assign the largest number to 'e'.
			c = a;
		else
			c = b;
		for (int j = 1; j <= 6; j++) // loop that if the iteration number is equal to the highest roll, add 1 to the counter for that number.
			if (c == j)
				r[j - 1]++;
	}
}

void exercise2()
{
	vector<int> roll(6);
	rolling(roll);
	cout << "The rolls were as follows: " << endl;
	for (int i = 1; i <= 6; i++)
		cout << roll[i - 1] << " Rolls of " << i << endl;
}

//Q3------------------------------------------------------------------------------------------------


void exercise3()
{
	vector<int> roll(6);
	double a;
	rolling(roll); // reuse the function from Q2.
	for (int i = 1; i <= 6; i++)// output each result per loop.
	{
		cout << i << ": " << " "; 
		a = lrint(roll[i - 1]/10000); // turn the rolls for this iteration into a double then round that double up to the nearest integer.
		for (int j = 1; j <= a; j++) // print stars sub loop.
			cout << "*";
		cout << endl;
	}
}

//Q4------------------------------------------------------------------------------------------------


void exercise4()
{

}

//Q5------------------------------------------------------------------------------------------------


void exercise5()
{

}

//Menu------------------------------------------------------------------------------------------------
int main()
{
	srand(123);
	int exercise = -1;
	while (exercise != 0)
	{
		cout << "Select an exercise number (1-7) or 0 to exit: ";
		cin >> exercise;
		switch (exercise)
		{
		case 0:
			break;
		case 1:
			exercise1();
			break;
		case 2:
			exercise2();
			break;
		case 3:
			exercise3();
			break;
		case 4:
			exercise4();
			break;
		case 5:
			exercise5();
			break;

		default:
			cout << "Incorrect choice" << endl;
		}
	}
}

/*
case 4:
{
char q4 = '1';
while (q4 != '0')
{
cout << "Which sub excersise? (a or c, 0 to go back): ";
cin >> q4;
switch (q4)
{
case '0':
break;
case 'a':
exercise4_a();
break;
case 'b':
exercise4_c();
break;

default:
cout << "That's not a choice." << endl;
}
}
break;
}
*/