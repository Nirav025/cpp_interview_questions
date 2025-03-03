#include<iostream>
using namespace std;

//Que- Power of a number


int main()
{
    int x;
    int y;
    int p=1;
    
    cout<<"Enter number : ";
    cin>>x;

    cout<<"Enter number's power : ";
    cin>>y;

    for(int i=1; i<=y; i++){
        p = p*x;
    }

    cout<<"Result is : "<<p<<endl;

    return 0;
}