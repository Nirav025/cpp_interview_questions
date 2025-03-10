#include<iostream>
using namespace std;


//Que- Number is perfect or not

int main()
{

    int n;
    int i = 1;
    int sum = 0;

    cout<<"Enter Your Number : ";
    cin>>n;

    while(i<n){
        if(n%i==0){
            sum = sum+i;
        }
        
        i++;
    }

    if(sum == n){
        cout<<i<<" is a perfect number"<<endl;
    }else{
        cout<<i<<" is not a perfect number"<<endl;
    }

    return 0;
}