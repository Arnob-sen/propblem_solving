#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, d = 1000000;
    cin >> n;
    ll arr[n + 10];
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    if (n == 1)
        cout << 2 << endl;
    else
    {
        sort(arr + 1, arr + n + 1);
        arr[1] = 1;
        for (ll i = 2; i <= n; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                arr[i] = arr[i - 1] + 1;
                //  cout << arr[i] << endl;
                d++;
            }
            else
                d = i;
        }
        //   for (ll i = 1; i <= n; i++)
        //    cout << arr[i] << " ";
        cout << arr[n] + 1 << endl;
    }
}