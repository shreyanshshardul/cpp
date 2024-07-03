#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
       sort(v.begin() , v.end() , greater<int>());
       cout<<v[1];

        }
  