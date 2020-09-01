#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n;
    cin>>n;
    long long int t;
    t=n*(n+1)/2;
    if(t&1)cout<<"NO";
    else{ cout<<"YES"<<endl;
    t/=2LL;
    vector<long long>a,b;
    while(n)
    {

        if(t-n>=0)
            {
            a.push_back(n);
            t-=n;
            }
        else
            {
               b.push_back(n);
            }
            n--;
    }
    cout<<a.size()<<endl;
    for(auto i : a)
        cout<<i<<" ";cout<<endl;
    cout<<b.size()<<endl;
    for(auto i :b)
        cout<<i<<" ";}
    return 0;
}
