#include<iostream>
#include<limits.h>
using namespace std;


// Que-1 Numbe is s even   odd ??


// int main(){
//     int n;
//     cout<<"Enter Number : ";
//     cin>>n;

//       if(n==0){
//         cout<<"Your number is neigher Even or neigher odd"<<endl;
//     }
    
//      else if(n%2==0){
//         cout<<"Your number is even"<<endl;
//     }


//     else{
//         cout<<"Your Number is Odd"<<endl;
//     }
// }



//Que-2 Find Area of Circle

// int main(){
//     float PI = 3.14 ;
//     float r;

//     cout<<"Enter Radius Of Circle:";
//     cin>>r;

//     float Area = PI*r*r;

//     cout<<"Area of Circle:"<<Area <<endl;


// }




//Que-3 Number is Positive or Negetive


// int main (){
//     float n;

//     cout<<"Number Type karr:";
//     cin>>n;

//     if(n>0){
//         cout<<"Taro Number Positive Chhe"<<endl;
//     }
    
//     else if(n<0){
//         cout<<"Taro Number Negative Chhe"<<endl;
//     }


//     else{
//         cout<<"Taro Number Positive y nathi ke Negative y nathi"<<endl;
//     }


// }



//Que-4 Sum of Natural Number

// int main(){
//     int n;
//     cout<<"Write Any Natural Number here:";
//     cin>>n;

//     int Result = n*(n+1)/2;

//     cout<<"This is your result :"<<Result<<endl;
// }



//Que-5 Sum of Nmber in a Given Range


// int main(){
//     int nstart; //first number
//     int nend; //last number
//     int ncount; //total number of numbers

//     cout<<"first, last ane numbers no number type karr"<<endl;
    
//     cin>>nstart;
//     cin>>nend;
//     cin>>ncount;

//     int result = (nstart + nend)*ncount/2;

//     cout<<"this is your final result:"<<result<<endl;
// }





// Que-1 Numbe is s even   odd ??


// int main(){
//     int n;
//     cout<<"Enter Number : ";
//     cin>>n;

//       if(n==0){
//         cout<<"Your number is neigher Even or neigher odd"<<endl;
//     }
    
//      else if(n%2==0){
//         cout<<"Your number is even"<<endl;
//     }


//     else{
//         cout<<"Your Number is Odd"<<endl;
//     }
// }



//Que-2 Find Area of Circle

// int main(){
//     float PI = 3.14 ;
//     float r;

//     cout<<"Enter Radius Of Circle:";
//     cin>>r;

//     float Area = PI*r*r;

//     cout<<"Area of Circle:"<<Area <<endl;


// }




//Que-3 Number is Positive or Negetive


// int main (){
//     float n;

//     cout<<"Number Type karr:";
//     cin>>n;

//     if(n>0){
//         cout<<"Taro Number Positive Chhe"<<endl;
//     }
    
//     else if(n<0){
//         cout<<"Taro Number Negative Chhe"<<endl;
//     }


//     else{
//         cout<<"Taro Number Positive y nathi ke Negative y nathi"<<endl;
//     }


// }



//Que-4 Sum of Natural Number

// int main(){
//     int n;
//     cout<<"Write Any Natural Number here:";
//     cin>>n;

//     int Result = n*(n+1)/2;

//     cout<<"This is your result :"<<Result<<endl;
// }



//Que-5 Sum of Nmber in a Given Range


// int main(){
//     int nstart; //first number
//     int nend; //last number
//     int ncount; //total number of numbers

//     cout<<"first, last ane numbers no number type karr"<<endl;
    
//     cin>>nstart;
//     cin>>nend;
//     cin>>ncount;

//     int result = (nstart + nend)*ncount/2;

//     cout<<"this is your final result:"<<result<<endl;
// }



//number is prime or not between 0 to 50 (between 0 to 50 range)

// int main(){
//     int no;
//     cout<<"Enter Number :" <<endl;
//     cin>>no;

//     int count = 0;
  
//    if(no<=50){
//         for(int i=1; i <= 50; i++){
        
//         if(no%i==0){
//             count++;
//         }
//      }

//      cout<<"count:"<<count<<endl;

//      if(count==2){
//         cout<<"prime number"<<endl;
//      }

//      else{
//         cout<<"Not Prime"<<endl;
//      }

//    }

   
//    else{
//       cout<<"type number les than 50 "<<endl;
//    }
// }



// 10 no ghadiyo

// int main(){
//    int no = 10;

//    for(int i = 1; i <=10;  i++){

//       cout<<"10*"<<i<<"="<<no*i<<endl;
//    }
// }


// 1 thi 10 no sarvado


// int main(){
//    int sum = 0;

//    for(int i=0; i<=10; i++){
      
//       sum += i;

//       cout<<"This is your sum : "<<sum<<endl;
//    }
// }



// Q= print reverse number 100 to 1

// int main(){
   

//    for(int i=100; i>=1; i--){
      
//       cout<<"This is your reverse number :"<<i<<endl;
//    }

// }



//Q- Sum of Digits of a Number

// int main(){
//    int num;
//    cout<<"Enter Your Number : " ;
//    cin>>num;

//     int sum = 0;

//     while(num>0){
//         int digit = num%10;

//         sum = sum + digit;  // shortcut ma aa rite pn lakhay sum+=digit;

//         num = num/10;
//     }

//     cout<<"Sum of Your Number : "<<sum<<endl;

// }




//Array 

//Q Reverse an array


// int main(){
    
//     int n= 10;

//     int array[n]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};


//     for(int i=n-1; i>=0; i--){
//         cout<<"This is your reverse array : "<<array[i]<<endl;
//     }
// }


//////////////////2D Array////////////////////////////////////////////


//Q-1 sum of  2D array element

// int main (){

//     int sum = 0;
    
//     int row_size = 2;
//     int column_size = 2;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;

//     array[1][0]=3;
//     array[1][1]=4;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     cout<<"This is sum of your array elements :";
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             sum += array[i][j];
//         }
//     }cout<<sum;
        
// }



//Q-2 sum of diagonals

// int main (){

//     int sum = 0;
    
//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }



//     cout<<"This is sum of your diagonal array elements :";
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             if(i=j){
//                 sum += array[i][j];
//             }
//         }
//     }cout<<sum;
        
// }



//Q-3 update element of 2D Array 

// int main(){


//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //Aarray update karvano code

//     cout<<endl;
//     int newrow;
//     cout<<"Enter row :";
//     cin>>newrow;

//     int newcol;
//     cout<<"Enter column :";
//     cin>>newcol;


//     cout<<"Enter new element : ";
//     cin>>array[newrow][newcol];
//     cout<<endl;

     
//      cout<<"This is your updated array :"<<endl;

//      for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }



//Q-4 find min in 2D array
// int main(){


//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     // ahithi start thay chhe minimum shodhva mate no code
//     int minValue = INT_MAX;

//      for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
           
//            if(array[i][j]<minValue){
              
//             minValue=array[i][j];
//            }
//         }

//     }
            
//             cout<<"This is your minimum value of array : ";
//             cout<<minValue;
           

// }
        
            

        
//Q-4 find max in 2D array
// int main(){


//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//     // ahithi start thay chhe minimum shodhva mate no code
//     int maxValue = INT_MIN;

//      for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
           
//            if(array[i][j]>maxValue){
              
//             maxValue=array[i][j];
//            }
//         }

//     }
            
//             cout<<"This is your maximum value of array : ";
//             cout<<maxValue;
           

// }



//Q-5 print array in reverse


// int main(){

//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //reverse mate ni array no code ahithi start thay chhe
//     cout<<endl;
//     cout<<"This is your reverse array :"<<endl;

    
//     for(int i=row_size-1; i>=0; i--){

//        for(int j=column_size-1; j>=0; j--){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



//Q-6 row ne column ma print karavvi & column ne row ma

// int main(){

//     int row_size;
//     int col_size;

//     cout<<"Enter row size of array : ";
//     cin>>row_size;

//     cout<<"Enter column size of array : ";
//     cin>>col_size;

//     int array[row_size][col_size];


//     //input levani loop
//     for(int i=0; i<row_size; i++){

//         for(int j=0; j<col_size; j++){
//             cout<<"Enter element at row  "<<i<<" & column  "<<j<<" : ";
//             cin>>array[i][j];
//         }
//     }
    
//     //output print karavva ni loop

//     cout<<"This is your array : "<<endl;
//     for(int i=0; i<row_size; i++){

//         for(int j=0; j<col_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     cout<<"This is your new array with col in place of row :"<<endl;

    
//     for(int j=0; j<col_size; j++){
//         for(int i=0; i<row_size; i++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //#note- ahi upar ni banne loop ma i & j <row_size & <col_size nakhvi kem ke index 0 thi start thay chhe mate
// }


//Q-7 Even & Odd number find karva

// int main(){

//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=5;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=9;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }



//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             if(array[i][j]%2==0){
//                 cout<<"This is Even number : "<<array[i][j]<<endl;
//             }
//             else{
//                  cout<<"This is Odd number : "<<array[i][j]<<endl;
//             }
//         }
        
//     }
// }




//Q-8 matra 3&5 thi devide thay e print karavva
// int main(){

//     int row_size = 3;
//     int column_size = 3;
    
//     int array[row_size][column_size];

//     array[0][0]=1;
//     array[0][1]=2;
//     array[0][2]=3;

//     array[1][0]=4;
//     array[1][1]=15;
//     array[1][2]=6;

//     array[2][0]=7;
//     array[2][1]=8;
//     array[2][2]=45;
    
//     cout<<"This is your array :"<<endl;

    
//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }



//     for(int i=0; i<row_size; i++){

//        for(int j=0; j<column_size; j++){
//             if((array[i][j]%3==0)&&(array[i][j]%5==0)){
//                 cout<<"This is your number : "<<array[i][j]<<endl;
//             }
           
//         }
        
//     }
// }




//Q- Program a array in ascending order (array ni sankhya o ne chadta kram ma gothvavi)//



// int main(){
    
//     int array[7] = {1, 3, 4, 2, 7, 6, 5};

//     int minvalue = INT_MAX;

  
//      for(int i=0; i<7; i++){
//         if(array[i]<minvalue){
//             minvalue = array[i];
//         }
//     }
    
//     cout<<"Your minimum value is : "<<minvalue<<endl;


// }



// Q- Finding the frequency of elements in an array 


// void findFrequency(int arr[], int n) {
//     int freq[100] = {0}; // मान लेते हैं कि अधिकतम संख्या 100 से अधिक नहीं होगी

   
//     // प्रत्येक तत्व की गिनती करने के लिए एक ही 'for' लूप
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++; // वर्तमान तत्व की गिनती बढ़ाएँ
//     }

   
//     // केवल अद्वितीय (Unique) तत्वों की आवृत्ति प्रिंट करें
//     for (int i = 0; i < n; i++) {
//         if (freq[arr[i]] > 0) {  // यदि इस तत्व की आवृत्ति अभी भी मौजूद है
//             std::cout << "Element: " << arr[i] << ", Frequency: " << freq[arr[i]] << std::endl;
//             freq[arr[i]] = 0; // इसे 0 सेट करें ताकि यह दोबारा प्रिंट न हो
//         }
//     }
// }

// int main() {

//     int arr[] = {1, 2, 2, 3, 3, 3, 4, 1};  // इनपुट ऐरे
//     int n = sizeof(arr) / sizeof(arr[0]); // ऐरे का आकार निकालें

//     findFrequency(arr, n); // फंक्शन कॉल करें

//     return 0;
// }



//Q-Finding  Repeating elements in an Array 

// int main (){
//     int n;
//     cout<<"Enter the number of element : ";
//     cin>>n;

    
//     int array[n];

//     for(int i=0; i<n; i++){
//         cout<<"Enter elements : ";
//         cin>>array[i];
//     }

//     int count;
//     cout<<"Repeating Elements are : ";

//     for(int i = 0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(array[i]==array[j]){
//                 cout<<array[j]<<" ";
//             }
//         }
//     }
// }


//Q-Finding Non Repeating elements in an Array 


int main(){

  

    int n;
    cout<<"Enter the number of element : ";
    cin>>n;

    
    int array[n];

    for(int i=0; i<n; i++){
        cout<<"Enter elements : ";
        cin>>array[i];
    }



    int count;
    cout<<"NON Repeating Elements are : ";

    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!(array[i]==array[j])){
                cout<<array[j]<<" ";
            }
        }
    }


}
















        
            

        
           









    



 
 



            
            
