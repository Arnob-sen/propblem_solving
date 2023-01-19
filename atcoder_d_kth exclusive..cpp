#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 50;
int main()
{
    ll n, q, k;
    cin >> n >> q;
    ll arr[N];
    ll arr2[N];
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i] - (i);
    }
    arr2[0] = 0;
    while (q--)
    {

        cin >> k;
        ll l = 0, r = n;
        ll mid;
        while (l < r)
        {
            mid = (l + r + 1) / 2;
            if (arr2[mid] < k)
                l = mid;
            else
                r = mid - 1;
        }
        cout << arr[l] + (k - arr2[l]) << endl;
    }
}