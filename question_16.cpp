#include<iostream>
using namespace std;

//Que- Factorial of a number

int main()
{
    int n;
    int number=1;

    cout<<"Enter Number for its Factorial : ";
    cin>>n;

    for(int i=n; i>=1; i--){
        number = number*i;
    }

    cout<<"Factorial of "<<n<<" is "<<number<<endl;

    return 0;
}