//https://www.codechef.com/CCSTART2/problems/EXTRICHK
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);    
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && c+b>a){
        if(a==b && b==c)
            cout<<1;
        else if(a==b || b==c || a==c)
            cout<<2;
        else
            cout<<3;
    }
    else
        cout<<"-1";
    return 0;
}