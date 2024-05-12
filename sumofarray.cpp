#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sum=0;
    int size=sizeof(arr)/sizeof(arr[1]);
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"sum of the array:"<<" "<<sum;
    return 0;
}
