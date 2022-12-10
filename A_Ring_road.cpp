/*/#include <bits/stdc++.h>
using namespace std;
int s[105], e[105];
int main()
{
    int n, ans = 0, res = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (s[a] || e[b])
            res += c, s[b] = e[a] = 1;
        else
            s[a] = e[b] = 1;


        ans += c;
    }
    cout << min(res, ans - res) << endl
         << res << " " << ans;
}
/*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll in[106], out[105];
int main()
{

    ll t;
    cin >> t;
    ll i = 1;
    while (t--)
    {
        ll need = 0, cost = 0;

        ll n;
        cin >> n;

        while (n--)
        {
            ll a, b, c;
            cin >> a >> b >> c;

            if (in[a] || out[b] == 1) // jodi age ekbar travers hoy kunu node.and oita same vabe jdi abr travers hy tkn eita vul.like 1 5 and 1 6.eikane 1 thkei 2 bar edge ber hoisi.tai ei path ta tik nai
            {
                need += c;
                in[b] = 1;
                out[a] = 1;
            }
            else
            {
                in[a] = 1;  // eikane jeta thke edge ber hoisa
                out[b] = 1; // jetay edge dukse
            }
            cost += c; // total city r cost
        }
        cout << "Case " << i
             << ":"
             << " ";
        i++;
        cout << min(need, cost - need) << endl; // eikane need mane j gula wrong path ase.hoy ami wrong path tik krbo.otherwise wrong gulare ek raika baki full city tik krbo.jetay kom cost oita ans
        //  cout << need << " " << cost;
    }
}