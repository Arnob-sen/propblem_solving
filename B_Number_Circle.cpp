#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 1000000;
vector<bool> p(MAXN, true);
int main()

{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    if (arr[n - 1] >= arr[n - 2] + arr[n - 3])
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    cout << arr[n - 1] << " ";
    for (ll i = n - 3; i >= 0; i--)
        cout << arr[i] << " ";

    cout << arr[n - 2] << endl;
}