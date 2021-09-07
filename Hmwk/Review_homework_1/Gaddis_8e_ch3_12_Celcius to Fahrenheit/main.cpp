/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch3.12 pg.112
 */
#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout << "What is the temperature right now in Celsius\n";
    cin >> celsius;
    
    float fahrenheit = (float(9)/5)*celsius+32;
    
    cout << "If it's " << celsius <<" degrees C right now,";
    cout << "then it's also " << fahrenheit <<" degrees F right now.";
    
    return 0;
}
