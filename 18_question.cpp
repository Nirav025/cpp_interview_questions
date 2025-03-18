#include<iostream>
using namespace std;

//Que- Factors of a Number

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
     
    cout<<"Factors of "<<num<<" is ";
    for(int i=1; i<=num; i++){

        if(num%i==0){
            cout<<i<<"  ";
        }
    }
    return 0;
}