#include<iostream>
using namespace std;

int maxProd(int arr[],int n){
    int minV=arr[0],maxV=arr[0];
    int maxPro=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<0)
            swap(minV,maxV);

        maxV=max(arr[i],maxV*arr[i]);
        minV=min(arr[i],minV*arr[i]);
        
        maxPro=max(maxPro,maxV);
    }
    return maxPro;
}

int main(){
    int arr[] = { -1, -3, -10, 0, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxProd(arr,n);
    return 0;
}