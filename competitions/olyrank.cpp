//codechef
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int g1,g2,s1,s2,b1,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        if((g1+s1+b1)>(g2+s2+b2))
            cout<<1<<"\n";
        else
            cout<<2<<"\n";
        
    }
    return 0;
}