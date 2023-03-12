//
//  7.cpp
//  COMSC-110
//
//  Created by Erin Lee on 10/26/22.
//
// Program identifies how many multiple choice questions the user answers correctly/incorrectly on their driver's license exam. The exam has 20 multiple choice questions. Program will display incorrect answers with correct answers at the end.

#include <iostream>
using namespace std;

int main()  {
    
    // declare variables
    char correctAns[] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    char userAns[20];
    char incorrectAns[20];
    int i;
    int j;
    int k;
    int m;
    int correct = 20;
    int incorrect = 0;
    
    // incorrect answer gets 0 point
    for (i = 0; i < 20; i++)    {
        incorrectAns[i] = 0;
    }
    
    // ask for user input
    cout << "Answer the following questions with A, B, C, or D." << endl;
    
    for (j = 0; j < 20; j++)    {
        cout << "Question " << j + 1 << ": ";
        cin >> userAns[j];
        
        // loop if invalid answer
        while (userAns[j] != 'A' && userAns[j] != 'B' && userAns[j] != 'C' && userAns[j] != 'D')   {
            cout << "Please answer using A, B, C, or D." << endl;
            cout << "Question " << j + 1 << ": ";
            cin >> userAns[j];
        }
    }
    
    // comparing answers
    for (k = 0; k < 20; k++)    {
        if (!(userAns[k] == correctAns[k]))    {
            incorrect = incorrect + 1;
            incorrectAns[k] = 1;
        }
    }
  
    // display user's incorrect answers
    if (incorrect > 0)  {
        cout << "You answered the following incorrectly: " << endl;
       
        for (m = 0; m < 20; m++)    {
            
            if (incorrectAns[m] == 1)    {
                
                cout << "Question " << m + 1 << endl;
                cout << "You answered: " << userAns[m] << endl;
                cout << "Correct answer: " << correctAns[m] << endl;
            }
        }
        cout << endl;
    }
    
         
    // calculate correct answers
    correct = correct - incorrect;
    
    // display results
    if (correct >= 15)  {
        cout << "Congradulations, you passed the driver's lisence exam!" << endl;
        cout << "You got " << correct << " out of 20 correct" << endl;
    }
    
    else   {
        cout << "You failed the driver's lisence exam." << endl;
        cout << "You got " << correct << " out of 20 correct" << endl;
        cout << "Better luck next time... :(" << endl;
    }
    
    return 0;
}
