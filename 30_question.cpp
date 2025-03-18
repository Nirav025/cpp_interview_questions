#include<iostream>
#include<math.h>
using namespace std;

//Que - Octal to Decimal conversion :

int main()
{
    int octal;
    int decimal = 0;
    int i = 0;
    int rem;

    cout<<"Enter the octal number : ";
    cin>>octal;

    while(octal!=0){
        rem = octal%10;
        decimal = decimal+(rem*pow(8,i));
        i++;
        octal = octal/10;
    }
    cout<<"Equivalent Decimal Value : "<<decimal<<endl;

    return 0;
}