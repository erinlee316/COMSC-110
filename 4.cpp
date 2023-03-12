//
//  4.cpp
//  COMSC-110
//
//  Created by Erin Lee on 9/28/22.
//
//  Program asking user for number between 1-100. User keeps guessing until number is correct.


#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()  {
    
    // define variables
    int userInput;
    int randomNum;
    int count = 1;
    char doAgain;
    
    // play game once
    do {

        doAgain = 'y';
        
        // computer generates a random number between 1-100
        srand(time(0));
        randomNum = rand() % 100 + 1;
    
        // ask for user input
        cout << setw(28) << "Random Number Generator" << endl;
        cout << "---------------------------------" << endl;
        cout << "Guess a number between 1 and 100:" << endl;
        cin >> userInput;
    
    
    // loop if number is incorrect
        while (userInput != randomNum)   {
       
            if (userInput > 100) {
                cout << "Invalid input. Try again." << endl;
            }
            
            else if (userInput < 1)  {
                cout << "Invalid input. Try again." << endl;
            }
            
            else if (userInput > randomNum)   {
                cout << "Too high. Try again." << endl;
            }
        
            else   {
                cout << "Too low. Try again." << endl;
            }
        
            cin >> userInput;
            count++;
        }
    
        // output if number is correct
        cout << "Congratulations! You figured out my number!" << endl;
        cout << "Number of guesses: " << count << endl;
        cout << "Play again? (y/n)" << endl;
        cin >> doAgain;
        count = 1;

    }
    while (doAgain == 'y');
    return 0;
}
