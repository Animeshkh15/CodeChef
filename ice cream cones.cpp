#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, melt = 0;
        cin >> x >> y >> n;
        melt = x - (y * n);
        if (melt < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << melt << endl;
        }
    }
}