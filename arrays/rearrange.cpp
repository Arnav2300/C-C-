#include<iostream>
using namespace std;

/*
    we want negative elements to be on left side.
*/

void rearrange(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        if(arr[left]<0&&arr[right]<0)
            left++;
        else if(arr[left]>0&&arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        else if(arr[left]>0&&arr[right]>0){
            right--;
        }
        else{
            left++;
            right--;
        }
    }
}

int main(){
    int arr[]={1,4,23,3,-5,9,-6,-8,-6,-3};
    int n=10;
    rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}