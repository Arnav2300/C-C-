#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a<b)
            swap(a,b);
        if(a>2*b){
            cout<<"NO\n";
        }
        else if((a+b)%3==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}