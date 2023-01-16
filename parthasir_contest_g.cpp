/*/#include <bits/stdc++.h>
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
/*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p = 0;
    while (p == 0)
    {
        long long b, n, i;

        cin >> n;
        if (n == 0)
            break;
        queue<int> a;
        for (i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            a.push(x);
            if (i > 0)
            {
                if (i == 1)
                {
                    b = a.front() + a.back();
                    a.back() = b;
                    a.pop();
                    if (n == 2)
                        cout << a.front() << endl;
                }
                else
                {
                    b = b + a.back();
                    a.back() = b + a.front();
                    a.pop();
                    if (i == (n - 1))
                        cout << a.front() << endl;
                }
            }
        }
    }

    return 0;
}