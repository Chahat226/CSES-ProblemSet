#include <iostream>

using namespace std;

int main()
{
    long long n; cin >> n;
	long long a[n];
	for (long long i = 0; i < n; i++)cin >> a[i];
	long long c = 0;
	for (long long i = 1; i < n; i++)
	{
		if (a[i - 1] <= a[i])continue;
		else
		{
			c += (a[i - 1] - a[i]);
			a[i] += (a[i - 1] - a[i]);
		}
	}
	cout << c << endl;
    return 0;
}
