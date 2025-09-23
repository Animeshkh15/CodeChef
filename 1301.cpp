#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0; 
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for (int i = 1; i < n; i++)
        {
            if(a[i]!=a[i-1]){
                count++;
            }
        }
        cout<<count+1<<endl; 
    }
    return 0;
}