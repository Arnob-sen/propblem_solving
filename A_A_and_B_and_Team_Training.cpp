#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a = min(m, n);
    ll b = max(m, n);

    if (m > 2 * n)
        cout << n << endl;

    else if (n > 2 * m)
        cout << m << endl;

    else
        cout << (n + m) / 3 << endl;
}