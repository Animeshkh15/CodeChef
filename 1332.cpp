#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int distinct = 0;
		string s;
		cin >> s;
		int freq[256] = {0};
		for (int i = 0; i < s.length(); i++)
		{
			if (freq[s[i]] == 0)
			{
				distinct++;
			}
			freq[s[i]]++;
		}
		if (distinct == 2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}