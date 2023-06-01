#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        int n, k, l;
        cin >> n >> k >> l;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        long long ans = 0, c = 0;
        //   v.push_back({101, 6});
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++)
        {
            // cout << v[i].first << " " << v[i].second << endl;
            if (c == k)
                break;
            if (v[i].second == l)
            {

                c++;
                ans += v[i].first;
            }
        }
        if (ans == 0 || c != k)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
