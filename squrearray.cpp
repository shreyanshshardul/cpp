#include<bits/stdc++.h>
using namespace std;
void anst(vector<int>&v){
    vector<int>ans;
         int left=0;
         int right=v.size()-1;
         while(left<=right){
            if(abs (v[left]) < abs(v[right])){
                ans.push_back(v[right]*v[right]);
                right--;
            }
            else{
                ans.push_back(v[left]*v[left]);
                left++;
            }
         }
         reverse(ans.begin() , ans.end());
               for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
      }
         
}
int main(){
    vector<int>v;
    vector<int>ans;
    int n,ele;
    cout<<"enter size :";
    cin>>n;
    cout<<"enter elements :";
    for(int i=0;i<n;i++){
        cin>>ele;
        v.push_back(ele);
    }
      anst(v);
      
      return 0;
}