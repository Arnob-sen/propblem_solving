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
    ll n;
    cin >> n;
    ll arr[n + 1];
    ll e = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (o == 1 && arr[i] % 2)
            cout << i + 1 << endl;
        else if (e == 1 && arr[i] % 2 == 0)
            cout << i + 1 << endl;
    }
}
