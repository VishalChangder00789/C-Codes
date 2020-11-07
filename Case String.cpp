#include<iostream>
#include<string>
using namespace std;

class maker
{
	string a;
	int i;
	
public:

	void getchar()
	{
		cout << "Enter any random numbers";
		cin >> a;
		cout << "" << a[3];
	}

	void checkprime()
	{
		for (i = 0; i <= a.length; i++)
		{
			if (a.at(i) % 2 == 0 || a.at(i) % 3 == 0)
			{
				cout << "The number which is prime is----> " << a.at(i);
			}
			else
			{
				cout << "There is no prime number in the String";
			}
		}
	}	
};

int main()
{
	maker obj;
	obj.getchar();
	obj.checkprime();

}