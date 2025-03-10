#include<iostream>
using namespace std;

//Que- Palidrome Number, Number is Palidrome or Not

int main()
{
    int number;
    int originalnumber;
    int sum=0;

    cout<<"Enter Your Number : ";
    cin>>number;

    originalnumber=number; //for store number in variable newnumber
    
    while(number>0){
        int digit = number%10;
        sum = digit+(sum*10);//for store result in sum
        number=number/10; //for elinimate last digit
    }

    if(originalnumber==sum){
        cout<<sum<<" is a palidrome number"<<endl;
    }else{
        cout<<sum<<" is not a palidrome number"<<endl;
    }

    return 0;
}

//Ref link-- https://youtu.be/CYBZjouh800?si=qGWLSTUx6BBzfVcA