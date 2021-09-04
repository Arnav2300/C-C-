//https://www.codechef.com/CCSTART2/problems/VALTRI
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n%6==0 || n%5==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}