#include<bits/stdc++.h>
using namespace std;
void swap(int &x , int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    cout<<"enter two number for swapping"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;

}
