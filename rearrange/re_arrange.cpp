#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
                swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={-2,-15,-6,-10,-9,0,5,6};
    int arr_size=8;
    for(int i=0;i<arr_size;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}