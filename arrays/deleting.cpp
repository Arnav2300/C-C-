#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
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
        ~Array(){
            delete []A;
        }
        void display();
        void deleteElement(int pos);
        void insert(int pos,int num);
};

void Array::display(){
    for(int i=0;i<length;i++){
        cout<<A[i]<<" ";
    }
}

void Array::insert(int pos,int num){
    if(pos>=0&&pos<=length){
        for(int i=length;i>pos;i--)
            A[i]=A[i-1];
        A[pos]=num;
        length++;
        
    }
}

void Array::deleteElement(int pos){
    //int x=A[pos];
    for(int i=pos;i<length-1;i++){
        A[i]=A[i+1];
    }
    length--;
}

int main(){
    Array arr(4);
    arr.insert(0,8);
    arr.insert(1,78);
    arr.insert(2,5);
    arr.insert(3,66);
    arr.display();
    cout<<"\n";
    //indexing strts from 0
    arr.deleteElement(2);
    arr.display();
    return 0;

}