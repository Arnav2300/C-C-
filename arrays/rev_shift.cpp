#include<iostream>
using namespace std;

class Array{
    private:
        int size;
        int length;
        int *A;
        void swapVal(int *x,int *y);
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
        void reverse();
        void reverse2();
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
void Array::reverse(){
    int *b;
    b=(int *)malloc(length*sizeof(int));
    for(int i=0,j=length-1;j>=0;i++,j--){
        b[i]=A[j];
    }
    for(int i=0;i<length;i++){
        A[i]=b[i];
    }

}
void Array::reverse2(){
    for(int i=0,j=length-1;i<j;i++,j--){
        swapVal(&A[i],&A[j]);
    }
}
void Array::swapVal(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    Array arr;
    arr.insert(0,8);
    arr.insert(1,56);
    arr.insert(2,89);
    arr.display();
    arr.reverse();
    cout<<"\n";
    arr.display();
    arr.reverse2();
    cout<<"\n";
    arr.display();
    
    return 0;
}