//
//  2A.cpp
//  COMSC-110
//
//  Created by Erin Lee on 9/6/22.
//
//Enter five values and display prices

#include <iostream>
using namespace std;

int main() {

    // variable names
    double item1;
    double item2;
    double item3;
    double item4;
    double item5;

    double subTotal;
    double salesTax;
    double totalPrice;

    const double taxRate = .06;

    // price of items
    /*
    item1 = 12.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 14.95;
    item5 = 3.95;
    */

    // user enters values
    cout << "Enter price of item 1: " << endl;
    cin >> item1;
    cout << "Enter price of item 2:" << endl;
    cin >> item2;
    cout << "Enter price of item 3:" << endl;
    cin >> item3;
    cout << "Enter price of item 4:" << endl;
    cin >> item4;
    cout << "Enter price of item 5:" << endl;
    cin >> item5;

    // calculating prices
    subTotal = item1 + item2 + item3 + item4 + item5;
    salesTax = subTotal * taxRate;
    totalPrice = subTotal + salesTax;

    // display item prices annd total
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;
    cout << "Subtotal price: $" << subTotal << endl;
    cout << "Sales tax price: $" << salesTax << endl;
    cout << "Total price: $" << totalPrice << endl;

return 0;

}


