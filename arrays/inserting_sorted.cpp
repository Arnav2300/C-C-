#include<iostream>
using namespace std;

class Array{
    private:
        int size;
        int length;int *A;
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
        void insert_sorted(int elem);
};
void Array::insert(int pos,int elem){
    if(pos>=0&&pos<=length){
        for(int i=length-1;i>pos;i--)
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
void Array::insert_sorted(int elem){
    int i=length-1;
    while(A[i]>elem){
        A[i+1]=A[i];
        i--;
    }
    A[i+1]=elem;
    length++;
}

int main(){
    Array arr;
    arr.insert(0,34);
    arr.insert(1,44);
    arr.insert(2,56);
    arr.display();
    cout<<"\n";
    arr.insert_sorted(39);
    arr.display();
    
    return 0;
}