#include<iostream>
using namespace std;

//Que - How to check whether a number is an Automorphic number or not

int main()
{

    int n;
    cout<<"Enter positive number to check : ";
    cin>>n;

    int sqr = n*n;
    int flag = 0;

    while(n>0){
        if(n%10!=sqr%10){
            flag = -1;
            break;
        }
        n=n/10;
        sqr=sqr/10;
    }

    if(flag == 0){
        cout<<"It is an Automorphic Number"<<endl;
    }else{
        cout<<"It is not an Automorphic Number"<<endl; 
    }


    return 0;
}