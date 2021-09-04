#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(){
            size=10;
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
        void insert(int pos,int num);
        void display();
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

int main(){
    //cout<<"hello";
    Array arr(2);
    arr.insert(0,19);
    arr.insert(1,7);
    arr.display();
    return 0;
}