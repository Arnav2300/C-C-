#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);    
    long int n;
    cin>>n;
    long int sum=n*(n+1)/2;
    long int arr[n];
    for(long int i=0;i<n-1;i++){
        cin>>arr[i];
        sum=sum-arr[i];
    }
    cout<<sum;
    return 0;
}