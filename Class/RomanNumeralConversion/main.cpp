/* 
 * File:   main.cpp
 * Author: Benjamin Martinez
 * Created on January 24, 2017, 10:53 AM
 * Purpose:  Converting into Roman Numerals
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const int THOSNDS=1000;//Conversion to 1000
const int HUNDRDS=100; //Conversion to 100
const int TENS=10;     //Conversion to 10
//Function Prototypes Here
string cnvrtRN(int);



//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short year;
  
    //Input or initialize values Here
    cout<<"This program converts year into Roman Numerals"<<endl;
    cout<<"Input year between 1000AD TO 3000 AD"<<endl;
    cin>>year;
    
    //Output the Roman numeral
    //Test
    for(int year=1000;year<=3000,year++);
    cout<<year<<" = "<<cnvrtRN(year)<<endl;
    //Exit
    return 0;
}
//000000000001111111111112222222333333333333334444444444455555666666777777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//************************** Roman Numeral Conversion **************************
//Description: Convert Number From 1000 to 3000
//Inputs:
//          year -> Year from 1000 to 3000
//Outputs:
//          romanYr -> output to the
string cnvrtRN(int year){
    //Declare Variables
    char n1000,n100,n10,n1;//The number of powers of 10
    string roman="";
    //Parsing the year information
    n1000=(year-year%THOSNDS)/THOSNDS;//Determines how many 1000's 
    year=(year-n1000*THOSNDS);       //Year without 1000's
    n100=(year-year%HUNDRDS)/HUNDRDS;//Determines how many 100's 
    year=(year-n100*HUNDRDS);       //Year without 100's
    n10=(year-year%TENS)/TENS;       //Determines how many 10's 
    n1=(year-n10*TENS);              //Determines how many 1000's 

    //Fill the String with M's
    switch(n1000){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        
        default:cout<<"Bad Year"<<endl;
    }
   
    
    //Fill the String with C's
    switch(n100){
        case 9:roman+="CM";break;
        case 8:roman+="CCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
   
    //Fill the String with X's
    switch(n10){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
     //Fill the String with Is
    switch(n1){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //String return
    return roman;
}
