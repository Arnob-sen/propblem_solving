#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 100000007;

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, K;
        cin >> n >> K;
        vector<int> A(n), C(n), ans(K + 1);
        ans[0] = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> C[i];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = K; j >= 0; j--)
            {
                ll sum = 0;
                for (ll k = 1; k <= C[i]; k++)
                {
                    if (j - k * A[i] < 0)
                        break;
                    sum = (sum + ans[j - k * A[i]]) % MOD;
                }
                ans[j] = (sum + ans[j]) % MOD;
            }
        }

        cout << "Case " << t << ": " << ans[K] << endl;
    }
    return 0;
}
