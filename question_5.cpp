#include<iostream>
using namespace std;

//Que-5 Greatest of three numbers 

int main()
{
    int a;
    int b;
    int c;

    cout<<"Enter first number : ";
    cin>>a;

    cout<<"Enter second number : ";
    cin>>b;

    cout<<"Enter third number : ";
    cin>>c;

    if((a>b)&&(a>c)){
        cout<<"The greatest number is : "<<a<<endl;
    }

    else if((b>c)&&(b>a)){
        cout<<"The greatest number is : "<<b<<endl;
    }

    else{
        cout<<"The greatest number is : "<<c<<endl;
    }


    return 0;
}