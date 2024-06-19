#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        v.push_back(i);
        cin>>v[i];
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}