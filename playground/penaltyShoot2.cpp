//https://www.codechef.com/LRNDSA02/problems/PSHOT
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,goalA=0,goalB=0,shotA=n,shotB=n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                goalA+=(str[i]-'0');
                shotA--;
            }
            else{
                goalB+=(str[i]-'0');
                shotB--;
            }
            if(goalA>goalB+shotB){
                cout<<i+1<<"\n";
                break;
            }
            else if(goalB>goalA+shotA){
                cout<<i+1<<"\n";
                break;
            }
            else if(goalA==goalB && i==2*n-1){
                cout<<i+1<<"\n";
                break;
            }
        }        
    }
    return 0;
}

