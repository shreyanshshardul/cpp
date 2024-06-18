#include<bits/stdc++.h>
using namespace std;
bool search(int arr[] , int size , int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int key;
    int ab[5]={1,2,3,4,5};
    cout<<"enter element you want to found in the array"<<endl;
    cin>>key;
     bool found = search(ab,5,key);
     if(found){
        cout<<"found";
     }
     else{
        cout<<"not found";
     }
    return 0;
}