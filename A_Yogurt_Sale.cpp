#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n % 2 == 0)
        {
            int ans = min(n / 2 * b, n * a);
            cout << ans << endl;
        }
        else
        {
            int ans = min((n - 1) / 2 * b + a, n * a);
            cout << ans << endl;
        }
    }
}