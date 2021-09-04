#include<iostream>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
        // code here
        int mx,mn;
        mx=mn=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>mx)
                mx=arr[i];
            if(arr[i]<mn)
                mn=arr[i];
        }
        int diff=(mx-k)-(mn+k);
        return diff;
}

int main(){
    int arr[]={2,6,3,4,7,2,10,3,2,1};
    cout<<getMinDiff(arr,10,5);
    return 0;
}