#include<iostream>
using namespace std;

void mergeArray(int arr1[],int arr2[],int s1,int s2, int arr3[]){
    int i=0,j=0,k=0;
    while(i<s1 && j<s2){
        if(arr1[i]<=arr2[j])
            arr3[k++]=arr1[i++];
        else if(arr1[i]>=arr2[j])
            arr3[k++]=arr2[j++];


    }
    while(i<s1){
        arr3[k++]=arr1[i++];
    }
    while(j<s2){
        arr3[k++]=arr2[j++];
    }

}

int main(){
    int arr1[]={1,2,3,4,5,6,7};
    int n1=7,n2=4;
    int arr2[]={6,7,8,9};
    int arr3[n1+n2];
    mergeArray(arr1,arr2,n1,n2,arr3);
    for(auto i:arr3)
        cout<<arr3[i]<<" ";

    return 0;

}