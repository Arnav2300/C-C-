#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1],a;
    for(int i=1;i<=n;i++){
        cin>>a;
        arr[a]=i;
    }
    int cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1])
            cnt++;
    }
    cout<<cnt;
    return 0;
}