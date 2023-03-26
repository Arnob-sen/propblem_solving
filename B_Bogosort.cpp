#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t, n;

    cin >> t;
    while (t--)
    {

        cin >> n;

        int ara[n];

        for (int i = 0; i < n; i++)
            cin >> ara[i];

        sort(ara, ara + n, greater<int>());

        for (int i = 0; i < n; i++)
            cout << ara[i] << " ";

        cout << endl;
    }

    return 0;
}