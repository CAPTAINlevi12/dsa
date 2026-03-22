// #include <iostream>
// #include <vector>
// using namespace std;

// int rotatedarray(vector <int> a,int target){
//     int n= a.size();

    
//     int start=0;
//    int  end=n-1;

//    while(start<=end){

//  int mid=(start+end)/2;
//  if(a[mid]==target){
//     return mid;
//  }
 
//  else if(target>=a[mid]&& target<=a[end]){
//     start=mid+1;
// }
// else{
//    end=mid-1;
// }
//    }{
//    return -1 ;
// }
// }

// int main(){
//  vector <int>a={3,4,5,0,1,2};
//  cout<<"the provided target is at the index"<<rotatedarray(a,1)<<endl;



//     return 0;
// }