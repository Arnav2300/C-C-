#include<iostream>
using namespace std;

typedef unsigned long int uld;

uld invention(int arr[],uld n,uld p,uld k){
    uld cnt=0,j=0;
    int inv;
    if(p<n && p>=0)
        inv=arr[p];
    else
        return -1;
    //cout<<inv;
    while(j<k){
        for(uld i=0;i<n;i++){
            if(arr[i]%k==j){
                cnt++;
                if(inv==arr[i]){
                    i=n;                    
                    j=k;       
                }
            }
        }
        j++;
    }
    return cnt;   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        uld p=0,k=0,n=0;
        cin>>n>>p>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i;
        }
        cout<<invention(arr,n,p,k)<<"\n";
    }
    return 0;
}