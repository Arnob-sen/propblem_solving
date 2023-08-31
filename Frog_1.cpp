#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;

    cin >> n;
    ll arr[n + 1], s[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    s[1] = 0;
    s[2] = abs(arr[2] - arr[1]);
    for (int i = 3; i <= n; i++)
        s[i] = min(s[i - 1] + abs(arr[i] - arr[i - 1]), s[i - 2] + abs(arr[i] - arr[i - 2]));

    cout << s[n] << endl;
}