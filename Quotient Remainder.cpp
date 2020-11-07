//This program determines the quotient and remainder of a given division....
#include<iostream>
#include<stdio.h>
using namespace std;

class division
{
private:
	int a, b, div,sol;
	double divide,rem,c,d ;

public:

	void displayint()
	{
		cout << "Enter any two numbers for their division";
		cin >> a;
		cin >> b;

	}

	void checkint()
	{
		if (a < b)
		{
			div = b / a;
			cout << "The Quotient is---->"<<div<<endl;
		}
		else
		{
			
			div = a / b;
			cout << "The Quotient is---->" << div << endl;
			
		}
	}

	void remainder()
	{
		if (a < b)
		{
			sol = b % a;
			cout << "The Remainder is---->"<<sol<<endl;
		}
		else
		{
			sol = a % b;
			cout << "The Remainder is---->" << sol << endl;

		}
	}


	void fmodoperator()
	{
		if (c < d)
		{
			rem=fmod(d, c);
			cout << "The remainder is ----->"<<rem<<endl;
		}
		else
		{
			rem = fmod(c, d);
			cout << "The remainder is ----->" << rem << endl;
		}
		
	}

	void checkdouble()
	{
		if (c < d)
		{
			divide = d / c;
			cout << "The Quotient is---->" << divide << endl;
		}
		else
		{

			divide = c / d;
			cout << "The Quotient is---->" << divide << endl;

		}
	}
	void displaydouble()
	{
		cout << "Enter any two numbers for their division";
		cin >> c;
		cin >> d;

	}

};


int main()
{
	int n;
	division obj;


	cout << "Enter Your Choice in the form of given options"<<endl;
	cout << "Press 1 : Use the normal mod operator divsion"<<endl;
	cout << "Press 2 : Use the fmod() operator division"<<endl;
		cin >> n;

	switch (n)
	{
	case 1: obj.displayint();
		obj.checkint();
		obj.remainder();

		break;

	case 2:	obj.displaydouble();
		obj.checkdouble();
		obj.fmodoperator();
	
	}



	
	

}





//use fmod() insetad to also take the double value
