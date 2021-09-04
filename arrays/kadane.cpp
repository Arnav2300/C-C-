/*
    look at each index and find the subarray with max sum till it.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,-1,-10,4,5};
    int n=6,max_curr,max_global;
    max_curr=max_global=arr[0];
    for(int i=1;i<n;i++){
        max_curr=max(arr[i],max_curr+arr[i]); 
        if(max_curr>max_global)
            max_global=max_curr; 
    }
    cout<<max_global;
    return 0;
}
