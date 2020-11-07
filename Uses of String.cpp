#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;

	cout << "Enter a term"<<endl;
	getline(cin,s);
	//cout << "Your entered term is--->" << endl << s<<endl;

	//Returns the length of the string
	//int a = s.length();
	//cout << a;
	//cout<<endl;

	//replaces from (index value, till index value, with "The string you want to replace it with")
	//string b =s.replace(3,7,"I am sucker");
	//cout << b<<endl;

//	char c = s.front();
	//char d = s.back();
	//cout << "--->"<< c << endl <<"--->"<< d << endl;

	//string str = s.substr(2);
	//cout << str<<endl;


	//The pushback() is used to add a character at hte back of an existing string.
	//It does not add a string it only adds a character.
	//To add a string at the back of another string we use append()..

	//s.push_back('s');
	//cout << s << endl;
	//Automatically Deletes the last letter of the string input       

	//s.pop_back();

	//s.shrink_to_fit();
	cout<<s.capacity()<<endl;
	s.resize(20);
	cout << s.capacity();
	s.shrink_to_fit();
	cout << s.capacity();

	

	//char z = s.at(4);
	//cout << z;


	






}

