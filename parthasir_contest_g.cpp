#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while (cin >> n && n != 0)
    {
        ll arr[n + 1];
        ll x, y, ans = 0;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            q.push(arr[i]);
        }
        while (q.size() > 1)
        {
            x = q.top();
            q.pop();
            y = q.top();
            q.pop();
            ans += (x + y);
            q.push(x + y);
        }

        cout << ans << endl;
    }
}