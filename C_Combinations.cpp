#include <iostream>
#include <vector>

using namespace std;

int nCr(int n, int r)
{
    if (r > n)
        return 0; // r should be less than or equal to n
    if (r == 0 || r == n)
        return 1; // nCr = 1 if r is 0 or n
    vector<int> dp(r + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
        {
            dp[j] = dp[j] + dp[j - 1];
        }
    }
    return dp[r];
}

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        cout << "Case " << ++c << ": ";

        cout << nCr(n, r) << endl;
    } // Output: 10
    return 0;
}
