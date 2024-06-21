#include<bits/stdc++.h>
using namespace std;
int  main(){
    int a[]={10 ,20, 30};
    int size;
    size=(sizeof(a)/sizeof(a[0]));
      //converting into vector
      vector<int>v(a,a+size);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
        cout<<endl;
         return 0;
         }