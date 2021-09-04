#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<long long int>v;
    for(int i=0;i<3;i++){
        long long int a;
        cin>>a;
        v.push_back(a);
    }        
    sort(v.begin(),v.end());
    cout<<v[v.size()-2];
    return 0;
    
    
    

}