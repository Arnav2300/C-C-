#include<iostream>
using namespace std;
int main(){
    int t,n,cnt=0;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        for(int c=1;c<=n;c++){
            for(int b=c;c<=n;b=b+c){
                for(int a=b+c;a<=n;a=a+b){
                    if(a%b==c && b%c==0)
                        cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}