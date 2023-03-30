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
        ll n, k = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = n - 1; i > 0; i -= 2)
        {
            if (arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "NO\n";
                k = 1;
                break;
            }
        }
        // for (ll i = 0; i < n; i++)
        //     cout << arr[i] << " ";
        // if (k == 1)
        //     cout << "NO\n";
        if (k == 0)
            cout << "YES\n";
    }
}