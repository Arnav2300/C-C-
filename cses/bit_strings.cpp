#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,ans=1;
    cin>>n;
    for(long long int i=0;i<n;i++)
        ans=(ans*2)%mod;
            
    cout<<ans;
    return 0;
}