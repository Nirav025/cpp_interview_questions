#include<iostream>
using namespace std;

//Que-6 Leap Year or Not


//Note : ->> conditons of year is leap year or not ->>(1)If a year is evenly devide by 400 & NOTevenly devide by 100.
//(2)->> If a year is evenly devide by 4


int main()
{
    int year;

    cout<<"Enter year : ";
    cin>>year;

    if(((year%400==0)||(year%100!=0))&&(year%4==0)){
        cout<<year<<" is a leap year"<<endl;
    }
    else{
        cout<<year<<" is a not leap year"<<endl;
    }
    
    return 0;
}