#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int beg=0,last=n-1;
    while(beg<=last){
        
        if(last==beg){
            cout<<arr[beg]<<" "<<0<<"\n";
        }
        else
            cout<<arr[last]<<" "<<arr[beg]<<"\n";
        ++beg;--last;
            
            
    }
    return 0;
}