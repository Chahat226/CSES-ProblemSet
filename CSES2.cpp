#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=1;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    for(long long int i=1;i<=n;i++)
        if(i==a[i])
        continue;
        else
         cout<<a[i]-1;
    return 0;
}
