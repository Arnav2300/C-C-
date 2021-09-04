//https://www.codechef.com/CCSTART2/problems/ANGTRICH
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,s;
    cin>>a>>b>>c;
    s=a+b+c;
    if(s==180 && a>0 && b>0 && c>0)
        cout<<"YES";
    else
        cout<<"NO";

}