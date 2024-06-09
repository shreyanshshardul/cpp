#include<bits/stdc++.h>
using namespace std;
int alternate(int a[] , int size){
    for(int i=0;i<size;i+=2){
          if(i+1<size){
            swap(a[i] , a[i+1] );
          }
    }
}

int print(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[8]={1,2,3,4,5,6,7,8};
    cout<<"function"<<endl;
    alternate(a, 8);

    print(a,8);
    return 0;
}