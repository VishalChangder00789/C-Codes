#include<iostream>
#include<string>
using namespace std;

class stringsmagic 
{
protected:
	string s1, s2, result;
public :

	int n, sum=0;

	void display()
	{
		cout << "\n Enter a Sentence"<<endl;
		getline(cin,s1);

		cout << "\n Enter another sentence "<<endl;
		getline(cin, s2);
	}

	void operatoroverload()
	{
		//The (+) operator is overloaded now to work like to concatenate two strings..

		result = s1 + s2;

		cout << "The concatenated String is-------->>"<<endl;
		cout << result;
	}

	void assignmentoverloaded()
	{
		s1 = s2;
		cout << "\n The assignment operator is------>" << s1<<endl;
	}
	void overloaded() 
	{
		cout << "Enter a number till you want to find the sum";
			cin >> n;
				for (int i = 0; i <= n; i++)
				{

					//sum+=i----------> sum= sum+i;

					sum += i;
					cout << "The sum is--------->"<<sum<<endl;
				}
		

	}
	




};


void main()
{
	stringsmagic obj;
	obj.display();
	obj.operatoroverload();
	obj.display();
	obj.assignmentoverloaded();
	obj.overloaded();

}
