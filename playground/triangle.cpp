//https://www.codechef.com/CCSTART2/problems/TRIVALCH
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}