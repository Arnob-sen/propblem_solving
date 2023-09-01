#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll arr[n + 1][3] = {0};
    for (int i = 1; i <= n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        arr[i][0] = max(arr[i][0], max(arr[i - 1][1] + b, arr[i - 1][2] + c));
        arr[i][1] = max(arr[i][1], max(arr[i - 1][0] + a, arr[i - 1][2] + c));
        arr[i][2] = max(arr[i][2], max(arr[i - 1][0] + a, arr[i - 1][1] + b));
    }
    cout << max(arr[n][0], max(arr[n][1], arr[n][2]));
}
