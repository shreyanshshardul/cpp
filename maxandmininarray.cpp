#include<bits/stdc++.h>
using namespace std;
int getmax(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
     return max;
}

int getmin(int a[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
             min=a[i];
            
        }
    }
    return min;
}
int main(){
    int a[100];
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<(getmin(a,n))<<" "<<(getmax(a,n));
    return 0;
}

