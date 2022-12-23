#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, b, sg, sb, x, green_power, blue_power, j = 0;
    cin >> n;
    for (j = 0; j < n; j++)
    {

        cin >> b >> sg >> sb;
        priority_queue<ll> green, blue;
        ll green_won = 1, blue_won = 1;
        for (ll i = 0; i < sg; i++)
        {
            cin >> x;
            green.push(x);
        }
        for (ll i = 0; i < sb; i++)
        {
            cin >> x;
            blue.push(x);
        }
        while (!green.empty() && !blue.empty())
        {
            vector<ll> green_max, blue_max;
            for (ll i = 0; i < b && !green.empty() && !blue.empty(); i++)
            {

                green_power = green.top();
                blue_power = blue.top();
                green.pop();
                blue.pop();
                if (green_power > blue_power)
                    green_max.push_back(green_power - blue_power);
                else if (blue_power > green_power)
                    blue_max.push_back(blue_power - green_power);
            }
            for (ll i = 0; i < green_max.size(); i++)
                green.push(green_max[i]);
            for (ll i = 0; i < blue_max.size(); i++)
                blue.push(blue_max[i]);

            if (green.empty())
                green_won = 0;
            if (blue.empty())
                blue_won = 0;
        }
        if (green_won)
        {
            cout << "green wins\n";
            while (!green.empty())
            {
                cout << green.top() << endl;
                green.pop();
            }
        }
        else if (blue_won)
        {
            cout << "blue wins\n";
            while (!blue.empty())
            {
                cout << blue.top() << endl;
                blue.pop();
            }
        }
        else
            cout << "green and blue died\n";
        if (j != n - 1)
            cout << endl;
    }
}