#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, b, sg, sb, x, green_max, blue_max, j = 0;
    cin >> n;
    while (n--)
    {

        cin >> b >> sg >> sb;
        priority_queue<ll> green, blue;
        bool green_won = 1, blue_won = 1;
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
            vector<ll> green_power, blue_power;
            for (ll i = 0; i < b && !green.empty() && !blue.empty(); i++)
            {

                green_max = green.top();
                blue_max = blue.top();
                green.pop();
                blue.pop();
                if (green_max > blue_max)
                    green_power.push_back(green_max - blue_max);
                else if (blue_power > green_power)
                    blue_power.push_back(blue_max - green_max);
            }
            for (auto &i : green_power)
                green.push(i);
            for (auto &i : blue_power)
                blue.push(i);

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

        cout << endl;
    }
}