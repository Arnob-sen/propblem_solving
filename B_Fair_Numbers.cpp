/*/
#include <stdio.h>
main()
{
    int t;
    long long int a, k;
    scanf("%d", &t);
    while (t)
    {
        scanf("%lld", &a);
        k = a;
        while (k != 0)
        {
            if (k % 10 == 0)
                k = k / 10;
            else
            {
                if (a % (k % 10) == 0)
                    k = k / 10;
                else
                {
                    a++;
                    k = a;
                }
            }
        }
        printf("%lld\n", a);
        t--;
    }
}
/*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll d = n;
        while (d != 0)
        {
            if (d % 10 == 0)
                d /= 10;
            else
            {
                if (n % (d % 10) == 0)
                    d /= 10;
                else
                {
                    n++;
                    d = n;
                }
            }
        }
        cout << n << endl;
    }
}