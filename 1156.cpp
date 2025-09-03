#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,s;
        cin>>n>>a;
        s=sqrt(n);
        cout<<a*s<<endl;
    }
    return 0;
}