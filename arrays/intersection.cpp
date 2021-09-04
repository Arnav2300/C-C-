#include<iostream>
#include<vector>
using namespace std;

void intersection(int arr1[],int arr2[],int length1,int length2,int arr3[]){
    int i=0,j=0,k=0;
    while(i<length1 && j<length2){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i++];
            j++;
        }
    }    
}



int main(){
    int arr1[]={3,6,2,13,4,0,9};
    int length1=7,length2=3;
    int arr2[]={5,2,9};
    int arr3[2];
    vector<int>v;
    intersection(arr1,arr2,length1,length2,arr3);

    for(int i=0;i<2;i++){
        
        cout<<arr3[i]<<" ";
        
    }
    return 0;
    
}