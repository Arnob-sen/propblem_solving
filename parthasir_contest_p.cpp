/*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll c;
    cin >> c;
    while (c--)
    {
        ll n;
        double sum = 0, average = 0, count_above = 0;
        cin >> n;
        ll arr[n + 1];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        average = sum / n;
        for (ll i = 0; i < n; i++)
            if (arr[i] > average)
                count_above++;

        double ans = (count_above / n) * 100;
        //  cout << setprecision(5) << ans <<"%"<< endl;
        printf("%.3lf%%\n", ans);
    }
}
/*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        long long m;

        double average = 0, count_above = 0, sum = 0;
        cin >> m;
        long long arr[m + 1];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        average = sum / n;
        for (int i = 0; i < m; i++)
        {
            if (arr[i] > average)
                count_above++;
        }
        double ans = (count_above / n) * 100;
        printf("%.3lf%%\n", ans);
    }
}