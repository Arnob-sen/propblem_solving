#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, ans1, ans2, c = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            for (int j = 2; j * j <= i; j++)
            {
                {
                    if (i % j == 0)
                    {

                        ans1 = i / j;
                        ans2 = i - ans1;
                        c = 1;
                        break;
                    }
                }
            }
            if (c)
                break;
        }
        if (c)
            cout << ans1 << " " << ans2 << endl;
        else
            cout << -1 << endl;
    }
}