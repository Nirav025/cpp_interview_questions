#include<iostream>
using namespace std;

//Que- Armstrong Number, Number is Armstrong or Not

int main()
{
    int number;
    int originalnumber;
    int sum=0;

    cout<<"Enter Your Number : ";
    cin>>number;

    originalnumber=number;

    while(number>0){
        int digit = number%10;
        sum= (digit*digit*digit)+sum;
        number=number/10;
    }

    if(originalnumber==sum){
        cout<<sum<<" is a Palidrome Number"<<endl; //not required to print "sum" in this
    }else{
        cout<<sum<<" is not a Palidrome Number"<<endl;
    }
    return 0;
}


//Ref link-- https://youtu.be/v5AG8L8XI5c?si=bnQ0zNoyFZH5XK6C