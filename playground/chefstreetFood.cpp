//https://www.codechef.com/LRNDSA02/problems/STFOOD
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,i=0;
    vector<int>ans;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            int s,p,v;
            cin>>s>>p>>v;
            p=p/(s+1);
            ans.push_back(p*v);
        }
        sort(ans.begin(),ans.end());
        cout<<ans[ans.size()-1]<<"\n";
        ans.clear();
    }
    return 0;
}
