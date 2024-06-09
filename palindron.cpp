#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,r,u=0;
    cout<<"enter no"<<" ";
    cin>>n;
    t==n;
    while(n!=0){
        r=n%10;
        u=u*10+r*r*r;
        n=n/10;
    }
    if(t==u){
        cout<<"palindron";
    }
    else{
        cout<<"not a palindron";
    }
    return 0;
}