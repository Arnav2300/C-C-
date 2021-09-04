//https://www.codechef.com/LRNDSA02/problems/STUPMACH
#include<iostream>
using lld=long long int;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        lld sum=0,a,s=INT32_MAX;
        cin>>n;
        while(n--){
            cin>>a;
            s=min(s,a);
            sum+=s;
        }
        cout<<sum<<"\n";

    }
    return 0;
}
