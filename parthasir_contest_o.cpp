#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string title;
        getline(cin >> ws, title);
        for (ll i = 0; i < title.size(); i++)
            title[i] = toupper(title[i]);

        ll m, n, b;
        vector<pair<string, ll>> element_list;
        cin >> m >> n >> b;
        string element;
        ll price;
        while (m--)
        {
            cin >> element;
            cin >> price;
            element_list.push_back({element, price});
        }
        string reciepe, need;
        ll k, unit;
        priority_queue<pair<ll, string>, vector<pair<ll, string>>, greater<pair<ll, string>>> reciepe_cost;
        while (n--)
        {
            ll cost = 0;
            getline(cin >> ws, reciepe);
            cin >> k;
            while (k--)
            {

                cin >> need;
                cin >> unit;
                for (auto i : element_list)
                {
                    if (i.first == need)
                    {
                        cost += i.second * unit;
                    }
                }
            }
            reciepe_cost.push({cost, reciepe});
        }
        cout << title << endl;
        ll c = 0;
        while (!reciepe_cost.empty())
        {
            if (reciepe_cost.top().first <= b)
            {
                cout << reciepe_cost.top().second << endl;
                c++;
            }

            reciepe_cost.pop();
        }
        if (c == 0)
            cout << "Too expensive!\n";

        cout << "\n";
    }
}