/*This is a TEST file to help me tshoot ch7.6 hmwk
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
char arr[3][10] = {{'r','r','c','r','r','s','c','c','r','r'},
            {'c','c','c','s','r','r','c','s','c','c'},
            {'s','s','c','s','c','c','s','s','s','s'}};
int funName(string[],char[][10],int,int,int);
int main() {
    string month[3] = {"June","July","August"};
    int countROW, countCOL;
    int sumRainy;
    
    funName(month,arr,countROW,countCOL,sumRainy);
    
    cout <<"================================"<< endl;
    for(countROW=0; countROW<3; countROW++){
        for(countCOL=0; countCOL<10; countCOL++){
            cout << arr[countROW][countCOL];
            }
        cout << endl;
        }   
        
    /*for(countCOL=0; countCOL<30; countCOL++){
            cout << isWther[0][countCOL];
        }
    cout << endl;
    for(countCOL=0; countCOL<30; countCOL++){
            cout << isWther[1][countCOL];
    }
    cout << endl;
    for(countCOL=0; countCOL<mnthDay; countCOL++){
            cout << isWther[2][countCOL];
    }*/
    return 0;
}

int funName(string month[],char arr[][10],int countROW,int countCOL,int sumRainy){
    int numOfRs_JUNE = 0;
    int numOfCs_JUNE = 0;
    int numOfSs_JUNE = 0;
    
    int numOfRs_AUG = 0;
    int numOfCs_AUG= 0;
    int numOfSs_AUG= 0;
            
    for(countROW=0; countROW<3; countROW++){
        if(countROW==0){
            int numOfRs_JUNE = 0;
            int numOfCs = 0;
            int numOfSs = 0;
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='r'){
                    numOfRs_JUNE++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='c'){
                    numOfCs++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='s'){
                    numOfSs++;
                }
            }
            cout << "There are " << numOfRs_JUNE <<" number of 'r's in the month of "
                    << month[0] << endl;
            cout << "There are " << numOfCs <<" number of 'c's in the month of "
                    << month[0] << endl;
            cout << "There are " << numOfSs <<" number of 's's in the month of "
                    << month[0] << endl;
        }
        if(countROW==1){
            int numOfRs_JULY = 0;
            int numOfCs = 0;
            int numOfSs = 0;
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='r'){
                    numOfRs_JULY++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='c'){
                    numOfCs++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='s'){
                    numOfSs++;
                }
            }
            cout << "There are " << numOfRs_JULY <<" number of 'r's in the month of "
                    << month[1] << endl;
            cout << "There are " << numOfCs <<" number of 'c's in the month of "
                    << month[1] << endl;
            cout << "There are " << numOfSs <<" number of 's's in the month of "
                    << month[1] << endl;
        }
        if(countROW==2){
            
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='r'){
                    numOfRs_AUG++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='c'){
                    numOfCs++;
                }
            }
            for(countCOL=0; countCOL<10; countCOL++){
                if(arr[countROW][countCOL]=='s'){
                    numOfSs++;
                }
            }
            cout << "There are " << numOfRs_AUG <<" number of 'r's in the month of "
                    << month[2] << endl;
            cout << "There are " << numOfCs <<" number of 'c's in the month of "
                    << month[2] << endl;
            cout << "There are " << numOfSs <<" number of 's's in the month of "
                    << month[2] << endl;
        }
    }
    sumRainy = numOfRs_JUNE+numOfRs_JULY+numOfRs_AUG;
    return sumRainy;
}