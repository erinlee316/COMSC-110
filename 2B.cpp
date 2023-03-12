//
//  2B.cpp
//  COMSC-110
//
//  Created by Erin Lee on 9/6/22.
//
// Enter month, year, and total money, then display calculations in a report

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    // define variables
    string month;
    int year;
    double total;
    double sales;
    double countyTax;
    double stateTax;
    double totalSalesTax;
    
    // given values for tax (NEVER CHANGE)
    const double STATE_TAX = 0.04;
    const double COUNTY_TAX = 0.02;
    
    // asking user for input
    cout << "Enter month: " << endl;
    cin >> month;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter total money collected: " << endl;
    cin >> total;
    
    // calculations for sales, county tax, state tax, and total sales tax
    sales = total / (COUNTY_TAX + STATE_TAX + 1);
    countyTax = sales * COUNTY_TAX;
    stateTax = sales * STATE_TAX;
    totalSalesTax = countyTax + stateTax;
    
    // information displayed
    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "Monthly Sales Report" << endl;
    cout << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << endl;
    cout << left << setw(25) << "Total Collected:" << setw(10) << "$" << setw(10) << right << total << endl;
    cout << left << setw(25) << "Sales:" << setw(10) << "$" << setw(10) << right << sales << endl;
    cout << left << setw(25) << "County Sales Tax:"  << setw(10) << "$" << setw(10) << right << countyTax << endl;
    cout << left << setw(25) << "State Sales Tax:" << setw(10) << "$" << setw(10) << right << stateTax << endl;
    cout << left << setw(25) << "Total Sales Tax:"  << setw(10) << "$" << setw(10) << right << totalSalesTax << endl;
    
    return 0;

}
