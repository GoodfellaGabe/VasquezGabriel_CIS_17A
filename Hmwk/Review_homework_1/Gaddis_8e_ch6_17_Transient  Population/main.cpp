/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch6.17 pg 368
 */
#include <iostream>
using namespace std;

int popSizeInYear(int, int, int, int, float, float);

int main() {
    int strSize, inMovrs, outMovrs, numYears, nwPopSze;
    float abiRate, adeRate;
    
    do{
        
        cout <<"What is the starting size of the population?\n";
        cin >> strSize;
        if (strSize < 2){
            cout <<"\nERROR!";
            cout <<"The starting size of the population must be a value of 2 or greater."
                    << "Please re-enter.\n";
        }
    }while(strSize < 2);
    
    do{
        cout <<"What is the population's annual birth rate?\n";
        cin >> abiRate;
        if(abiRate < 0){
            cout <<"\nERROR!";
            cout<<"Please enter an annual birth rate greater than zero.\n";
        }
    }while(abiRate < 0);
    
    do{
        cout <<"What is the population's annual death rate?\n";
        cin >> adeRate;
         if(adeRate < 0){
             cout <<"\nERROR!";
             cout<<"Please enter an annual death rate greater than zero.\n";
        }
    }while(adeRate < 0);
    
    do{
        cout <<"How many people move into the new population each year?\n";
        cin >> inMovrs;
        if(inMovrs < 0){
            cout <<"\nERROR!";
            cout <<"Please enter a positive value for the number of people moving in per year.\n";
        }
    }while(inMovrs < 0);
    
    do{
        cout <<"How many people move out of the new population each year?\n";
        cin >> outMovrs;
        if(outMovrs < 0){
            cout <<"\nERROR!";
            cout <<"Please enter a positive value for the number of people moving out per year.\n";
        }
    }while(outMovrs < 0);
    
    do{
    cout <<"In how many years are you curious of what the population size will be?\n";
        cin >> numYears;
        if (numYears < 1){
            cout <<"\nERROR!";
            cout <<"\nThe number of years must be a value of 1 or greater.\n";
        }
    }while(numYears < 1);
        
    nwPopSze = popSizeInYear(strSize,inMovrs,outMovrs,numYears,abiRate,adeRate);
    
    cout <<"In a "<< numYears <<" years from now, the new population size will be "
            << nwPopSze <<".";
    
    return 0;
}

int popSizeInYear(int strSize, int inMovrs, int outMovrs, int numYears, float abiRate, float adeRate){
    
        float abrStSze = strSize*(abiRate/100);
        float adrStSze = strSize*(adeRate/100);
        int futrePop = numYears*(strSize + abrStSze - adrStSze + inMovrs - outMovrs);
                
        return (futrePop);
    }
  

