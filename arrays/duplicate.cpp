/*
    this algo finds 1 duplicate element in an array of n+1 elements, where elements are in an inclusive range of [1,n].

*/
#include<iostream>
#include<vector>
using namespace std;
int duplicate(vector<int> num){
    int slow=num[0];
    int fast=num[0];

    do{
        slow=num[slow];
        fast=num[num[fast]];
    }while(slow!=fast);
    fast=num[0];
    while(slow!=fast){
        slow=num[slow];
        fast=num[fast];
    }
    return slow;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);
    cout<<duplicate(v);

}