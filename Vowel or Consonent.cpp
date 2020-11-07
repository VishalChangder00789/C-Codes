#include<iostream>
using namespace std;
int main()
{
	char a;
	
	cout << "Enter a character to check if it's a vowel or consonent";
	cin >> a;

	if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		cout << "The character is a Vowel";
	}
	else
	{
		cout << "The character is a Consonent";
	}

}