#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Calculator
{
public:
    void add();
    void sub();
};

void Calculator :: add()
{
    int a;
    int b;
    cout << "Enter any two numbers to add them" << endl;
    cin >> a >> b;

    int calc = a + b;

    cout << "The addition of the two numbers are" << calc << endl;
}
int main()
{
    Calculator s;
    s.add();
}
