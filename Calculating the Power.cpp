#include<iostream>
using namespace std;


class power
{

	private:

	float base, exponent ,power,result,i,n;

public:

	void display()
	{
		cout << "Enter Base and Exponent"<<endl;
		cin >> base >> exponent;
	}

	void using_whileloop()
	{
		power = exponent;
		while (exponent != 0)
		{
			result = result * base;
			--exponent;
		}
		cout << "The Answer to the value" << "    " << base << " ^ " << power << "  is----------->" << result;

	}

	void usingpow()
	{	
		result = pow(base, exponent);
		cout << result;
	}

	void usingforloop()
	{
		//Calculating Power using For Loop
		n = exponent;

		for (i = 1; i <= n; i++)
		{
			result = result * base;
		}
		cout << result;
	}
};
int main()
{
	int n;

	power p;

	cout << "Enter 1 to use the while loop"<<endl;
	cout << "Enter 2 to use the pow function" << endl;
	cout << "Entee 3 to use the for loop" << endl;
	
	
	cout << "Enter Your Choice" << endl;
	cin >> n;

	switch (n)
	{
	case 1: cout << "Welcome to while loop use and calculate power"<<endl;
		p.display();
		p.using_whileloop();
		
		break;

	case 2: cout << "Welcome to POW Function use and calculate power" << endl;
		p.display();
		p.usingpow();
			break;
	case 3:cout << "Welcome to forloop Function use and calculate power" << endl;
		p.display();
		p.usingforloop();
		break;

	}



}
