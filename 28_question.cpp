#include<iostream>
using namespace std;

//Que - Lowest Common Multiple

int main()
{
    int a;
    int b;
    int lcm;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    if(a>b){
        lcm = a;
    }else{
        lcm = b;
    }

    while(1){
        if(lcm%a==0 && lcm%b==0){
            cout<<"The LCM of "<<a<<" and "<<b<<" is : "<<lcm;
            break;
        }
        lcm++;
    }

    return 0;
}