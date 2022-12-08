#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        ll d = s[s.size() - 1] - '0';
        //  cout<<d<<endl;
        cout << s[s.size() - 1] % 48 << endl;
    }
    return 0;
}