#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    if(((n*(n+1))/2)%2==0){
        cout<<"YES\n";
        long long tot=(n*(n+1)/2)/2;
        vector<long long>v1,v2;
        while(n){
            if(tot-n>=0){
                v1.push_back(n);
                tot-=n;
            }
            else
                v2.push_back(n);
            n--;
        }
        cout<<v1.size()<<"\n";
        for(long long i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<"\n";
        cout<<v2.size()<<"\n";
        for(long long i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";

    }
    else
        cout<<"NO";
    return 0;
    
} 
/*
    7
    sum=14
    3
    7 4 3
    4
    6 5 2 1

    8

    4
    8 5 4 1
    4
    7 6 3 2
*/