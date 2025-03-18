#include<iostream>
using namespace std;

//Que- Armstrong Number in a given range..



int main()
{
    int a; //first element of a range
    int b; //last element of a range
     
    cout<<"Enter first element of a range : ";
    cin>>a;
    
    cout<<"Enter last element of a range : ";
    cin>>b;

    int n;
    

for(int number=a; number<=b; number++){
        
    int sum=0;
    n=number;

   
    while(n>0){
        int digit = n%10;
        sum= (digit*digit*digit)+sum;
        n=n/10;
    }

    if(sum==number){
        cout<<number<<" is a Palidrome Number"<<endl; //not required to print "sum" in this
    }

    }

    return 0;
}


//Ref link-- https://youtu.be/mkmWmytbhB0?si=uLmszcZuABFR_zcW