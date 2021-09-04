//https://www.codechef.com/LRNDSA01/problems/LADDU
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int act,bug,con,pts=0;
        string str,ind;
        cin>>act>>ind;
        while(act--){
            cin>>str;
            if(str=="CONTEST_WON"){
                cin>>con;
                pts+=300+20-con;
            }
            else if(str=="TOP_CONTRIBUTOR")
                pts+=300;
            else if(str=="BUG_FOUND"){
                cin>>bug;
                pts+=bug;
            }
            else
                pts+=50;
        }
        if(ind=="INDIAN")
            cout<<pts/200<<"\n";
        else
            cout<<pts/400<<"\n";
    }
    return 0;
}
