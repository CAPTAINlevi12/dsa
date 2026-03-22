#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



     void mrgarr(int  a[],int b[],int m,int n){
        int i=m-1;
        int j=n-1;

        int index=(m+n)-1;

        while(i>=0&&j>=0){
            if(a[i]>b[j]){

               a[index]=a[i];
               i--;
               index--;
            }
            else {
                a[index]=b[j];
                index--;
                j--;

            }
            
    
            
        }
           while(j>=0){
                a[index]=b[j];
                index--;
                j--;
            }
           

            return ;
     }
    

     int main(){
        
        
     
    


        int a[6]={1,2,3,0,0,0};
        int b[3]={2,5,6};
       
mrgarr(a,b,3,3);

for(int i=0;i<6;i++){

    cout<<"the merge sorted array is"<<a[i]<<endl;
}




        return 0;
     }



     
