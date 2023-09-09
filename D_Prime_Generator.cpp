#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 100005;
vector<bool> p(MAXN, true);

#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int prime(int x)
{

    if (x == 1)
        return 0;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {

            if (prime(i))
                cout << i << endl;
        }

        cout << endl;
    }
}