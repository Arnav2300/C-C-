#include<bits/stdc++.h>
using namespace std;

int getPair(int arr[],int n,int sum){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    
    int count=0;
    for(int i=0;i<n;i++){
        count+=m[sum-arr[i]];
        if(sum-arr[i]==arr[i])
            count--;
    }
    return count/2;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int num,i=0,arr[n];
    while(cin>>num){
        arr[i]=num;
        i++;
    }
    cout<<getPair(arr,n,k);

}