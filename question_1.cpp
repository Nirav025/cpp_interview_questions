#include<iostream>
using namespace std;


//Question-1 Even or Odd number ??


int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

      if(n==0){
        cout<<"Your number is neigher Even or neigher odd"<<endl;
    }
    
     else if(n%2==0){
        cout<<"Your number is even"<<endl;
    }
    else{
        cout<<"Your Number is Odd"<<endl;
    }
}
