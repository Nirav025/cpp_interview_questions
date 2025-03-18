#include<iostream>
using namespace std;

//Que - Program to Check for Perfect Square in C++


int main()
{
    int n;
    int flag =0;

    cout<<"Enter Your Number : ";
    cin>>n;

    for(int i =1; i<n; i++){
        if(i*i==n){
            flag=1;
            break;
        }
        if(i*i>n){
            break;
        }
    }
    if(flag == 1){
        cout<<n<<" is a perfect square"<<endl;
    }else{
        cout<<n<<" is not a perfect square"<<endl;
    }

    cout<<endl;

    return 0;
}