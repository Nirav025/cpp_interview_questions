#include<iostream>
using namespace std;

//Que- Number is strong or not

int main()
{
    int n;
    int sum = 0;

    cout<<"Enter Your Number : ";
    cin>>n;

    int temp = n;

    while(n){
        int num = n%10;
        int fact = 1;

        for(int i=num; i>0; i--){
            fact=fact*i;
        }
        sum+=fact;
        n/=10;
    }

    if(sum == temp){
        cout<<temp<<" is a strong number";
    }
    else{
        cout<<temp<<" is a not strong number";
    }

    return 0;
}