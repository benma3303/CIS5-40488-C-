/* 
 * File:   main.cpp
 * Author: Benjamin Martinez
 * Created on January 24, 2017, 12:24 PM
 * Purpose:  Biased Coin
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
    unsigned int nTails,nHeads,nCoins;
    
    //Input or initialize values Here
    cout<<"Coin Flipping Problem"<<endl;
    cout<<"Input the Probability of Tails"<<endl;
    cin>>pTails;
    cout<<"Input the number of coin flips"<<endl;
    cin>>nCoins;
   
    //Process/Calculations Here
    pHeads=1-pTails;
    
    for(unsigned int flip=1;flip<=nCoins;flip++){
        float prob=rand()/static_cast<float>(MAXRND);
        if(prob<pTails)nTails++;
        else nHeads++;
        
    }  
    
    //Output Located Here
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Percentage Input for Probability of Tails = "<<pTails<<endl;
    cout<<"Percentage Input for Probability of Heads = "<<pHeads<<endl;
    cout<<"Percentage Input for Probability of Tails = "
            <<static_cast<float>(nTails)/nCoins<<endl;
     cout<<"Percentage Input for Probability of Heads = "
            <<static_cast<float>(nHeads)/nCoins<<endl;
    //Exit
    return 0;
}

