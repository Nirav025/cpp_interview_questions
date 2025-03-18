#include<iostream>
using namespace std;

//Que-8 Print Prime numbers within a given range


int main()
{
   int a;
   int b;

   cout<<"Enter first element of range : ";
   cin>>a;

   cout<<"Enter last element of range : ";
   cin>>b;
   
   
   for(int i=a; i<=b; i++){
    
    int count =0; //It must be declare in inside this forloop

      for(int j=1; j<=i; j++){
        if(i%j==0){
            count++;
        }
      }

      if(count==2) //This must be in this foor loop
      {
        cout<<"Prime number is : "<<i<<endl;
      }
   }

   
   return 0;  

}