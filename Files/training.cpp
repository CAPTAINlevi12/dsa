// #include <iostream>
// using namespace std;
// int main(){

// int i,j,k,m,n;
// n=4;

// for  (i=1;i<=n;i++){
//     for(j=1;j<=n-i;j++){
//         cout<<" ";}
//         for(k=1;k<=i;k++)
//         cout<<k;
    

    
// cout<<endl;
//     }
//     return 0;
// }

#include<iostream>

using namespace std;
int main(){

int i,j,k,n;
int h;
 int sum=4;




cout<<"enter the value you want to print"<<endl;
cin>>h;
for(i=1;i<=h;i++){
    
    for(j=1;j<=i-1;j++){
    cout<<" ";}
    int sum=h;

  for(k=h;k>i;k--){
    
    sum=sum-1;
cout<<sum;
  }
  cout<<endl;

}

return 0;
}