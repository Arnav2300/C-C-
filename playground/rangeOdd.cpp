//https://www.codechef.com/CCSTART2/problems/RNGEODD
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,gap=0;
    cin>>a>>b;
    if(a%2==0)
        gap=1;
    else
        gap=2;
    for(int i=a;i<=b;i+=gap){
        if(i%2!=0)
            cout<<i<<" ";
    }        
    return 0;

}