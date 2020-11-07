#include<iostream>
using namespace std;

class constructor
{
public:


	This is a function with no return type..
	Remember we used to write (void) infront of the function..
	constructor()
	{
		cout << "This is a constructor called";
	}
};
int main()
{
	I dont need to make the object access the function of the class called constructor
	constructor c;
}

class constructor
{
	public:
		int x ;
		int y;

		constructor(int a, int b)
		{
			 x = a;
			 y = b;

		}

		void getx()
		{
			cout << "The value for x is--->" << x;
		}
		void gety()
		{
			cout << "The value for x is--->" << x;
		}


};

int main()
{
	constructor c(10,15);

	c.getx();
	c.gety();
	
}
