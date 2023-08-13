#include <bits/stdc++.h>
using namespace std;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    fastio int n, m, c = 0;
    while (cin >> n)
    {
        map<string, int> mp;
        vector<int> indegree(n + 1, 0);
        string list[n + 1];
        vector<vector<int>> adj(n + 1);
        string s1, s2;
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> s1;
            mp[s1] = i;
            list[i] = s1;
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> s1 >> s2;
            indegree[mp[s2]]++;
            adj[mp[s1]].push_back(mp[s2]);
        }
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n; i++)
            if (indegree[i] == 0)
                pq.push(i);

        while (!pq.empty())
        {

            int top = pq.top();
            pq.pop();
            ans.push_back(list[top]);
            for (auto i : adj[top])
            {
                indegree[i]--;
                if (indegree[i] == 0)
                    pq.push(i);
            }
        }
        cout << "Case #" << ++c << ": Dilbert should drink beverages in this order:";
        for (auto i : ans)
            cout << " " << i;

        cout << "." << endl
             << endl;
    }
}
