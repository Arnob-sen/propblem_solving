#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while (cin >> n && n != 0)
    {
        ll arr[n + 1];
        while (1)
        {
            ll c = 1, d = n - 1;
            cin >> arr[1];
            if (arr[1] == 0)
                break;

            for (ll i = 2; i <= n; i++)
                cin >> arr[i];

            stack<ll> s;
            for (ll i = 1; i <= n; i++)
            {
                s.push(i);
                while (!s.empty() && s.top() == arr[c])
                {
                    s.pop();
                    c++;
                }
            }

            if (!s.empty())
                cout << "No\n";
            else
                cout << "Yes\n";
        }
        cout << "\n";
    }
}