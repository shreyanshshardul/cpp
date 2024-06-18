#include<bits/stdc++.h>
using namespace std;
int pairsum(int a[] , int size){
    int sum;
    for(int i=0;i<size;i+=2){
        if(a[i]<size){
        sum =a[i] + a[i+1];
        cout<<"pair of sum " <<sum<<endl;
    }}
}
int main(){
    int a[5]={1,2,3,4,5};
    pairsum(a,5);
    return 0;
}