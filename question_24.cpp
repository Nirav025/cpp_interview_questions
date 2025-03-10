#include<iostream>
using namespace std;

//Que - How to check whether a number is an Harshad number or not


int main()
{
    int num;
    int sum = 0;

    cout<<"Enter Your Number : ";
    cin>>num;

    int n = num;

    while(num>0){
        int rem = num%10;
        sum = sum + rem;
        num = num/10;
    }

    if(n%sum == 0){
        cout<<n<<" is a Harshad number"<<endl;
    }else{
        cout<<n<<" is not a Harshad number"<<endl;
    }
    return 0;
}