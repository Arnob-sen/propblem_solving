#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
// #define inf 1e12
int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 != b % 2)
            cout << "Yes\n";
        else
        {
            if (a % 2 == 0 && b % 2 == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}