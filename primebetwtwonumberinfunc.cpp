#include<bits/stdc++.h>
using namespace std;
int prime(int num){
   for(int i=2;i<num;i++){
    if(num%i==0){
        return false;
    }
    
    else {
        return true;
    }
   }
   }

   int main(){
    int x,y;
    cout<<"enter no";
    cin>>x>>y;
    for(int i=x;i<y;i++){
        if (prime(i))
    cout<<i;
    }
return 0;
}
