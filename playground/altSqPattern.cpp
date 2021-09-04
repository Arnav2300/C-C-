//https://www.codechef.com/CCSTART2/problems/SQALPAT
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int n;
    cin>>n;
    int arr[n][5],k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=k;
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<5;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
        else{
            for(int j=4;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}