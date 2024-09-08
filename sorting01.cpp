#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={0,1,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr , arr+n);
    vector<int>v2;
    int zeros=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            zeros++;
            }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeros){
           v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    for( int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    return 0;
}