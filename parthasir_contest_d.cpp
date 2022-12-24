#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    vector<ll> v;
    while (cin >> n)
    {
        v.push_back(n);
        sort(v.begin(), v.end());
        if (v.size() % 2 == 1)
            cout << v[v.size() / 2] << endl;
        else
            cout << (v[v.size() / 2] + v[(v.size() - 1) / 2]) / 2 << endl;
    }
}
