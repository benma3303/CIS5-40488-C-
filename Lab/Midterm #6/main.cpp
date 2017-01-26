/* 
 * File:   main.cpp
 * Author: Benjamin Martinez
 * Created on January 24, 2017, 5:00 PM
 * Purpose:  To Find Sum of Series
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversion
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float X,nTerms,sum=1;
    //Input or initialize values Here
    cout<<"This program calculates the sum of a specific series."<<endl;
    cout<<"Input the value of X in the Series"<<endl;
    cin>>X;
    cout<<"Input the number of terms."<<endl;
    cin>>nTerms;
   
    //Process/Calculations Here
    int count;
    for(count=1;count<=nTerms;count++){
        sum=sum*count;
        
        cout<<"This is the sum: "<<sum<<" "
                "and this is the Terms: "<<nTerms<<endl;
    }  
    
    //Output Located Here
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<" "<<endl;
     cout<<" "<<endl;
    //Exit
    return 0;
}

