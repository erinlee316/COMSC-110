//
//  9.cpp
//  COMSC-110
//
//  Created by Erin Lee on 12/6/22.
//
// Program that takes in values from a file and displays the item id and its current stock.

#include <iostream>
#include <fstream>
using namespace std;

// global variable
const int numProducts = 10;
    
class Inventory {
    public:
        void GetId(int number);
        void GetAmount(int stock);
        void Print();
        
    private:
        int itemNumber;
        int itemStock;
};


// GetId assigns a value to itemNumber member
void Inventory:: GetId(int number)  {
    itemNumber = number;
}

// GetAmount assigns a value to itemStock member
void Inventory:: GetAmount(int stock)  {
    itemStock = stock;
}

// class function displays item and stock
void Inventory:: Print() {
    cout << "Item number " << itemNumber << " has " << itemStock << " items in stock" << endl;
    cout << endl;
}


int main() {

    // input file to open and read
    ifstream myFile;
    myFile.open("9.dat");
    
    // if file does not exist/cannot open
    if (!myFile.is_open())   {
        cout << "Unable to open file" << endl;
    }
    
    // if file opens
    else {
        
        // array contains 10 elements
        Inventory prods[numProducts];

        // define variables
        int pos = 0;
        int id;
        int items;
        
        // while loop reads id and items from file
        while (myFile >> id && myFile >> items) {
            prods[pos].GetId(id);
            prods[pos].GetAmount(items);
            pos++;
        }
    
        // for loop displays item id and stock
        for (int i = 0; i < pos; i++) {
            prods[i].Print();
        }
        
        // close file
        myFile.close();
    }
    
    return 0;
}
