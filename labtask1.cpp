#include <bits/stdc++.h>
using namespace std;

int maxQuantumValue(int capacity, vector<vector<int>> &weights, vector<vector<int>> &values)
{
    int n = weights.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= capacity; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (weights[i - 1][k] <= j)
                {
                    dp[i][j] = max(dp[i][j], values[i - 1][k] + dp[i - 1][j - weights[i - 1][k]]);
                }
            }
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }

    return dp[n][capacity];
}

int main()
{
    int capacity;
    cout << "Enter the capacity of the spacecraft: ";
    cin >> capacity;

    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<vector<int>> weights(n, vector<int>(3));
    vector<vector<int>> values(n, vector<int>(3));

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter the quantum weights for item " << i + 1 << ": ";
        for (int j = 0; j < 3; ++j)
        {
            cin >> weights[i][j];
        }

        cout << "Enter the quantum values for item " << i + 1 << ": ";
        for (int j = 0; j < 3; ++j)
        {
            cin >> values[i][j];
        }
    }

    cout << "Maximum Quantum Value: " << maxQuantumValue(capacity, weights, values) << endl;

    return 0;
}
