// Isaac Broadway
// Date: 09/26/2022
// Program Title: Shapes
// Program Description: program with a menu structure that will allow the user to choose an option to calculate area for a rectangle, triangle, and a circle


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const int PI = 3.14
int main()
{

	// Variable declaration

	int choice;
	double height, width, arear; //arear = area of rectangle
	double radius, areac; // areac = area of circle
	double base, triheight, triarea; // triheight = height of triangle to be used to find area, triarea = area of triangle
	

	//Program title and description for the user

	cout << "Enter what number that corresponds with what shape you would like to be calculated." << endl << endl;

	
	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Area of rectangle" << endl;
	cout << "2 - Area of circle << endl;
	cout << "3 - Area of triangle" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations
	arear = (height) * (width);
	areac = PI * [(radius)(radius)];
	triarea = (0.5) * [(base) * (triheight)];

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;
		cout << "What is the height in cm? " << endl;
			cin >> height;
		cout << "What is the width in cm? " << endl;
			cin >> width;
		cout << "The area of the rectangle is: " << arear << "cm^2" << endl;
	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;
		cout << "What is the length of the radius in cm? " << endl;
			cin >> radius;
		cout << "The area of the circle is: " << areac << "cm^2" << endl;
	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;
		cout << "What is the length of the base of the triangle in cm?" << endl;
			cin >> base;
		cout << "What is the length of the height of the triangle in cm?" << endl;
			cin >> triheight;
		cout << "The area of the triangle is: " << triarea << "cm^2" << endl;
	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}
//connected to Github//