#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 100

int main()
{
    ll a, b;
    cin >> a >> b;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1 == 1)
            res = res * a;
        a = a * a;
        b = b >> 1;
    }
    cout << res % mod << endl;
}