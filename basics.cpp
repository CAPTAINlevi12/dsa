//  #include<iostream> 
// using namespace std;
//  int main (){
//   int a;
//   int b;
//   int c;
//   cout<<"enter the first number"<<endl;
//   cin>>a;
//   cout<<"enter the second number"<<endl;
//   cin>>b;
// //   c=a+b;
// //   cout<<"The sum of a and b is="<<c<<endl;

// return 0;
//  }
//  #include <iostream>
// using namespace std;

// int main() {
//     double num1, num2;
//     char op;
//     double result;

//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> num2;

//     switch(op) {
//         case '+':
//             result = num1 + num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '-':
//             result = num1 - num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '*':
//             result = num1 * num2;
//             cout << "Result: " << result << endl;
//             break;
//         case '/':
//             if (num2==0){
//                 result = num1 / num2;}
//             else {
//                 cout << "Error: Division by zero!" << endl;
//                return 1;
//             }
//             cout << "Result: " << result << endl;
//             break;
//         default:
//             cout << "Invalid operator!" << endl;
//     }

//     return 0;
// }

//TO find the largest of two numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     double a ,b,c;

//     cout<<"enter the first number=="<<endl;


//     cin>>a;
     
    
//     cout<<"enter the second number=="<<endl;


//     cin>>b;

//     if(a>b) {
//         cout<<"a is bigger";
//     } else{
//         cout<<"b is bigger";

//     }
// return 0;
// }


// TO CHECK IF THE CHARACTER IS A UPPERCASE OR A LOWERCASE CHARACTER

// #include <iostream>
// using namespace std;

// int main(){

// char ch ;
// A
// cout<<"enter the character you want to check"<<endl;
// cin>>ch;

// if( ch >= 'a' && ch <= 'b')  

// {
// cout<<"the entered character is a lowercase character"<<endl;

// } else{
//     cout<<"the entered character is a uppercase character "<<endl;
// }

// return 0;

// 
//  sum of n numbers 
// #include <iostream>
// using namespace std;
// int main()
// {

// int n;
// int sum;
// cout<<"enter a number"<<endl;
// cin>>n;
// sum=0;
// cout<<sum;


// while(sum<n)
// {
   
// cout<<sum<<endl;
//  sum++;
// }

//     return 0;
// }
//sum of all odd number from 1 to n 
// #include <iostream>
// using namespace std;
// int main(){
// int n;
// int i;
// int oddsum=0;
// cout<<"enter a number"<<endl;                                         //important one
// i=1;


// cin>>n;
// while(i<n){

//     if(i%2!=0){ oddsum+=i;
//     }
//     i++;

// }
// cout<<oddsum<<endl;



//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){

// int evensum=0;
// int i=1;
// int n;
// cout<<"enter a number "<<endl;
// cin>>n;

// while(i<n){

//     if(i%2==0){
//         evensum=evensum+i;
        
//     }
//     i++;

// }

// cout<<"sum is "<<evensum<<endl;






//     return 0;
// }
// TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT
// #include<iostream>
// using namespace std;
// int main() {
// int n;
// bool isprime=true;
// int i=2;
// cout<<"enter the number you want to check"<<endl;

// cin>>n;

// while(i*i<=n){
//     if(n%i==0){
//          isprime=false;
//         break;

        
//     }
//     i++;
// }

// if(isprime==false){
//     cout<<"Given number is not a prime"<<endl;

// } else{
//     cout<<"the given number is prime"<<endl;
// }

//  return 0;   
// }
// ---------------creating nested loop---------the star code--------------------------------
// #include<iostream>
// using namespace std;
// int main() 
// {   int i;
//     int n;
//     int j;
//     int k;

//     cout<<"enter the number of lines you want"<<endl;
//     cin>>n;
//     cout<<"enter the amount of stars you want in a single line"<<endl;
//     cin>>k;
    
//     for(i=1;i<=n;i++){
//         for(j=1;j<=k;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


//     return 0;
// }
#include<iostream