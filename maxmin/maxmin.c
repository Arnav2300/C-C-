#include <stdio.h>
struct ans{
  int min;
  int max;
};
struct ans getMinMax(int arr[],int beg,int last){
    struct ans minmax;
    if(beg==last){
        minmax.min=arr[beg];
        minmax.max=arr[last];
        return minmax;
    }
    if(last==beg+1){
        if(arr[last]>arr[beg]){
            minmax.min=arr[beg];
            minmax.max=arr[last];
            return minmax;
        }
        else{
            minmax.min=arr[last];
            minmax.max=arr[beg];
            return minmax;   
        }
    }
    //dividing array into 2 parts
    
    int mid=(beg+last)/2;
    struct ans minmax_left=getMinMax(arr,beg,mid);
    struct ans minmax_right=getMinMax(arr,mid+1,last);
    
    if(minmax_right.min<minmax_left.min)
        minmax.min=minmax_right.min;
    else
        minmax.min=minmax_left.min;
        
    if(minmax_right.max>minmax_left.max)
        minmax.max=minmax_right.max;
    else
        minmax.max=minmax_left.max;

    return minmax;
}

int main() {
	//code
	int arr[]={5,8,99,1,0,78};
	int arr_size=6;
	struct ans getAns=getMinMax(arr,0,arr_size-1);
	printf("%d",getAns.min);
	printf("%d",getAns.max);
	return 0;
}