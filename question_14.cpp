#include<iostream>
using namespace std;

//Que- Fibonacci Series upto nth term

int main()
{
    int n;
    int a=0;
    int b=1;
    int c;

    cout<<"Enter number of term : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<a<<"  ";
        c=a+b;
        a=b; //value of 'b' will be store in a, so 'b' will behave as 'a'
        b=c; //value of 'c' will be store in b, so 'c' will behave as 'b'
    }

    return 0;
}