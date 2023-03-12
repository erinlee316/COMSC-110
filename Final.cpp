//
//  Final.cpp
//  COMSC-110
//
//  Created by Erin Lee on 11/27/22.
//
/* Program asks user a series of questions, and they must answer correctly to win the game.
   User is put in an escape room. If they answer incorrectly, the user will lose and can decide whether
   to restart or quit the game. */


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// function prototype
int menu(int menuNum);
bool question1(double ans1);
bool question2(double ans2);
bool question3(string ans3);
bool question4(string ans4);
bool question5(string ans5);
bool question6(string ans6);

// global variable
string name;

int main () {
    
    // define variables for input
    string ready;
    string again;
    char enter;
    int menuVal = 0;
        
    // define variables for answers
    double answer1 = 0.0;
    double answer2 = 0.0;
    string answer3;
    string answer4;
    string answer5;
    string answer6;
    
    // play game once
    do {
        
        // return to menu
        again = "yes";
    
        // main menu display
        cout << "=========================================================" << endl;
        cout << endl;
        cout << setw(43) << "Haunted Forest Escape Room Menu" << endl;
        cout << endl;
        cout << "=========================================================" << endl;
        
        // user input from function call determines four options in menu
        switch (menu(menuVal)) {
            
            // user inputs 1, which shows credits for program
            case 1:
                cout << "-------------------------------------------------------------------" << endl;
                cout << "* You selected: View Credits" << endl;
                cout << endl;
                cout << "COMSC-110 Final: Haunted Forest Escape Room" << endl;
                cout << "Program written by Erin Lee" << endl;
                break;
             
            // user inputs 2, which shows background story for game
            case 2:
                cout << "-------------------------------------------------------------------" << endl;
                cout << "* You selected: Game Background Story" << endl;
                cout << endl;
                cout << "Welcome to Haunted in the Forest!" << endl;
                cout << "You have been staying at your grandparents' house for holiday break." << endl;
                cout << "You woke up from a nap and found yourself in the middle of a forest." << endl;
                cout << "While trying to find an exit, you run into Piglet." << endl;
                cout << "He has also been stuck in the woods for four days. " << endl;
                cout << "You guys decide to stick together and find your way out." << endl;
                break;
            
            // user inputs 3, which shows instructions for game
            case 3:
                cout << "-------------------------------------------------------------------" << endl;
                cout << "* You selected: Game Instructions" << endl;
                cout << endl;
                cout << "New output will begin with an asterisk(*), so you know where to read from. " << endl;
                cout << endl;
                cout << "You will be asked a series of questions, and you must answer" << endl;
                cout << "correctly to decide what path to take. If you answer" << endl;
                cout << "incorrectly, you will lose the game. Good luck!" << endl;
                break;
            
            // user inputs 4, which starts game
            case 4:
                cout << "-------------------------------------------------------------------" << endl;
                cout << "* You selected: Start Game" << endl;
                cout << endl;
                cout << "Enter your name: ";
                cin >> name;
                cout << endl;
                cout << "Alright " << name << ", are you ready to escape? (yes/no)" << endl;
                cin >> ready;
                cout << endl;
              
                // user put invalid input, they choose again to initiate game
                while (ready != "yes" && ready != "no")    {
                    cout << "* That is not a valid answer. Are you ready? (yes/no)?" << endl;
                    cin >> ready;
                    cout << endl;

                }
            
                if (ready == "no")   {
                    cout << "* Too bad, let's get started!" << endl;
                }
            
                else {
                    cout << "* Great, let's get started!" << endl;
                }
            
                // function call for question 1
                if (question1(answer1) == false) {
                    break;
                }
                
                // user enters any character to continue
                cout << "Enter [CHAR] to continue" << endl;
                cin >> enter;
        
                // function call for question 2
                if (question2(answer2) == false) {
                    break;
                }
                
                // user enters any character to continue
                cout << "Enter [CHAR] to continue" << endl;
                cin >> enter;
            
                // function call for question 3
                if (question3(answer3) == false) {
                    break;
                }
                
                // user enters any character to continue
                cout << "Enter [CHAR] to continue" << endl;
                cin >> enter;
            
                // function call for question 4
                if (question4(answer4) == false) {
                    break;
                }
                
                // user enters any character to continue
                cout << "Enter [CHAR] to continue" << endl;
                cin >> enter;
                
                // function call for question 5
                if (question5(answer5) == false){
                    break;
                }
                
                // user enters any character to continue
                cout << "Enter [CHAR] to continue" << endl;
                cin >> enter;
        
                // function call for question 6
                if (question6(answer6) == false){
                    break;
                }
                
                // display text when user wins game
                cout << "Congradulations " << name << ", you helped Piglet out of the forest!" << endl;
                break;
        }
        
        // display text when case (1-4) ends
        cout << endl;
        cout << "Piglet wonders if you want to return to menu? (yes/no)" << endl;
        cin >> again;
        cout << endl;
        
        // user put invalid input, they choose again
        while (again != "no" && again != "No" && again != "yes" && again != "Yes")  {
            cout << "* Invalid input. Return to menu? (yes/no)" << endl;
            cin >> again;
            cout << endl;
        }

        // display text to end program
        if (again == "no" || again == "No") {
            cout << "* Thank you for playing: Haunted Forest Escape Room" << endl;
            cout << endl;
            cout << " Ʌ----Ʌ" << endl;
            cout << "（ ´∀｀）" << endl;
            cout << "（　　  ）" << endl;
            cout << "｜ ｜　|" << endl;
            cout << "（＿)＿）" << endl;
            cout << endl;
        }
    }
    
    // game returns to menu as long as condition is true
    while (again == "yes" || again == "Yes");
    return 0;
}


// function for menu
int menu(int menuNum) {
    cout << "1. Credits" << endl;
    cout << "2. Game Background Story" << endl;
    cout << "3. Game Instructions" << endl;
    cout << "4. Start Game" << endl;

    // user input for menu options
    cout << "Enter your choice (1-4): ";
    cin >> menuNum;
    cout << endl;
    
    // user put invalid input, they choose again
    while (menuNum != 1 && menuNum != 2 && menuNum != 3 && menuNum != 4) {
        cout << "* Invalid answer. Enter your choice (1-4): ";
        cin >> menuNum;
        cout << endl;
    }
    
    return menuNum;
}


// function for Question 1
bool question1(double ans1)  {
    
    // declare variables for function
    bool correct = false;
    string path;
     
    // output for question 1
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Piglet and you are following a trail, which splits into two paths." << endl;
    cout << endl;
    cout << "Question 1: What is 42 - 26?" << endl;
    cin >> ans1;
    cout << endl;

    // user decides path if answer is correct
    if (ans1 == 16 || ans1 == 16.0) {
        cout << "* Correct! " << name << ", do you want to go left or right?" << endl;
        cin >> path;
        cout << endl;
        
        // user put invalid input, they choose again
        while (path != "left" && path != "Left" && path != "right" && path != "Right")  {
            cout << "* Invalid answer. Left or right?" << endl;
            cin >> path;
            cout << endl;
        }
        
        // display text for "left" input
        if (path == "left" || path == "Left") {
            cout << "* You decided to go left. Thankfully, there were no cliffs." << endl;
            cout << endl;
            correct = true;
        }
        
        // display text for "right" input
        else if (path == "right" || path == "Right") {
            cout << "* You decided to go right. Thankfully, there were no cliffs." << endl;
            cout << endl;
            correct = true;
        }
    }
    
    // user puts wrong answer
    else {
        cout << "* Incorrect. Piglet decided that you guys should go left." << endl;
        cout << "Unfortunately, he tripped and fell down a cliff..." << endl;
        cout << "GAME OVER" << endl;
        cout << endl;
    }
    return correct;
}


// function for Question 2
bool question2(double ans2)  {
    
    // declare variables for function
    bool correct = false;
    string choice;
    
    // output for question 2
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "* After some time, you encounter a lake. Piglet suggests you guys swim" << endl;
    cout << "across the water, but you want to walk around the lake...." << endl;
    cout << endl;
    cout << "Question 2: What prime number is the only even number?" << endl;
    cin >> ans2;
    cout << endl;

    // user decides option if answer is correct
    if (ans2 == 2 || ans2 == 2.0) {
        cout << "* Good job. " << name << ", swim or walk?" << endl;
        cin >> choice;
        cout << endl;
        
        // user put invalid input, they choose again
        while (choice != "walk" && choice != "Walk" && choice != "swim" && choice != "Swim")  {
            cout << "* Invalid answer. Swim or walk?" << endl;
            cin >> choice;
            cout << endl;
        }

        // display text for "walk" input
        if (choice == "walk" || choice == "Walk") {
            cout << "* You decided to walk around the lake." << endl;
            cout << "You later noticed sharks in the lake, yikes!" << endl;
            cout << endl;
            correct = true;
        }
        
        // display text for "swim" input
        else if (choice == "swim" || choice == "Swim") {
            cout << "* You decided to swim across the lake. " << endl;
            cout << "Thankfully, there were no creatures inside." << endl;
            cout << endl;
            correct = true;
        }

    }
    
    // user puts wrong answer
    else {
        cout << "* Incorrect. Piglet decided that you guys should swim across." << endl;
        cout << "However, Piglet forgot that he cannot swim. He drowned..." << endl;
        cout << "GAME OVER" << endl;
        cout << endl;
    }
    return correct;
}


// function for question 3
bool question3(string ans3)  {
    
    // declare variables for function
    bool correct = false;
    string choice;
    string month[14] = {"January", "january",
                        "March", "march",
                        "May", "may",
                        "July", "july",
                        "August", "august",
                        "October", "october",
                        "December", "december"};
    
    // output for question 3
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "* A few minutes after making it to the opposite side, " << endl;
    cout << "you see a small bush with wild berries. Piglet says he is hungry" << endl;
    cout << "and wants to eat them. You tell Piglet it is a bad idea." << endl;
    cout << endl;
    cout << "Question 3: Name one month with 31 days." << endl;
    cin >> ans3;
    cout << endl;
    
    // for loop checks if any elements in array match the user's answer
    for (int a = 0; a < 14; a++) {
        
        // user decides option if answer matches an array's element
        if (month[a] == ans3) {
            cout << "* Right answer " << name << "! Do you want to eat or avoid?" << endl;
            cin >> choice;
            cout << endl;

            // user put invalid input, they choose again
            while (choice != "eat" && choice != "Eat" && choice != "avoid" && choice != "Avoid")  {
                cout << "* Invalid answer. Eat or avoid?" << endl;
                cin >> choice;
                cout << endl;
            }

            // display text for "eat" input
            if (choice == "eat" || choice == "Eat") {
                cout << "* You decided to eat the berries. Fortunately, they were normal blueberries." << endl;
                cout << endl;
                correct = true;
            }
        
            // display text for "avoid" input
            else if (choice == "avoid" || choice == "Avoid") {
                cout << "* You decided to avoid the berries. You later learned they were poisonous." << endl;
                cout << endl;
                correct = true;
            }
        }
    }
    
        // user puts wrong answer
        if (correct == false) {
            cout << "* Incorrect. Unfortunately, Piglet decided for you, and you guys" << endl;
            cout << "ate the berries. Piglet had an allergic reaction and passed out..." << endl;
            cout << "GAME OVER" << endl;
            cout << endl;
        }
    
    return correct;
}


// function for Question 4
bool question4(string ans4) {
    
    // declare variables for function
    bool correct = false;
    int choice = 0;
        
    // output for question 4
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "* Piglet notices the road divides into five paths." << endl;
    cout << "You do not know which one to take..." << endl;
    cout << endl;
    cout << "Question 4: Has it ever snowed in Fiji? (yes/no)" << endl;
    cin >> ans4;
    cout << endl;
    
    // user decides path if answer is correct
    if (ans4 == "no" || ans4 == "No") {
        cout << "* " << name << ", correct again! Which path do you want to take (1-5)?" << endl;
        cin >> choice;
        cout << endl;
        
        // user put invalid input, they choose again
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)  {
            cout << "* Invalid answer. Which path (1-5)?" << endl;
            cin >> choice;
            cout << endl;
        }
    
        // user input (1-5) determines which path to take
        switch (choice) {
                
            case 1:
                cout << "* You chose path 1. Piglet ran into a bear, but it was sleeping. Phew!" << endl;
                correct = true;
                cout << endl;
                break;
            
            case 2:
                cout << "* You chose path 2. Piglet accidently hit a bee hive." << endl;
                cout << "Luckly, there were no bees inside. Phew!" << endl;
                correct = true;
                cout << endl;
                break;
            
            case 3:
                cout << "* You chose path 3. Piglet stepped on a wolf's tail, but it had no reaction. Phew!" << endl;
                correct = true;
                cout << endl;
                break;
            
            case 4:
                cout << "* You chose path 4. Piglet spotted a group of hyenas," << endl;
                cout << "but luckly they did not see you guys. Phew!" << endl;
                correct = true;
                cout << endl;
                break;
            
            case 5:
                cout << "* You chose path 5. Piglet accidently snapped a tree branch," << endl;
                cout << "but there were no crows on it. Phew!" << endl;
                correct = true;
                cout << endl;
                break;
        }
    }
      
    // user puts wrong answer
    else  {
        cout << "* Incorrect. Piglet decided to make a U-turn, but you guys saw a coyote." << endl;
        cout << "The coyote chased Piglet, so you lost him..." << endl;
        cout << "GAME OVER" << endl;
        cout << endl;
    }
    
    return correct;
}


// function for Question 5
bool question5(string ans5)  {
    
    // declare variables for function
    bool correct = false;
    string choice;
    string country[16] = {"Iceland", "iceland",
                          "India", "india",
                          "Indonesia", "indonesia",
                          "Iran", "iran",
                          "Iraq", "iraq",
                          "Ireland", "ireland",
                          "Isreal", "isreal",
                          "Italy", "italy"};
    
    // output for question 5
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "* After walking for ten minutes, Piglet and you notice a tiny village ahead." << endl;
    cout << "There is a field of unfamiliar plants in the way. You want to avoid them," << endl;
    cout << "but Piglet wants to go through the field because it is faster..." << endl;
    cout << endl;
    cout << "Question 5: Name one country starting with the letter I." << endl;
    cin >> ans5;
    cout << endl;
    
    // for loop checks if any elements in array match the user's answer
    for (int b = 0; b < 16; b++) {
        
        // user decides option if answer matches an array's element
        if (country[b] == ans5) {
            cout << "* Awesome job " << name << "! Fast or detour?" << endl;
            cin >> choice;
            cout << endl;
            
            // user put invalid input, they choose again
            while (choice != "fast" && choice != "Fast" && choice != "detour" && choice != "Detour")  {
                cout << "* Invalid answer. Fast or detour?" << endl;
                cin >> choice;
                cout << endl;
            }

            // display text for "fast" input
            if (choice == "fast" || choice == "Fast") {
                cout << "* You decided the fast route. Thankfully, the field was just long weeds." << endl;
                cout << endl;
                correct = true;
            }
            
            // display text for "detour" input
            else if (choice == "detour" || choice == "Detour") {
                cout << "* You guys decided to go around the field. After making it to the village," << endl;
                cout << "a villager explains the field is poison ivy. You guys are safe!" << endl;
                cout << endl;
                correct = true;
            }
        }
    }
    
    // user puts wrong answer
    if (correct == false) {
        cout << "* Incorrect. You listened to Piglet and walked across the field. Unfortunately," << endl;
        cout << "Piglet started to develop hives and felt too much pain in his body..." << endl;
        cout << "GAME OVER" << endl;
        cout << endl;
    }
    
    return correct;
}


// function for Question 5
bool question6(string ans6)  {
    
    // declare variables for function
    bool correct = false;
    string choice;
      
    // output for question 6
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "* You can see an exit, but you come across a broken bridge, which separates" << endl;
    cout << "you guys from the exit. Piglet suggests you guys jump across the hole," << endl;
    cout << "but you want to find an alternate path across because the ground is steep." << endl;
    cout << endl;
    cout << "Question 6: What is the rarest blood type (A+, A-, B+, B-, AB+, AB-, O+, O-)?" << endl;
    cin >> ans6;
    cout << endl;

    // user decides option if answer is correct
    if (ans6 == "ab-" || ans6 == "AB-") {
        cout << "* Wow, " << name << "! Jump or alternate?" << endl;
        cin >> choice;
        cout << endl;
        
        // user put invalid input, they choose again
        while (choice != "jump" && choice != "Jump" && choice != "alternate" && choice != "Alternate")  {
            cout << "* Invalid answer. Jump or alternate?" << endl;
            cin >> choice;
            cout << endl;
        }

        // display text for "jump" input
        if (choice == "jump" || choice == "Jump") {
            cout << "* You decided to jump across the hole." << endl;
            cout << "Piglet and you successfully made it across the bridge!" << endl;
            cout << endl;
            correct = true;
        }
        
        // display text for "alternate" input
        else if (choice == "alternate" || choice == "Alternate") {
            cout << "* After glancing around, you found a fallen tree. " << endl;
            cout << "You used the log as a bridge and walked across." << endl;
            cout << endl;
            correct = true;
        }
    }
    
    // user puts wrong answer
    else {
        cout << "* Incorrect. Piglet decided to jump across the hole." << endl;
        cout << "However, Piglet's jump was too short and he fell through the hole." << endl;
        cout << "He has fallen to the ground and injured his body..." << endl;
        cout << "GAME OVER" << endl;
        cout << endl;
    }
    return correct;
}
