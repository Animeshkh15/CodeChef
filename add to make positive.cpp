#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,a=0,k=0;
		cin>>n;
		for (int i = 0; i < n; i++)
		{
			cin>>k;
			a+=k;
		}
		if(a<0){
			cout<<ceil(abs(a/n))<<endl;
		}
		else if(a>=0){
			cout<<"0"<<endl;
		}
	}
	return 0;
}