#include<iostream>
using namespace std;

//Que- Sum of digits of number


int main(){
   int num;
   cout<<"Enter Your Number : " ;
   cin>>num;

    int sum = 0;

    while(num>0){
        int digit = num%10;

        sum = sum + digit;  // we can also write like this "sum+=digit"....

        num = num/10; //For elinimate last number as it is store in sum variabel
    }

    cout<<"Sum of Your Number : "<<sum<<endl;

}
