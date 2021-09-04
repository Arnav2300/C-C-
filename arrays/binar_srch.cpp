
#include<iostream>
using namespace std;
//array has to be sorted for binary search
class Array{
    private:
        int size;
        int length;
        int *A;
    public:
        Array(){
            size=0;
            A=new int[size];
            length=0;
        }
        Array(int s){
            size=s;
            A=new int[size];
            length=0;
        }
        void insert(int pos,int elem);
        void display();
        int binSrch(int key);
};

void Array::insert(int pos,int elem){
    if(pos>=0&&pos<=length){
        for(int i=length;i>pos;i--)
            A[i]=A[i-1];
        A[pos]=elem;
        length++;    
    }
}
void Array::display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}
int Array::binSrch(int key){
    int mid,low,high;
    low=0;
    high=length-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}

int main(){
    Array arr;
    arr.insert(0,7);
    arr.insert(1,23);
    arr.insert(2,45);
    arr.insert(3,56);
    arr.insert(4,78);
    cout<<arr.binSrch(56);
    return 0;
}