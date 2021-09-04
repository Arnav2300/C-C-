//codechef
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        unordered_map<int,int>umap;
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];            
            if(umap.find(arr[i])!=umap.end())
                umap.at(arr[i])+=1;
            else
                umap.insert({arr[i],1});
        }

        if(umap.size()==1){
            cout<<0<<"\n";
        }
        else if(umap.size()==2){
            if(umap.at(arr[0])>2 || umap.at(arr[1])>2)
                cout<<1<<"\n";
            else
                cout<<2<<"\n";
        }
        else if(umap.size()==3){
            cout<<2<<"\n";
        }
        else{
            cout<<2<<"\n";
        }

    }
    return 0;
}