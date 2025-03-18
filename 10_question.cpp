#include<iostream>
using namespace std;

//Que- Reverse of a number...

int main()
{
    int number;
    cout<<"Enter Your Number : ";
    cin>>number;


    while(number>0){
        int digit = number%10;//This is used to store reminder in digit variable
        cout<<digit; //This prints reminder
        number=number/10; //Its devide number by 10 so we can elinimate last digit.. Ex-we can ellinimate 3 of number 123 by devide it from 10, and than loop will be go for number "12"......
    }
    return 0;
}