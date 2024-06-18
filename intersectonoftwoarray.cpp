#include<bits/stdc++.h>
using namespace std;
int intersection(int a1[], int a2[] , int n , int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(a1[i]==a2[j]){
              cout<<a1[i]<<" ";
           }
        }
    }
}
int main(){
    int a1[5]={1,2,3,4,5};
    int a2[5]={1,2,3,6,7};
    intersection(a1, a2 , 5 , 5 );
    return 0;
}