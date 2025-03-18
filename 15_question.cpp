#include<iostream>
using namespace std;

//Que- Find the Nth Term of the Fibonacci Series


int main()
{
    int n;
    int a=0;
    int b=1;
    int c;

    cout<<"Enter number of term : ";
    cin>>n;
     
    //Here we will star loop from '2'
    
    for(int i=2; i<=n; i++){
        c=a+b;
        a=b; //value of 'b' will be store in a, so 'b' will behave as 'a'
        b=c; //value of 'c' will be store in b, so 'c' will behave as 'b'

        if(i==n){
            cout<<a<<"  ";
        }
    }

    return 0;
}