#include<iostream>
#include<cmath>
using namespace std;

int nextGap(int gap){
    if(gap<=1)
        return 0;
    return (gap/2)+(gap%2);     //return ceiling value 
}
void merge(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap); 
         gap > 0; gap = nextGap(gap)) 
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);

        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0; 
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

int main(){
    int a[]={1,5,9,15,20};
    int b[]={2,3,8,13};
    int m=5,n=4;
    merge(a,b,m,n);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}