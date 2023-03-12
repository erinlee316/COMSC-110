//
//  5.cpp
//  COMSC-110
//
//  Created by Erin Lee on 10/4/22.

//  Program that calculates average test scores, which the lowest score is dropped.


#include <iostream>
#include <iomanip>
using namespace std;


// function prototype
void getScore(int& score);
int findLowest(int score1, int score2, int score3, int score4, int score5);
void calcAverage (int val1, int val2, int val3, int val4, int val5);

// main function
int main () {
    
    // declare variables
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    
    // user gets scores
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    
    // user gets average
    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}


// function gets test scores
void getScore(int& score) {
    
    // define variable
    int valid;
    
    // ask for user input
    cout << "Enter test score between 0 to 100: ";
    cin >> valid;
    
    // if input is not 0-100, user tries again
    while (valid < 0 || valid > 100) {
        cout << "Invalid Input. Enter test score between 0 to 100: ";
        cin >> valid;
    }
    score = valid;
}

// function finds lowest test score
int findLowest(int score1, int score2, int score3, int score4, int score5)  {
    
    // declare variable
    int lowest;
    
    // find lowest score using if statements
    lowest = score1;
    
    if (score2 < lowest)    {
        lowest = score2;
    }
    
    else if (score3 < lowest)    {
        lowest = score3;
    }
    
    else if (score4 < lowest)    {
        lowest = score3;
    }
    
    else if (score5 < lowest)    {
        lowest = score5;
    }
    
    // information displayed
    cout << "Lowest test score: " << lowest << endl;
    return lowest;
}

// function calculates average test score
void calcAverage (int val1, int val2, int val3, int val4, int val5) {
    
    // declare variables
    double average;
    int lowest;

    // get lowest score
    lowest = findLowest(val1, val2, val3, val4, val5);

    // equation for average
    average = (val1 + val2 + val3 + val4 + val5 - lowest) / 4.0;
    
    // information displayed
    cout << fixed << setprecision(2);
    cout << "Average test score: " << average << endl;

}
