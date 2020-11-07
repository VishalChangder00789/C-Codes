#include<iostream>
#include<math.h>
using namespace std;

class natural
{
private:
	int sum=0, n, i,pro;

public:

	/*void usingformula()
	{
		sum = (n * (n + 1)) / 2;
		cout << "The sum of the n natural numbers are" << sum<< endl;
	}*/

	void printall()
	{
		for (i = 1; i <= n; i++)
		{
			pro= sum + i;
			cout << "The Sum at each points is----->" << pro<<endl;
		}
	}
	
	void display()
	{
		cout << "Enter the number till you want to find the sum"<<endl;
		cin >> n;
	}
};

int main()
{
	natural obj;
	obj.display();
	//obj.usingformula();
	obj.printall();
}