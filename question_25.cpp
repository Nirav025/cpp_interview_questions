#include<iostream>
using namespace std;

//Que - How to check whether a number is an Abundant number or not


int main()
{
    int n;
    int sum = 0;

    cout<<"Enter Your number : ";
    cin>>n;

    for(int i = 1; i<n; i++){
        if(n%i == 0){
            sum = sum + i;

        }
    }
    if(sum>n){
        cout<<n<<" is an Abudant number"<<endl;
    }else{
        cout<<n<<" is not an Abudant number"<<endl;
    }
    return 0;
}