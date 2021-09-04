#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long,long long> &a, pair<long long,long long> &b){
	return a.second < b.second;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<long long,long long>>v;
    int n;
    cin>>n;
    int temp=n;
    while(temp--){
        int inp1,inp2;
        cin>>inp1>>inp2;
        v.push_back(make_pair(inp1,inp2));
    }
    int cnt=1,j=0;
    sort(v.begin(),v.end(),comp);
    for(int i=1;i<n;i++){
        if(v[j].second<=v[i].first){
            cnt++;
            j=i;  //previous = next if you can watch movie
        }
    }
    cout<<cnt<<"\n";
}