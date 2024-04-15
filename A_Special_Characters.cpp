#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    string c = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ";
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << c[i];

            cout << endl;
        }
        else
            cout << "NO\n";
    }
}