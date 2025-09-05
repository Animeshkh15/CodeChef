#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x,c=0;
        cin>>n>>x>>k;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(std::abs(a[i]-b[i])<=k){
                c++;
            }    
        }
        if (c>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}