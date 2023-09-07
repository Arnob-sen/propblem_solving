#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1000;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans = min(ans, (v[i].first + (v[i].second - 1) / 2));
        }

        cout << ans << endl;
    }
}