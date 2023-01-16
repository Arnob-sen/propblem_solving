#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    string a, b, c = "";
    vector<pair<string, string>> v;
    vector<string> s;
    for (ll i = 0; i < m; i++)
    {
        cin >> a >> b;
        v.push_back({a, b});
        // if(a.size()>=b.size())v.push_back(a);
        // else v.push_back(b);
    }
    for (ll i = 0; i < n; i++)
    {
        string d;
        cin >> d;
        s.push_back(d);
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i] == v[j].first || s[i] == v[j].second)
            {
                ll x = v[j].first.size(), y = v[j].second.size();
                // cout << x << " " << y << endl;
                // break;
                //  cout << v[i].first.size() << " " << v[i].second.size() << endl;
                //   break;
                if (x <= y)
                {

                    cout << v[j].first << " ";
                    break;
                }
                else
                {
                    cout << v[j].second << " ";
                    break;
                }
            }
        }
    }
}