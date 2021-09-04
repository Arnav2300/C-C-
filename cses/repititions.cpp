#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
    string s;
    cin>>s;
    int cnt=0,ans=0;
    char match='A';
    for(char a:s){
        if(a==match){
            cnt++;
            ans=max(cnt,ans);
        }
        else{
            match=a;
            cnt=1;
        }
    }
    cout<<ans;
    return 0;
}