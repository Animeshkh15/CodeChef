#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll lower = (x + 2) / 3;
        ll upper = (n + x) / 4;
        if (lower <= upper)
        {
            ll a = lower;
            ll b = 3 * a - x;
            ll c = n - a - b;
            if (a >= 0 && b >= 0 && c >= 0)
            {
                cout << "yes" << endl
                     << a << " " << b << " " << c << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            cout << "no" << endl;
        }
    }
}