//https://www.codechef.com/CCSTART2/problems/FINDMELI
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,e;
    cin>>n>>e;
    int arr[n];
    bool ans=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(e==arr[i])
            ans=true;
    }
    if(ans)
        cout<<ans;
    else
        cout<<"-1";
    return 0;

}