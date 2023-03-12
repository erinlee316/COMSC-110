//
//  6.cpp
//  COMSC-110
//
//  Created by Erin Lee on 10/14/22.
//
// Program uses file that shows the population growth of Prairieville. Asterisks represent every 1000 people for every 20 years between 1900 to 2000.

#include <iostream>
#include <fstream>
using namespace std;

int main()  {
    
    // define variables
    ifstream myFile;
    int population;
    
    // file gets opened
    myFile.open("people.txt");
    
    // program if file is found
    if (myFile.is_open())   {
        int year;
        
        // loop for calculating and displaying population
        for (year = 1900; year <= 2000; year += 20)   {
            myFile >> population;
            cout << year << " ";
            
            int stars;
            for (stars = population / 1000; stars > 0 ; stars--)   {
                cout << "*";
            }
            cout << endl;
        }
    }
    
    // display information if file cannot be found
    else   {
        cout << "Failed to find file" << endl;
    }
    
    // close file
    myFile.close();
    return 0;
}
