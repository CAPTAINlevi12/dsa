// //sorting algorithm //------------------------------learn the logic as it has been created earlier


// //bubble sort


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector <int> sortnum(vector <int> a,int n){
   
//     for(int i=0;i<n;i++){
//         bool isswap=false;
        
        
//         for(int j=0;j<n-i-1;j++ ){


//             if(a[j+1]<a[j]){
//                 swap(a[j],a[j+1]);
//                 isswap=true;
//             }
          
//         }
//           if(!isswap){
//                 return;
//             }
//         }


    
//     return a;
// }
    




//  int main(){
// vector <int> a={4,1,5,2,3};
// int n=a.size();



// a=sortnum(a,n);


// for(int i=0;i<n;i++){
// cout<<"the sorted num is "<<a[i]<<endl;

// }






//     return 0;
//  }


//-----------selection sort ------------------------------------------------
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//  vector <int> selectionsort(vector<int> a,int n){
        
//     for(int i=0;i<n;i++){

//         for(int j=i+1;j<n;j++){

//             if(a[i]>a[j]){
//                 swap(a[i],a[j]);
//             }
//         }
//     }
//     return a;
//  }
//  int main(){
// vector <int> a={4,1,5,2,3};
// int n;
// n=a.size();
// a=selectionsort(a,n);
// for(int i=0;i<n;i++){
//     cout<<a[i]<<endl;

// }




//     return 0;
//  }


//----------------------------------------insertion sort--------------------------------------------------------
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> insertionsort(vector <int>  a, int n){


    for(int i=1;i<n;i++){

int curr=a[i];
int prev=i-1;
 while(prev>=0&&a[prev]>curr){


    a[prev+1]=a[prev];
    prev--;
 }
  a[prev+1]=curr;



    }
    return a;

}int main()
{
   
     vector <int> a={2,5,9,1,3};
     int n=5;


    a=insertionsort(a,5);

    for(int i=0;i<n;i++){


        cout<<"the sorted array is "<<a[i]<<endl;
    }

    

 


return 0;
}