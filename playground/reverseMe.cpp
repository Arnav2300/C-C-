//https://www.codechef.com/CCSTART2/problems/REVMEE
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int e,i=0,t=n;
    while(n--){
        cin>>e;
        arr[i]=e;
        ++i;
    }
    for(i=t-1;i>=0;i--)
        cout<<arr[i]<<" ";

}