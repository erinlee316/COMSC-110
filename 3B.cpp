//
//  3B.cpp
//  COMSC-110
//
//  Created by Erin Lee on 9/21/22.
//  Create program that calculates area of circle, rectangle, and triangle. Error is displayed if input is not 1-4.


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // define variables
    int userInput;
    double radius;
    double length;
    double width;
    double height;
    double base;
    double circle;
    double rectangle;
    double triangle;
    const double pi = 3.14159;
    
    // ask user for input
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): " << endl;
    cin >> userInput;
    
    // calculate area of circle, rectangle, triangle, or display error depending on user input
    switch(userInput)    {
    case 1:
        cout << "Enter radius of circle: " << endl;
        cin >> radius;
            if (radius > 0)   {
            circle = pi * radius * radius;
            cout << "Area of circle: " << circle << endl;
            }
            
            else    {
                cout << "The radius cannot be negative." << endl;
            }
        break;
    
    case 2:
        cout << "Enter length of rectangle: " << endl;
        cin >> length;
        cout << "Enter width of rectangle: " << endl;
        cin >> width;
            if (length > 0 && width > 0)    {
                rectangle = length * width;
                cout << "Area of rectangle: " << rectangle << endl;
            }
            
            else    {
                cout << "The length and width cannot be negative." << endl;
            }
        break;
    
    case 3:
        cout << "Enter base of triangle: " << endl;
        cin >> base;
        cout << "Enter height of triangle: " << endl;
        cin >> height;
            if (base > 0 && height > 0)  {
                triangle = base * height * .5;
                cout << "Area of triangle: " << triangle << endl;
            }
            
            else    {
                cout << "The base and height cannot be negative." << endl;
            }
        break;
    
    case 4:
        cout << "Program ending." << endl;
        break;
            
    // error if input is not 1-4
    default:
        cout << "Error. Input can only be 1 through 4." << endl;
        break;
    
    return 0;
}
}
