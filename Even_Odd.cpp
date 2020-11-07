#include<iostream>
//check wheather a number is even or odd
using namespace std;
int main()
{
	//variables
	int a;

	//display

	cout << "Enter a number to check if it is even or odd";
	cin >> a;
	if (a % 2 == 0) 
	{
		cout << "The number is EVEN";
	}
	else
	{
		cout << "The number is ODD";
	}
}
