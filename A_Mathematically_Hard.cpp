#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef unsigned long long ull;
typedef long long ll;
const int mx = 5e6 + 10;
vector<int> oil(mx + 1);
vector<ull> pre(mx + 1);

// long long oil[MAXN];

int main()

{
    for (int i = 1; i <= mx; i++)
        oil[i] = i;
    for (int i = 2; i <= mx; i++)
    {
        if (oil[i] == i)
        {
            for (int j = i; j <= mx; j += i)
            {
                oil[j] -= oil[j] / i;
            }
        }
    }
    pre[1] = 1;
    for (int i = 2; i <= mx; i++)
    {
        pre[i] = pre[i - 1] + (ull)((ull)(oil[i] * oil[i]));
    }
    fastio int t;
    cin >> t;
    int c = 0;
    while (t--)

    {
        int a, b;
        cin >> a >> b;
        ull ans = pre[b] - pre[a - 1];
        cout << "Case " << ++c << ": ";
        cout << ans << "\n";
    }
}
