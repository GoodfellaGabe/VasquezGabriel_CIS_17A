/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch5.11 pg.295
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MIN_popsize = 2,
            MIN_avgPop = 0,
            MIN_popIncr = 1;
            
    int popIncr;
    float startSize, avgPop;
    
    cout <<"What is the starting number of the organism?\n";
    cin >> startSize;
    cout <<"What is the avg daily population increase in percentage?\n";
    cin >> avgPop;
    cout <<"What is the number of days the population will multiply?\n";
    cin >> popIncr;
    
    /*Input Validation: 
     * Do not accept a number less than 2 for the starting size of the population. 
     * Do not accept a negative number for average daily population increase. 
     * Do not  accept a number less than 1 for the number of days they will multiply.*/
    while(startSize<MIN_popsize || avgPop<MIN_avgPop || popIncr<MIN_popIncr){
        cout <<"ERROR: ";
        if (startSize<2){
            cout <<"Please re-enter a starting number greater than 2: ";
            cin >> startSize;
        }
        else if (avgPop<0){
            cout <<"Please re-enter the percentage (it must be greater than 0): ";
            cin >> avgPop;
        }
        else if (popIncr<1){
            cout <<"Please re-enter the number of days the population will multiply (it must be greater than or equal to 1): ";
            cin >> popIncr;
        }      
    }
    //A loop should display the size of the population for each day.
    for (int day=1; day<=popIncr; day++){
        if(day == 1){
            cout<<"\nDay "<< day <<", the population is approximately at " << startSize << endl;
        }
        else{
            int popGrwth = startSize + (startSize*(avgPop/100));
            cout <<"Day " << day << ", the population will be approximately at " << popGrwth << endl;
            startSize = popGrwth;
        }
    }
    
    return 0;
}

