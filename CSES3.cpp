#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int c = 1, curr = 1;
	for (size_t i = 1; i < s.size(); i++)
	{
		if (s[i] == s[i - 1])curr++;
		else
		{c = max(c, curr); curr = 1;}
	}

	cout << max(c, curr) << "\n";
}
