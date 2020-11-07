#include<iostream>
using namespace std;

class Largest
{
private:
	int a, b, c;

public:

	void check()
	{
		if (a > b && a>c)
		{
			if (b > c)
			{
				cout << "The smallest among three is ---->"<<c;
			}
			else
			{
				cout <<" The smallest among is ---->"<<b;
			}
			cout << "The largest among all is---> "<< a;
		}
		else
		{
			cout <<"The smallest among all is---> "<<a;
		}

	}

	void display()
	{
		cout << "Enter any three numbers---->";
		cin >> a >> b >> c;

	}

};

int main()
{
	Largest obj;
	obj.display();
	obj.check();

	


}
