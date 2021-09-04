#include<iostream>
#include<vector>
using namespace std;

vector<int>inter(int a[],int b[],int c[],int n1,int n2,int n3){
    vector<int>v;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
            v.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j])
            i++;
        else if(b[j]<c[k])
            j++;
        else
            k++;

        int x=a[i-1];
        while(a[i]==x)
            i++;
        
        int y=b[j-1];
        while(b[j]==y)
            j++;
        
        int z=c[k-1];
        while(c[k]==z)
            k++;
    }
    if(v.size()==0)
        return {-1};
    
    return v;
}

int main(){
    vector<int>v;
    int a[10],b[10],c[10],n,i=0,j=0,k=0;
    while(cin>>n){
        a[i]=n;
        i++;
    }
    while(cin>>n){
        b[j]=n;
        j++;
    }
    while(cin>>n){
        c[k]=n;
        k++;
    }
    int n1=sizeof(a)/sizeof(a[0]),n2=sizeof(b)/sizeof(b[0]),n3=sizeof(c)/sizeof(c[0]);
    //call and print the function
    return 0;
}