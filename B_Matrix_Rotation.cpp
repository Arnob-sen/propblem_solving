#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[4], c = 0;
        for (ll i = 0; i < 4; i++)
            cin >> arr[i];

        if (arr[0] < arr[1] && arr[2] < arr[3] && arr[0] < arr[2] && arr[1] < arr[3])
            cout << "YES\n";
        else
        {
            for (ll i = 0; i < 3; i++)
            {
                arr[0] = arr[2];
                arr[1] = arr[0];
                arr[2] = arr[3];
                arr[3] = arr[1];
                cout << arr[0] << " " << arr[1] << endl
                     << arr[2] << " " << arr[3] << endl;
                if (arr[0] < arr[1] && arr[2] < arr[3] && arr[0] < arr[2] && arr[1] < arr[3])
                {
                    cout << "YES\n";
                    c = 1;
                    break;
                }
            }
            if (c == 0)
                cout << "no\n";
        }
    }
}