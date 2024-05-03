#include<bits/stdc++.h>
using namespace std;
bool odd(int num){
    if ( num % 2 ==0){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int a,b;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (odd(i))
        {
            cout<<i;
        }
    }
    return 0;
}