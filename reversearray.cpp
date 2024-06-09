#include<bits/stdc++.h>
using namespace std;
int reverse(int a[] , int size){
    int start=0;
    int end= size-1;
    while(start<=end){
    swap(a[start] , a[end]);
    start++;
    end--;
}
}
int print(int a[] , int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int ab[6]={1,2,3,4,5,6};
    reverse(ab,6);
   print(ab,6);
   return 0;
}