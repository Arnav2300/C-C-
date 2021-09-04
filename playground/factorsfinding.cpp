//https://www.codechef.com/CCSTART2/problems/DIFACTRS
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n;
    cin>>n;
    long long int cnt=0;
    vector<long long int>v;
    for(long long int i=1;i<n+1;i++){
        if(n%i==0){
            cnt++;
            v.push_back(i);
        }
    }
    cout<<cnt<<"\n";
    for(auto x:v)
        cout<<x<<" ";
    return 0;


}