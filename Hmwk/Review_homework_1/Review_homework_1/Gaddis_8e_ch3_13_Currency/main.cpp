/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch3.13 pg.144
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const float YEN_PER_DOLLAR = 98.93;
    const float EUROS_PER_DOLLAR = 0.74;
    float usDolls, dolInYen, dolInEuro;
    
    cout <<"How much U.S. Dollars you currently have?\n";
    cin >> usDolls;
    
    dolInYen = usDolls*YEN_PER_DOLLAR;
    dolInEuro = usDolls*EUROS_PER_DOLLAR;
    
    cout << setprecision(2) << fixed;
    cout <<"You have " << dolInYen <<" in Yen.\n";
    cout <<"You have "<< dolInEuro <<" in Euro.\n";
    return 0;
}

