#include<iostream>
using namespace std;


//We need to find the prime number among a number of inputs in the array
class maker
{
private:
	int size,i;
	int* p;

public :

	void display()
	{
		cout << "The Following numbers are always prime 2,3,5,7";
		cout << "Enter the number of elements you want to put inside";
		cin >> size;
	}

	void allocate()
	{
		p = new int[size];
	}

	void fill()
	{
		for (i = 0; i <= size; i++)
		{
			cout << "Enter the element";
			cin >> p[i];
		}
	}

	void check()
	{
		for(i=0;i<=size;i++)
		if (p[i] % 2 == 0 || p[i] % 3 == 0 || p[i] % 5 == 0 || p[i] % 7 == 0)
		{
			cout << "The number is not Prime"<<endl;
		}
		else
		{
			cout << "The Number is Prime"<<endl;
		}
	}
};

int main()
{
	maker obj;
	obj.display();
	obj.allocate();
	obj.fill();
	obj.check();
}
