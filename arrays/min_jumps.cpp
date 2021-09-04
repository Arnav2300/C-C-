#include<iostream>
#include<algorithm>
using namespace std;
int minJumps(int arr[], int n){
    int pos=0,max_index=0,index=0,jump=1;
    if(arr[0]==0)
        return -1;
    else if(n==1)
        return 0;
    else{
        while(index<n){
            max_index=arr[index]+index;
            pos=max_element(arr+pos+1,arr+max_index)-(arr+pos+1);
            if(pos<n){
                if(arr[pos]==0)
                    return -1;
                else{
                    index=pos;
                    jump++;
                }
            }
            else
                return jump;
        }
    }
    return 0;
}

int main(){
    int ar[]={2,3,1,1,2,4,2,0,1,1};
    int n=10;
    cout<<minJumps(ar,n);
    return 0;
}