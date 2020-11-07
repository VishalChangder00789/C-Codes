#include<iostream>
#include<string>


using namespace std;

class make 
{
public:
	string s;
	string g;

	void display()
	{
		cout << "Enter a String"<<endl;
		getline(cin, s);
		g = s;
	}

public:
	void reversing()
	{
			reverse(g.begin(),g.end());
	}
	


	void check()
	{
		std::transform(g.begin())

		
		if (g == s)
		{
			cout << "The string is pallindrome";
		}
		else
		{
			cout << "Its not a pallindrome";
		}

	}

};
int main()
{
	make o;
	o.display();
	o.reversing();
	o.check();
}


