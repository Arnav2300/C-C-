//https://www.codechef.com/LRNDSA02/problems/ZCO12001
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int depth=0,pos=0,max_depth=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            depth++;
        if(arr[i]==2)
            depth--;
        if(depth<0)
            return 0;        
        if(max_depth<depth){
            max_depth=depth;
            pos=i+1;
        }            
    }
    int len=0,max_len=0,cnt=0,pos_len=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            cnt++;
        if(arr[i]==2)
            cnt--;
        len++;
        if(cnt==0){
            if(max_len<len){
                max_len=len;
                pos_len=i-max_len+1;
            }
            len=0;
        }
    }
    cout<<max_depth<<" "<<pos<<" "<<max_len<<" "<<pos_len+1;
    return 0;
}
