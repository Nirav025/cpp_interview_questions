#include<iostream>
using namespace std;

//Que- Find Prime Factors of a Number


//Note- Ex- if Number is 24 than factors of 24 are => 1, 2, 3, 4, 6, 8, 12, 24.. then Prime numbers => 2, 3, 5, 7, 11, 13...  then prime factors of '24' are => 2, 2, 2, 3....

int main()
{
   int n;

   cout<<"Enter the number : ";
   cin>>n;
   
   cout<<"Prime factors of "<<n<<" is : ";
   //Here we will start loop from '2' beacause we want prime factorial & '2' is smallest prime number
   for(int i=2; n>1; i++){

    while(n%i==0){
        cout<<i<<"  ";
        n=n/i;
    }

   }

    return 0;
}



//Ref Link-- https://www.youtube.com/watch?v=hWeZMWyVamo