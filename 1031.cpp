#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x,b=0,c=0,d=0;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        x=n/2;
        a[x]=1;
        for (int i = 0; i < n-1; i++)
        {
            c+=(abs(a[i]-a[i+1]));
        }
        a[x]=k;
        for (int i = 0; i < n-1; i++)
        {
            d+=(abs(a[i]-a[i+1]));
        }
        cout<<max(c,d)<<endl;
        
    }
    return 0;
}