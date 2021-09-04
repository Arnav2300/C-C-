#include<bits/stdc++.h>
using namespace std;

void nextPerm(vector<int>nums){
    int len=nums.size(),l,k;
    for(k=len-2;k>=0;k--){
        if(nums[k]<nums[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(l=len-1;l>k;l--){
            if(nums[l]>nums[k]){
                break;
            }
        }
        swap(nums[l],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
    }
    for(int i=0;i<len;i++){
        cout<<nums[i]<<" ";
    }

}

int  main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    nextPerm(v);
}