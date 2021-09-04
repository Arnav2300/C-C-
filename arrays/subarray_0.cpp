#include<bits/stdc++.h>
using namespace std;

int sub(int arr[],int n){
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        s.insert(sum);
        sum+=arr[i];        
        if(s.find(sum)!=s.end()){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[] = { -3,3, 1, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sub(arr,n);
    return 0;
}