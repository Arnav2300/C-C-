#include<iostream>
using namespace std;

void alter_rearrange(int arr[],int n){
    int first=0,sec=first+1;
    while(sec<n){
        if(arr[first]<0){
            first++;sec++;
        }
        else if(arr[first]>0 && arr[sec]<0){
            swap(arr[first],arr[sec])
        }
        
    }
}

int main(){
    int arr[]={-5,-2,5,2,4,7,1,8,0,-8 };
    int n=sizeof(arr)/sizeof(arr[0]);
    alter_rearrange(arr,n);
    return 0;
}