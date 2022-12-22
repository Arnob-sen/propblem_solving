#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    vector<ll> arr;
    while (cin >> n && n != 0)
    {

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());
        for (ll i = 0; i < arr.size(); i++)
            cout << arr[i] << " ";
        cout << endl;
        arr.resize(0);
    }
}