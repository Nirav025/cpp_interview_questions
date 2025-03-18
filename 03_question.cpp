#include<iostream>
using namespace std;


//Que-3 Sum of Numbers in a Given Range


int main(){
    int nstart; //first element of range
    int nend; //last element of range
    int ncount; //total number of elements in range

    cout<<"Enter first element of range : "<<endl;
    cin>>nstart;

    cout<<"Enter last element of range : "<<endl;
    cin>>nend;

    cout<<"Enter number of elements in the range : "<<endl;
    cin>>ncount;
    

    int result = (nstart + nend)*ncount/2;

    cout<<"This is your final result:"<<result<<endl;
}