#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[]={1,1,2,2,3,3,4};
    int n=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                ar[i]=ar[j]=-1;
    }
    }
    }
    for(int i=0;i<n;i++){
        if(ar[i]>0){
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}