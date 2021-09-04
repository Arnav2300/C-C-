//https://www.codechef.com/LRNDSA02/problems/COMPILER
#include<iostream>
using lld=long long int;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string str;
        lld cnt=0;
        cin>>str;
        lld i,ans=0;        
        for(i=0;i<str.length();i++){
            if(str[i]=='<')
                cnt++;
            else{ 
                cnt--;
                if(cnt<0)
                    break;
            }   
            if(cnt==0)
                ans=i+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
