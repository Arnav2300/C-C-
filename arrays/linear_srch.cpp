#include<iostream>
using namespace std;

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
        int linSrch(int key);
        void display();
        void insert(int pos,int elem);
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
int Array::linSrch(int key){
    for(int i=0;i<length;i++){
        if(key==A[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    Array arr;
    arr.insert(0,8);
    arr.insert(1,56);
    arr.insert(2,89);
    arr.display();
    cout<<"\n"<<arr.linSrch(89);
    return 0;
}