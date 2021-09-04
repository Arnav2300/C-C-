//https://www.codechef.com/CCSTART2/problems/ADDNATRL
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,s=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
        s+=i;
    cout<<s;
    return 0;
}