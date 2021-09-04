#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>v){
    int minPrice=INT_MAX,maxPro=0;
    for(int i=0;i<v.size();i++){
        minPrice=min(minPrice,v[i]);
        maxPro=max(maxPro,v[i]-minPrice);
    }
    return maxPro;
}

int main(){
    vector<int>v;
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    cout<<maxProfit(v);
    return 0;
}