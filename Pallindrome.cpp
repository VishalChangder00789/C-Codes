//Summary:-
//We need to find that if a number is entered by the user then if it is a pallindrome or not i.e if the number is reveresed 
//do we get the same number entered by the user...
#include<iostream>
#include "Source.h"
using namespace std;

int main()
{
	int n, rev = 0, remainder, num;
//we need to reverse a number and then find if the reverse number is equal to the number entered by user or not...

//My first mistake was that i didn't apply the display function for the user to enter his number;
//Secondly i want to find another wway to do it...

	//display functions
	cout << "Enter a number"<<endl;
	cin >> num;
	n = num;

	while (n != 0)		//The while function will finish doing iteration when there will be no remainder remaining to extract out..
	{
		remainder = n % 10;		//selects the remainder produced that will be the last number always.
		rev = (rev * 10 )+ remainder;//Since the reverse number(rev) is already initialised with a zero therefore firstly it will select the remainder
		n = n / 10;           //We eliminated the remainder value by dividing the number entered by the user with 10 and only selecting the integer part of it..
									//Suppose if the number is 3993 the above iterations will:-
										// a.It will select the remainder (3).
										// b. it will add up with the reversed number((0*10)+3).
										// c.It will divide the original number with 10 and select the integer part only and make it the original number

	}
	cout << "The reversed number is ------>" << rev;

	if (num==rev)
	{
		cout << "The number is pallindrome";
	}
	else
	{
		cout << "The number is not a pallindrome";
	}
	


}