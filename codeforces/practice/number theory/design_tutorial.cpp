//https://codeforces.com/problemset/problem/472/A
#include<iostream>
using namespace std;

/* bool prime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
} */

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%2==0)
        cout<<"4"<<" "<<n-4;
    else
        cout<<"9"<<" "<<n-9;
    
    return 0;

}