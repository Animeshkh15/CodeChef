#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,temp=0;
        cin>>n;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin>>w[i];
        }
        sort(w,w+n,greater<int>());
        for (int i = 0; i < n; i++)
        {
            if ((w[i]*(i+1))>temp)
            {
                temp=(w[i]*(i+1));
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}