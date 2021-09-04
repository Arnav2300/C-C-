#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    //int arr[n];
    /* for(long long i=0;i<n;i++){
        arr[i]=i+1;
        //cout<<arr[i]<<" ";
    } */

    string str="";
    if(n<=3 && n>1){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(long long i=1;i<=n;i++){
        if(i%2==0)
            cout<<i<<" ";
        else
            str+=to_string(i)+" ";
    }
    cout<<str;

    return 0;
}