//Summary:-
//Problem statement---->
//We need to find the fibonacii series in the recursive fashion..
//Recursion--->When a function is created and the same function is called anywhere in the body of the code.
#include<iostream>    
using namespace std;


//Creating a function to calculate the fibonacii series
void fibo(int n)
{
    //variable declaration.
    //static is taken to not let the values change further ahead.
    static int  a = 0, b = 1, c;
    
    
    if (n > 0)
    {
        //Logic:------>

        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
       
        //function call till (n-1) values
        fibo(n - 1);
    }
}
int main() 
{
    int n;

    cout << "Enter the number of elements: ";

    cin >> n;

    cout << "Fibonacci Series: ";

    cout << "0 " << "1 ";

    //since two numbers are already printed so the n value will be () times
    fibo(n - 2);    

    return 0;
}