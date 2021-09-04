#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    unordered_map<char,int>umap;
    for(char d:s){
        umap[d]++;
    }
    int odd=0;
    char oddChar;
    for(auto d:umap){
        if(d.second%2!=0){
            odd++;
            oddChar=d.first;
        }
    }
    if(odd>1||odd==1 && s.length()%2==0){
        return 0;
    }
    
    string first="",second="";
    for(auto d:umap){
        string str(d.second/2,d.first);
        first=first+str;
        second=str+second;
    }
    string ans=(odd==1)?(first+oddChar+second):(first+second);
    cout<<ans;
    return 0;
}