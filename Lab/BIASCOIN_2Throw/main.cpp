/* 
 * File:   main.cpp
 * Author: Benjamin Martinez
 * Created on January 24, 2017, 12:44 PM
 * Purpose:  Biased Coin of 2 Coin Throw
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const unsigned int MAXRND=pow(2,31)-1;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    float pTails,pHeads;
    unsigned int nTT=0,nTH=0,nHT=0,nHH=0,nCoins;
    
    //Input or initialize values Here
    cout<<"Coin Flipping Problem"<<endl;
    cout<<"Input the Probability of Tails"<<endl;
    cin>>pTails;
    cout<<"Input the number of coin flips"<<endl;
    cin>>nCoins;
   
    //Process/Calculations Here
    pHeads=1-pTails;
    
    for(unsigned int flip=1;flip<=nCoins;flip++){
        float prob1=rand()/static_cast<float>(MAXRND);
        float prob2=rand()/static_cast<float>(MAXRND);
        if(prob1<pTails&&prob2<=pTails)nTT++;
        else if(prob1<=pTails&&prob2>pTails)nTH++; 
        else if(prob1>pTails&&prob2>pTails)nHH++; 
        else nHT++; 
        
    }  
    
    //Output Located Here
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Percentage Input for Probability of Tails = "<<pTails<<endl;
    cout<<"Percentage Input for Probability of Heads = "<<pHeads<<endl;
    cout<<"Percentage Output for Probability of 2 Tails = "
            <<static_cast<float>(nTT)/nCoins<<endl;
     cout<<"Percentage Output for Probability of 1 Tail 1 Head = "
            <<static_cast<float>(nTH)/nCoins<<endl;
     cout<<"Percentage Output for Probability of 1 Head 1 Tail = "
            <<static_cast<float>(nHT)/nCoins<<endl;
     cout<<"Percentage Output for 2 Tails = "
              <<static_cast<float>(nHH)/nCoins<<endl;
    //Exit
    return 0;
}

