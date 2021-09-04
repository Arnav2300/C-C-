#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,cnt=0;
    cin>>n;
    for(long long int i=5;n/i>=1;i*=5)
        cnt+=n/i;

    cout<<cnt;
    return 0;

}