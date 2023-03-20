/*/#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        float x, v, u;
        cin >> x >> u >> v;
        if (v >= u)
            cout << "-1\n";
        else
        {
            float y = u - v;
            float ans = (x / y);
            printf("%.6f\n", ans);
        }
    }
}/*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, u, v;
        cin >> x >> u >> v;
        if (x == 0)
        {
            cout << 0.000000 << endl;
            continue;
        }

        if (u <= v && x != 0)
        {

            cout << "-1\n";
        }
        else
        {
            double time = (double)x / (u - v);
            cout << fixed << setprecision(6) << time << "\n";
        }
    }
    return 0;
}
