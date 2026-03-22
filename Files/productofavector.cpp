// product of each element of the vector stored in different array
//the brute force approach
//leetcode 238
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> productarray  (vector <int> a){
//     int n = a.size();
//     vector <int> b(n);

     

//     for(int i=0;i<n;i++){
//         int productelem=1;

//         for(int j=0;j<n;j++){

//             if(i!=j){
//                 productelem=productelem*a[j];
                

//             }
//         }
//         b[i]=productelem;

//     }


//     return b;
// }

// int main(){
//     vector<int>a={2,4,23,2,3,2};
//     vector <int>b={a};

//     b=productarray(a);
//     cout<<"the product array elements are--";

//     for(int i=0;i<b.size();i++){
        
        
//         cout<<" "<<b[i];

//     }


// return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
 vector <int> lol(vector <int> a){

    int n = a.size();
  vector<int> b(n, 1);
 
  
    

  for(int i=1;i<n;i++){
    
    b[i]=b[i-1]*a[i-1];}



    int product=1;


    for(int i=n-2;i>=0;i--){
        
        
  product=product*a[i+1];
  b[i]=b[i]*product;
    } 
    return b;
  


    }



int main(){
vector <int> a={1,2,3,4};
vector <int>b;
b=lol(a);
for( int i=0;i<b.size();i++){
cout<<"the product ARRAY is   "<<b[i]<<endl;

}


    return 0;
}