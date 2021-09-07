/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch4.10 pg.221
 */
#include <iostream>
using namespace std;

int main() {
    int month, year;
    
    cout << "Chose a month and year? (Use 1 through 12 for month)\n";
    cout << "Month: \n";
    cin >> month;
    cout << "Year: \n";
    cin >> year;
    
    switch(month){
        case 1: 
                cout << "You chose January, which has 31 days\n";
                break;
        case 2: cout << "You chose February, which has 28 days\n";
                break;
        case 3: cout << "You chose March, which has 31 days\n";
                break;
        case 4: cout << "You chose April, which has 30 days\n";
                break;
        case 5: cout << "You chose May, which has 31 days\n";
                break;
        case 6: cout << "You chose June, which has 30 days\n";
                break;
        case 7: cout << "You chose July, which has 31 days\n";
                break;
        case 8: cout << "You chose August, which has 31 days\n";
                break;
        case 9: cout << "You chose September, which has 30 days\n";
                break;
        case 10: cout << "You chose October, which has 31 days\n";
                break;
        case 11: cout << "You chose November, which has 30 days\n";
                break;
        case 12: cout << "You chose December, which has 31 days\n";
                break;
    }
    
    if (year%100 == 0){
        if (year%400 == 0){
            cout << year << " is a leap year.";
        }
        else{
            cout << year << " is not a leap year.";
        }
    }
    else if (year%100 != 0){
        if (year%4 == 0){
            cout << year << " is a leap year.";
        }
        else{
            cout << year << " is not a leap year.";
        }
    }
    return 0;
}

