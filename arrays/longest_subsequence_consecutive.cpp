#include<bits/stdc++.h>
using namespace std;

int subseq(int arr[],int n){
    unordered_set<int>s;
    int ans=0;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);

    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            int j=arr[i];
            while(s.find(j)!=s.end())
                j++;
            ans=max(ans,j-arr[i]);
        }
    }
    return ans;
}

int main(){
    int arr[] = { 1, 2, 2,4, 3 };
    int n = sizeof arr / sizeof arr[0];
    cout<<subseq(arr,n);
    return 0;
}