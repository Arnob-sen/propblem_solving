#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < i; j++)
                cout << "()";
            for (ll k = 0; k < n - i; k++)
                cout << "(";
            for (ll k = 0; k < n - i; k++)
                cout << ")";
            cout << endl;
        }
    }
}