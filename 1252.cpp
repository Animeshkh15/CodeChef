#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string m;
    cin>>t>>m;
    while (t--)
    {
        string s;
        cin>>s;
        string ans= "";
        for(char c:s){
            if (c == '_')
            {
                ans+=" ";
            }
            else if (c>='a'&&c<='z')
            {
                ans += m[c-'a'];
            }
            else if (c>='A'&&c<='Z')
            {
                    char mapped = m[c-'A'];
                    ans+= toupper(mapped);
            }
            else
            {
                ans += c;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}