#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ar[5][5]={{1,2,9,10,25},{4,3,8,11,24},{5,6,7,12,23},{16,15,14,13,22},{17,18,19,20,21}};
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        cout<<ar[x-1][y-1]<<"\n";
    }
    return 0;
}