#include<iostream>
using namespace std;

//Que - Highest Common Factor(HCF):


int main()
{
   int num1;
   int num2;
   int hcf = 1;

   cout<<"Enter first number : ";
   cin>>num1;

   cout<<"Enter second number : ";
   cin>>num2;


    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    cout<<"HCF of "<<num1<<" and "<<num2<<" is : "<<hcf;

    return 0;
}