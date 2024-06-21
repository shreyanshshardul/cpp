#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(6);
    int occurance=0;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
        }
    int x;
  //cout<<"enter element you want to find the occurance"<<" ";
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x){
           occurance++;
        }
}
cout<<occurance;
return 0;
}