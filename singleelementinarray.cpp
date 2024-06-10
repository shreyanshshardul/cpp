#include<bits/stdc++.h>
using namespace std;
int abc(int a[] , int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
}
cout<<ans<<" ";
}
        
int main(){
     int a[5]={1,1,2,2,3};
     abc(a,5);
     return 0;
}