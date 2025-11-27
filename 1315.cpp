#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,x,k=0,l=0;
        cin>>n>>m;
        k=(n*(n+1))/2;
        for (int i = 0; i <= m-1; i++)
        {
            cin>>x;
            l+=x;
        }
        cout<<k-l<<endl;
    }
    return 0;
}   