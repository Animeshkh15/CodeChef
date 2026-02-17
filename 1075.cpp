#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, coins = 1, height = 0;
        cin >> n;
        for (int i = 2; coins <= n; i++)
        {
            coins = (i * (i + 1)) / 2;
            height++;
        }
        cout << height << endl;
    }
}