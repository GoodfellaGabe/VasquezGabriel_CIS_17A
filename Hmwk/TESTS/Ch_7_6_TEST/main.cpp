/*
 * Author:     Gabriel Vasquez
 * Date:       Sept 6, 2021
 * Class:      CIS-17A-48593
 * Assignment: Review Homework 1, ch7.6 pg 449
 */
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
char isWther[3][30];
void june_Report(string[],char[][30],int);
void july_Report(string[],char[][30],int);
void aug_Report(string[],char[][30],int);
void sum_Report(char[][30],int,int,char[]);
string comp_Rep(int,int,char[][30],char[]);

int main() {
    string month[3] = {"June","July","August"}; 
    char wthrCdtn[3] = {'r','c','s'};
    int countROW, countCOL;
    string mostRain;
    ifstream inFile;
    
    //Maybe create a function for extracting data from file to Array
    inFile.open("RainOrShine.txt");
    //extract data from txt file to an Array:
    for(countROW=0; countROW<3; countROW++){
        for(countCOL=0; countCOL<30; countCOL++){
            inFile >> isWther[countROW][countCOL];
        }
    }
    inFile.close();
    cout << "Here's a display of all data inside the txt file:\n";
    for (countROW=0; countROW<3; countROW++){
        for(countCOL=0; countCOL<30; countCOL++){
            cout << isWther[countROW][countCOL];
        }
        cout << endl;
    } 
    
    cout << "\nHere's the weather report for June:\n";
    june_Report(month,isWther,countCOL);
    
    cout << "\nHere's the weather report for July:\n";
    july_Report(month,isWther,countCOL);
    
    cout << "\nHere's the weather report for August:\n";
    aug_Report(month,isWther,countCOL);
    
    cout << "\nHere's the total number of rainy, cloudy, and sunny days:\n";
    sum_Report(isWther,countROW,countCOL,wthrCdtn);
    
    mostRain = comp_Rep(countROW,countCOL,isWther,wthrCdtn);
    cout <<"\"" << mostRain  <<"\" is the month with the most rainy days.\n";
    

    return 0;
}
void june_Report(string month[],char isWther[][30],int countCOL){
    int numJunR, numJunC, numJunS, row;
    numJunR = 0;
    numJunC = 0;
    numJunS = 0;
    row = 0;
        while(row==0){
            for(countCOL=0; countCOL<30; countCOL++){
                switch(isWther[row][countCOL])
                {
                    case 'r': numJunR++;
                                break;
                    case 'c': numJunC++;
                                break;
                    case 's': numJunS++;
                                break;
                    default: cout << "ERROR! Switch did not work properly.\n";
                                break;
                }
            }
            row++;
        }
   cout << "\tNumber of rainy days in " << month[row] <<": "<< numJunR << endl;
   cout << "\tNumber of cloudy days in " << month[row] <<": "<< numJunC << endl;
   cout << "\tNumber of sunny days in " << month[row] <<": "<< numJunS << endl;
}
void july_Report(string month[],char isWther[][30],int countCOL){
    int numJulR, numJulC, numJulS, row;
    numJulR = 0;
    numJulC = 0;
    numJulS = 0;
    row = 1;
        while(row==1){
            for(countCOL=0; countCOL<30; countCOL++){
                switch(isWther[row][countCOL])
                {
                    case 'r': numJulR++;
                                break;
                    case 'c': numJulC++;
                                break;
                    case 's': numJulS++;
                                break;
                    default: cout << "ERROR! Switch did not work properly.\n";
                                break;
                }
            }
            row++;
        }

   cout << "\tNumber of rainy days in " << month[row] <<": "<< numJulR << endl;
   cout << "\tNumber of cloudy days in " << month[row] <<": "<< numJulC << endl;
   cout << "\tNumber of sunny days in " << month[row] <<": "<< numJulS << endl;
   cout <<endl;
}
void aug_Report(string month[],char isWther[][30],int countCOL){
    int numAugR, numAugC, numAugS, row;
    numAugR = 0;
    numAugC = 0;
    numAugS = 0;
    row = 2;
        while(row==2){
            for(countCOL=0; countCOL<30; countCOL++){
                switch(isWther[row][countCOL])
                {
                    case 'r': numAugR++;
                                break;
                    case 'c': numAugC++;
                                break;
                    case 's': numAugS++;
                                break;
                    default: cout << "ERROR! Switch did not work properly.\n";
                                break;
                }
            }
            row++;
        }

   cout << "\tNumber of rainy days in " << month[row] <<": "<< numAugR << endl;
   cout << "\tNumber of cloudy days in " << month[row] <<": "<< numAugC << endl;
   cout << "\tNumber of sunny days in " << month[row] <<": "<< numAugS << endl;
   cout <<endl;
}
void sum_Report(char isWther[][30],int countROW,int countCOL,char wthrCdtn[]){
    int totalR, totalC, totalS;
    totalR = 0;
    totalC = 0;
    totalS = 0;
        for(countROW=0; countROW<3; countROW++){
            for(countCOL=0; countCOL<30; countCOL++){
                switch(isWther[countROW][countCOL])
                {
                    case 'r': totalR++;
                                break;
                    case 'c': totalC++;
                                break;
                    case 's': totalS++;
                                break;
                    default: cout << "ERROR! Switch did not work properly.\n";
                                break;
                }
            }
        }
    cout << "\tTotal rainy days: " << totalR << endl;
    cout << "\tTotal cloudy days: " << totalC << endl;
    cout << "\tTotal sunny days: " << totalS << endl;
}
string comp_Rep(int countROW,int countCOL,char isWther[][30],char wthrCdtn[]){
    int numJunR,numJunC,numJunS;
    int numJulR,numJulC,numJulS;
    int numAugR,numAugC,numAugS;
    for (countROW=0; countROW<3; countROW++){
        if(countROW==0){
            for(countCOL=0; countCOL<30; countCOL++){
                if(isWther[countROW][countCOL]=='r'){
                    numJunR++;
                }
            }
        }
        if(countROW==1){
            for(countCOL=0; countCOL<30; countCOL++){
                if(isWther[countROW][countCOL]=='r'){
                    numJulR++;
                }
            }
        }
        if(countROW==2){
            for(countCOL=0; countCOL<30; countCOL++){
                if(isWther[countROW][countCOL]=='r'){
                    numAugR++;
                }
            }
        }
        cout <<endl;
    }
    if(numJunR > numJulR && numJunR > numAugR){
        return "June";
    }
    else if(numJulR > numJunR && numJulR > numAugR){
        return "July";
    }
    else if(numAugR > numJunR && numAugR > numJulR){
        return "August";
    }
    else{
        cout <<"ERROR! Something went wrong with the comparing function.";
    }
}

