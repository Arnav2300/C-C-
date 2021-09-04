//https://www.codechef.com/LRNDSA01/problems/CARVANS
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin>>n;
    while(n--){
        cin>>t;
        int cnt=1,a,rest;
        cin>>a;
        while(--t){
            cin>>rest;
            if(rest<=a){
                cnt++;
                a=rest;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}