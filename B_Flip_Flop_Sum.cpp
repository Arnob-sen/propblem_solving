#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 100000005;
vector<bool> p(MAXN, false);
// vector<ll> dp;
vector<ll> seg;
vector<ll> arr;

#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n + 1];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            //  sum++;
        }
        ll c = 0, d = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i] == -1 && arr[i + 1] == -1)
            {

                c = 1;
                d = 0;

                break;
            }
            else if ((arr[i] == -1 || arr[i + 1] == -1) && d == 0 && c == 0)
                d = 1;
            // sum += arr[i] + arr[i + 1];
        }

        if (d == 1)
            cout << sum << endl;
        else if (c == 1)
            cout << sum + 4 << endl;
        else
            cout << sum - 4 << endl;
    }
}