#include<iostream>
using namespace std;

//There are several factors to be kept in mind such as the value of n if greater than the program shoudl work
//using while and if..
//using iterations..

class Reverse 
{
	int n,rev=0,sum;

public:

	void reverseiterations()
	{
		while (n > 0)
		{
			rev = rev * 10 + n % 10;
			n=n / 10;
		
		}
		cout << ":Reversed Number---->" << rev;
	}

	void display()
	{
		cout << "Enter a number to reverse it";
		cin >> n;
	}

};

int main()
{
	Reverse obj;
	obj.display();
	obj.reverseiterations();
}