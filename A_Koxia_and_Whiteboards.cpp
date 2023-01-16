#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> arr, arr2;

        priority_queue<ll, vector<ll>, greater<ll>>
            pq;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;

            pq.push(x);
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> x;
            pq.pop();
            pq.push(x);
        }

        ll sum = 0;
        while (!pq.empty())
        {
            sum += pq.top();
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
        // cout << sum << endl;
    }
}