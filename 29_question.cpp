#include<iostream>
using namespace std;

//Que - Binary to Decimal to conversion 


int main()
{
    long b;
    long dec = 0;
    long i = 1;
    long rem;

    cout<<"Input a binary number : ";
    cin>>b;

    while(b!=0){
        rem=b%10;
        dec=dec+rem*i;
        i=i*2;
        b=b/10;
    }
    cout<<"Decimal number : "<<dec<<endl;

    return 0;
}