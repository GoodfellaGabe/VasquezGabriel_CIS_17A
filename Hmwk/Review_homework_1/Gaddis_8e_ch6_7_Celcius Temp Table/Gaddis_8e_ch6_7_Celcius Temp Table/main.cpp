/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch6.7 pg 368
 */
#include <iostream>
#include<iomanip>
using namespace std;

int frht = 0;
float celsius(float,int);

int main() {
    float cel;
    cout <<"Fahrenheit\t Celsius\n";
    cout <<"--------------------------\n";
    
    do{
        cel = celsius(cel,frht);
        cout << setprecision(2) << fixed;
        cout << frht <<"(F)\t\t" << cel <<"(C)\n";
        frht++;
    }while(frht<=20);
    
    return 0;
}
float celsius(float cel,int frht){
    float a = 5.0;
    float b = 9.0;
    float x = a/b;
    cel = x*(frht-32);
    return cel;
}