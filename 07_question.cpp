#include<iostream>
using namespace std;

//Que-7 Prime Number

//Note-->> Prime number is only evenly devide by 1 & itself......

int main()
{
    int number;
    cout<<"Enter your number : ";
    cin>>number;

    int count=0; //as here starting count is 0

    for(int i=1; i<number; i++){
        if(number%i==0){
            count++;
        }
    }

    if(count==2){
        cout<<number<<" is a prime number"<<endl;
    }
    else{
        cout<<number<<" is a not prime number"<<endl;  
    }

    return 0;
}