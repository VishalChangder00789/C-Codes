#include<iostream>
using namespace std;

class dynamic
{
private:

	int* p;
	int i;
	int n;

public:
	

	void createarray()
	{
		
		p = new int[n];
	}

	void display()
	{
		cout << "Enter the number of elements you want in your array";
		cin >> n;
	}

	void fill()
	{
		for (i = 0; i < n; i++)
		{
			cout << "Enter the elements =----->";
			cin >> p[i];
		}
	}

	void show()
	{
		for (i = 0; i < n; i++)
		{
			cout << "The elements =----->"<<p[i]<<endl;
			
		}
	}



};

int main()
{
	dynamic obj;
	obj.display();
	obj.createarray();
	obj.fill();
	obj.show();
}
