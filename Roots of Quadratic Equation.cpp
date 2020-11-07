#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, roots1, roots2;

	

	cout << "Type the coefficient of all x's";
	cin >> a >> b >> c;

	int det = ((b * b) - (4 * a * c));

	roots1  = (-b + pow(det, 1 / 2)) / 2 * a;
	roots2  = (-b - pow(det, -1 / 2)) / 2 * a;

	cout << "The Positive roots are---->"<<roots1<<endl;
	cout << "The Negative roots are---->"<<roots2<<endl;


}