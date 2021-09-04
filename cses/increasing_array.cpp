#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
    int n;
    long long x,mxVal=0,ans=0;
    cin>>n;
    while(n--){
        cin>>x;
        mxVal=max(x,mxVal);
        ans+=mxVal-x;
    }
    cout<<ans;
}