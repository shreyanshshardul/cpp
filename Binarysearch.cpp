#include<bits/stdc++.h>
using namespace std;
int Binar(int arr[] , int size , int target){
        int start=0;
        int end=size-1;
        int mid=(start+end)/2;
        while(start<=end){
           if(arr[mid]==target){
            return mid;
           }
           if(target>mid){
            start= mid+1;
           }
           else{
            end=mid-1;
           }
           mid=(start+end)/2; 
        }
        return -1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int ans=Binar(arr , 6 , 4);
    cout<<"index of 4 is:"<<ans;
    return 0;
}