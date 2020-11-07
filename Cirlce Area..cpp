#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{

	//Private members can only be accessed by the class functions and members
	//They cannot be accessed by any other object outside the class and any other objects.
	//Only friend functions can access the private members because they somehow inhert the properties of the Base class..

		private:
				double radius;
		public:
				double Area;
		
				void display()
				{
					cout << "Enter the radius for the circle";
					cin >> radius;
				}

				void area()
				{
					Area = 3.14 * (radius * radius);
					cout << "The area of the cirlce is-------->" << Area;
				}


};

int main()
{
	Circle obj;
	obj.display();
	obj.area();
	

}

