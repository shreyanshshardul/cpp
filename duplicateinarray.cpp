#include<bits/stdc++.h>
using namespace std;
int duplicate(int a[] ,  int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<=size;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
            }
        }
    }
}
int main(){
    int a[6]={1,2,2,1,4,6};
    duplicate(a,6);
    return 0;
}