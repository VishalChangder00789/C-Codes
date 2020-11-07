//Summary :
/*The objective of the problem is to find the multiplication table and print it line wise
More over we need to find out the different ways to print a table

The user must enter the number which it wants to print the table of
We will see that in the program below*/

#include<iostream>
using namespace std;

int main()
{
	int n, i, pro;

	cout << "Enter the number of which you want to print the table"<<endl;
	cin >> n;


	for (i = 0; i <= 10; i++)
	{
		pro = n * i;
		cout << "\n" << n << "*" << i << "=" << pro;
	}

}