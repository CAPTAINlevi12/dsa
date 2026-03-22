// #include<iostream>
// #include<vector>
// using namespace std;

// int  singleelement(vector <int> a){
//     int start=0;
//     int end=a.size()-1;
    


//  while(start<=end){
//     int mid=start+(end-start)/2;
//     if(mid==0&&a[mid]!=a[mid+1]){
//         return mid;
//     }
//     if(mid==end&&a[mid]!=a[mid-1]){
//         return mid;
//     }
//     if(a[mid]!=a[mid-1]&&a[mid]!=a[mid+1]){
//         return mid;
//     }
    
//     else if (mid%2==0){
//         if(a[mid]==a[mid-1]){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     else{
//         if(a[mid]==a[mid-1]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }


//  }
//  return start;


// } 


// int main(){

//     vector <int> a={3,3,7,7,10,11,11};
    
//     cout<<"the single elem in the sorted array is "<<singleelement(a)<<endl;




//     return 0;
// }