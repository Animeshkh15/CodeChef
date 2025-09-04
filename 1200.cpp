#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,temp,ans=-1,mn;
        cin>>n>>k;
        for(ll i=0;i<n;i++){
            cin>>temp;
            if(k%temp==0){
                if(ans==-1){
                    ans=temp;
                    mn=k/temp;
                }else{
                    if(k/temp<mn)ans=temp;
                }
                
            }
        }
        
        cout<<ans<<endl;
    }
    
}