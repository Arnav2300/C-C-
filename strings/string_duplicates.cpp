#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    unordered_map<char,int>umap;
    for(int i=0;i<s.length();i++){
        umap[s[i]]++;
    }
    for(auto x:umap){
        if(x.second>1)
            cout<<x.first<<": "<<x.second<<"\n";
    }
    return 0;
}
