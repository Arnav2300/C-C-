#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
        return 1;
    string temp=s1+s2;
    cout<<temp.find(s2)!=string::npos;


}