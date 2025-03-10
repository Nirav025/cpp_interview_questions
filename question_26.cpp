#include<iostream>
using namespace std;


//Que - How to check whether a numbers are in frienfly pair (Amicable Numbers) or not


int main()
{
    int num1;
    int num2;

    int sum1 = 0;
    int sum2 = 0;

    cout<<"Enter First number : ";
    cin>>num1;

    cout<<"Enter Second number : ";
    cin>>num2;

    for(int i = 1; i<num1; i++){
        if(num1%i == 0){
            sum1 = sum1 + i;
        }
    }
    for(int i = 1; i<num2; i++){
        if(num2%i == 0){
            sum2 = sum2 + i;
        }
    }

    if( num1 == sum2 && num2 == sum1){
        cout<<"The given numbers are in Friendly Pair "<<endl;
    }else{
        cout<<"The given numbers are not in Friendly Pair "<<endl;
    }


    return 0;
}