#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>str;
    do{
        str.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<str.size()<<"\n";
    for(string i:str)
        cout<<i<<"\n";

    return 0;

}