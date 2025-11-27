#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        int c=0,d=0,e=0;
        cin>>a>>b;
        for (int i = 0; i < a.length(); i++)
        {
            if(a[i]=='b'&&b[i]=='o'){
                e++;
            }
            else if (a[i]=='b')
            {
                c++;
            }
            else if(a[i]=='o'){
                d++;
            }
            else if(b[i]=='b'){
                c++;
            }
            else if(b[i]=='o')
            {
                d++;
            }
            
        }
        if (e==3)
        {
            cout<<"yes"<<endl;
        }
        
        else if(c>=2&&d>=1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}