#include<iostream>
using namespace std;

int  main()
{
	int a=5, b=6;

	//Here a and b are used and the actual arguments because they are declared outside the function already

	//int x and int y are formal arguments because they are declared inside the function parameters
	
	cout << "Sum is ------->" << s;
	int sum(int x, int y)
	{
		return(x + y);
	}

	int s = sum(a, b);


}