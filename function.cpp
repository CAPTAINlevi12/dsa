 //-------------------------basics---------------------------------
// #include<iostream>
// using namespace std;
// int print(){
//     cout<<"hello sir"<<endl;
//     return 3;
// } 
// int minoftwo(int a,int b){
//     if(a<b){
//         return a;

//     } else{
//         return b;
//     }

// }


// int main(){
// int a;
// //  print();
// // cout<<print();

// a=minoftwo(1,6);
// cout<<"min is " ;
// cout<<a;



//     return 0;
// }
//---------------------------------calculate the sum of two numbers------------
// #include<iostream>
// using namespace std;

// int sofn(int n){
//     int i;
//     int num=0;
//     for(i=1;i<=n;i++){
//         num=num+i;
              
//     }
//     return num;
// }
// int main(){
    
// cout<<sofn(4);


//     return 0;
// }
// #include <iostream>
// using namespace std;
// float divide( float a, float b){
//     float c=a/b;
//     if (a!=0){
//         return c;


//     }  

// }
// int main(){

// cout<< divide(4,5)<<endl;


//     return 0;

 
// }
// #include <iostream> 
// using namespace std;
// int main() {
//  int a;
// cin>>a;

// cout<<a<<endl;



//     return 0;
// }
// #include <iostream>
// using namespace std;
// int multiply(int a,int b)
// {

//   int c=a*b;
//     return c;

// }
// int main(){
//     int a;
//     int b;


// a=multiply(2,4);
// cout<<a<<endl;



//     return 0;
// }
// -----------------------------creating minimum of two numbers-----------------------------------------------------
// #include<iostream>
// using namespace std;
// int minoftwon(int a,int b)
// {

//     if(a>b){
//         return b;
//     } 
//     else{
//         return a;
//     }
// }


// int main(){

// cout<<minoftwon(9,26)<<endl;




//     return 0;
// }
//-------------------calculating the fact of a given number using the function-----------------------------------
// #include <iostream>
// using namespace std;
// int fact(int n)


// {
//     if(n==0){
//         return 1;
//     }
//     else{
//     int p=1;
//     int i;
    
//     for( i=1;i<=n;i++){
//         p=p*i;
        
//     }
//     return p;
// }
// }
//  int main(){
//     int n;
            
// cout<<"enter the number you want to get the fact of "<<endl;
// cin>>n;

// cout<<"the fact of the provided number is "<<fact(n)<<endl;




//     return 0;
//  }
// calculating the sum of digits of a number
// #include<iostream>
// using namespace std;
// int adddig(int num){
    
//     int lastdig;
//     int sum=0;

//     while(num>0){
//         lastdig=num%10;
//         sum+=lastdig;
//         num=num/10;
//     }
//     return sum;
// }
// int main(){
// int n;
// int z;
// cout<<"enter the number you wanna check---"<<endl;
// cin>>n;
// z=adddig(n);
// cout<<z;
//     return 0;
// }
// if a number is prime or not
// #include <iostream>
// using namespace std;

// string primechecker(int n) {
//     if (n <= 1) {
//         return "the number is not prime";
//     }
//     if (n == 2) {
//         return "the number is prime";
//     }

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             return "the number is not prime";
//         }
//     }
//     return "the number is prime";
// }

// int main() {
//     int n;
//     cout << "Enter the number you wanna check: ";
//     cin >> n;
//     cout << primechecker(n);
//     return 0;
// }
// #include<iostream>

// using namespace std;


// int main(){




// cout<<sizeof(long long rint)<<endl;



//     return 0;
// }
// comparing two integer using bitwise
// #include<iostream>
// using namespace std;
// int main(){
// int a;
// int b;
// int c;
// cout<<"enter the desired first integer-";
// cin>>a;
// cout<<"enter the second integer-";
// cin>>b;

// c=(a^b);

// if (c==0){
//     cout<<"both the strings are same"<<endl;

// }  else{

//     cout<<"both the integer are different"<<endl;
// }

//     return 0;
// }