/* 
 * File:   main.cpp
 * Author: Benjamin Martinez
 * Created on January 24, 2017, 1:36 PM
 * Purpose:  Identify Integer in Number
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversion
//Function Prototypes Here
bool qryDigt(int,int);



//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set SEED
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char digit;
    int number;
  
    //Input or initialize values Here
    cout<<"This program finds digit"<<endl;
    cout<<"Input a single digit"<<endl;
    cin>>digit;
    
    //Generate Random Number
    number=rand();
    //Output 
    if(qryDigt(number,digit-48)){
        cout<<digit<<" was found in: "<<number<<endl;
    } else {
            cout<<digit<<" was not found in "<<number<<endl;
    }
    //Exit
    return 0;
}
//000000000001111111111112222222333333333333334444444444455555666666777777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//************************** Find Digit in Number**************************
//Description: Query a number and compare results
//Inputs:
//          year -> Year from 1000 to 3000
//Outputs:
//          true -> If digit is found
bool qryDigt(int number,int digit){
    //LOOP
    
    do{
        if(number%10==digit)return true;
        number/=10;
    }while(number!=0);
    return false;
}