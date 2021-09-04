#include<stdio.h>

void rev(int arr[],int beg,int last){
    int temp;
    while(beg<last){
        temp=arr[last];
        arr[last]=arr[beg];
        arr[beg]=temp;
        beg++;
        last--;
    }
}

void printArr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3};
    int arr_size=3;
    printArr(arr,arr_size);
    printf("\n");
    rev(arr,0,arr_size-1);
    printArr(arr,arr_size);
    return 0;
}