// using different types of vector functions----

// #include <iostream>
// #include<vector>

// using namespace std;
// int main(){

//     vector<int> myvec={12,234,242,52};
//    myvec.pop_back();
// for (int i : myvec ){


//    cout<<i<<endl;
// } 

//     cout<<myvec.at(0);
    
//     return 0;
// }
//-------------------------------------the kadane's algorithm-----------------------------

// #include<iostream>
// #include<climits>
// using namespace std;

// int kadane(int arr[],int n){
// int maxsum=INT_MIN;
//     for(int start=0;start<n;start++){
//         int currentsum=0;
//         for(int end=start;end<n;end++){
//             currentsum=currentsum+arr[end];
//            maxsum=max(currentsum,maxsum);
        
//         if(currentsum<0){
            
//             maxsum=0;
//         }

//     }


//     }
//     return maxsum;



// }
// int main(){

// int i;
// int n;
// int arr[n]={10,12,-2,3};
// cout<<kadane(arr,n);




//     return 0;
// }
// -------------------------the majority sum using brute force approach--------------------------------
// #include<iostream>
// #include <vector>
// using namespace std;

// vector <int> thesum(vector<int> a, int target){
// int  n=a.size();
// vector<int>  ans;

// for(int i =0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]+a[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;

//         }
//     }
    
// } 
// }




// int main(){
// int b;

// vector<int>a={4,5,4,2};
// cout<<"enter the target value you wanna check"<<endl;
// cin>>b;

// vector <int> c;
// c=thesum(a,b);

// cout<<"the integer whose sum contribute to the consicutive desired value is "<<c[0]<<"   and  "<<c[1];






//     return 0;
// }

//---------------------------------the majority element using the brute force approach-------------------------------------------------------
// #include<iostream>
// #include<vector>
// using namespace std;
// int  themajority(vector <int> a){
     
     
//      for(int i=0;i<a.size();i++){
//         int freq=1; 
//         for(int j=i+1;j<a.size();j++){
//             if(a[i]==a[j]){
//                 freq++;
//             }
//         } if(freq>a.size()/2){
//             return a[i];
//         }


//      }{
//         return -1;
//      }

// }
// int main(){
// vector <int> a={4,4,2,1,5,5,5,5,5};


// cout<<"the majority elem is "<<themajority(a);




//     return 0;
// }
//-------------------------------the majority element better approach------------------------------------------------------------------
// #include<iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//      int melema(vector <int> a){
//         sort(a.begin(),a.end());
//         int freq=1;
        

//         for(int i=1;i<a.size();i++){  


            
//             if(a[i]==a[i-1]){

//                 freq++;}

//                 else{
//                     freq=1;
//                 }
//                    if(freq>a.size()/2){
//                 return a[i];}

                

//             }
//             {
//                 return -1;
//             }
          
            
//         }
     

     

// int main(){

// vector <int> a={1,2,2,1,1};

// cout<<"the majority elem is  "<<melema(a)<<endl;

//     return 0;
// }
//-------------------------------------------------------the majority elem using the moore one----------------------------------------------------------
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace  std;

// int moore(vector <int>a){
//     sort(a.begin(),a.end());

// int currelem=a[0];
// int freq=1;

//     for(int i=1;i<a.size();i++){

//         if(a[i]==a[i-1]){
//             freq++;
//         }
//        else { freq--;
            
//         }
//         if(freq==0){
//             currelem=a[i];
//         }
//     }
//     return currelem;

//     {
//         return 1;
//     }


// }

// int main(){
//     vector<int>a={3,4,2,2,2,2,4,};



// cout<<"the majority element is "<<moore(a)<<endl;


//     return 0;
// }
// solving the power of any number for log n operation instead of n for better efficiency ===============
#include<iostream>
#include<vector>
using namespace std;

int power(long  power,float base ){
    int ans=1 ;
  
while (power>0){
    if(power%2>0){
        ans*=base;


    }
   base= base*base;

   power=power/2;}

return ans;

}
int main(){
int a=56;
int b=78686;
cout<<"the answer is "<<power(a,b)<<endl;




    return 0;
}


#include<iostream>
#include<vector>
using namespace std;













