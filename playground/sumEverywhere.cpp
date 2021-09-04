//https://www.codechef.com/CCSTART2/problems/SUMEVOD
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    long long int s1=0,s2=0;
    for(int i=1;i<=2*n;i++){
        if(i%2==0)
            s1+=i;
        else
            s2+=i;
    }
    cout<<s2<<" "<<s1;
    return 0;
}