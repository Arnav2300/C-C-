#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,g;
    cin>>t>>g;
    while(t--){
        int i,n,q;
        cin>>i>>n>>q;
        if(n%2==0)
            cout<<n/2<<"\n";
        else{
            if(i==1){
                cout<<(n-1)/2<<"\n";
            }
            else
                cout<<(n-1)/2<<"\n";
        }
    }
    return 0;
}
