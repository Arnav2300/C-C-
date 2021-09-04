//https://www.codechef.com/CCSTART2/problems/ISBOTH
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%5==0 && n%11==0)
        cout<<"BOTH";
    else if(n%5==0 || n%11==0)
        cout<<"ONE";
    else
        cout<<"NONE";
    return 0;
}