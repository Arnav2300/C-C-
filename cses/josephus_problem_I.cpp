#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v;
    //push elements into vector
    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    while(v.size()>1){
        vector<int>leftover;
        //pretty straight fwd loop
        for(int i=0;i<v.size();i++){
            if(i%2==1){
                cout<<v[i]<<" ";
            }
            else
                leftover.push_back(v[i]);
        }
        //is the size is even then same as above happens 
        if(v.size()%2==0)
            v=leftover;
        //else we start with the last element in the vector. store it, then pop it from the 
        //leftover array, clear the initial array as all operations in first are being done on it
        //then push the last element that we stores in as first element
        //then push rest of the elements remaining in the leftover vector
        else{
            int beg=leftover.back();
            leftover.pop_back();
            v.clear();
            v.push_back(beg);
            for(int x:leftover)
                v.push_back(x);
        }
        
    }
    cout<<v[0];
    return 0;
}