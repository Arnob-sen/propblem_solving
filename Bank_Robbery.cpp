#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()

{

    int t, c = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << "Case " << ++c << ":";
        for (int i = 9; i >= 0; i--)
        {
            ll x = n * 10 - i;
            if (x % 9 == 0)
                cout << " " << x / 9;
        }
        cout << endl;
    }
}