#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    fastio
        ll n,
        k, maxi = 0;
    cin >> n >> k;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(arr[i], maxi);
    }
    // cout << maxi << endl;
    ll low = maxi, high = 1e18, ans;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll sum = 0, block = 1;
        for (ll i = 0; i < n; i++)
        {
            if (sum + arr[i] > mid) // if i am finding the ans is 10 then i should stop when i crosing the range of 10.and i have to made a sub array (block++)and sttarting counting agaim
            {
                block++;
                sum = 0;
            }
            sum += arr[i];
        }
        if (block <= k)
        {
            high = mid - 1;
            ans = mid;
        }
        else
            low = mid + 1; // if sub array is greater than k .then we should reduce sub array
    }
    cout << ans << endl;
}