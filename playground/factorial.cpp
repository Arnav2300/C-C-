//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include<iostream>
using lld=long long int;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    lld n;
    cin>>n;
    while(n--){
        lld a,cnt=0;
        cin>>a;
        for(lld i=5;a/i>=1;i*=5){
            cnt+=a/i;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}