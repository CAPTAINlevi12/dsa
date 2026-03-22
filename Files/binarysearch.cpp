// binary search over sorted array-----------------------------

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thebinarysearch(vector <int> a,int target){

    int n=a.size();

    int start=0;
    int end=n-1;

    while(start<=end){

      
        int mid=(start+end)/2;
          if(a[mid]==target)
          {
            return mid;
          }


        if(target>a[mid]){
            start=mid+1;
            
        }
        else if(target<a[mid]){
            end=mid-1;
        }
    }
  
  
    
    return -1;
    



}
    int main(){
        
        
        
        int target;
    
        cout<<"enter the target to be searched"<<endl;
        cin>>target;
int n;
cout<<"enter the size of the array"<<endl;
cin>>n;
vector<int> a(n);

        cout<<"enter the array"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


       sort(a.begin(), a.end());

       cout<<"the target is at the index"<<thebinarysearch(a,target)<<endl;



     return 0;
    }