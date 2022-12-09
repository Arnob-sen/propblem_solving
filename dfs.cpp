#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adjList;
vector<bool> vis;
vector<int> parent, level;

void dfs(int node)
{
    vis[node] = true;

    for (int nextNode : adjList[node])
    {
        if (vis[nextNode] = false)
        {
            level[nextNode] = level[node] + 1;
            parent[nextNode] = node;
            dfs(nextNode);
        }
    }
}
/*/
void bfs(int startNode)
{
    queue<int> q;
    q.push(startNode);
    level[startNode] = 0;
    parent[startNode] = -1;

    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        vis[currentNode] = true;
        for (int nextNode : adjList[currentNode])
        {
            if (!vis[nextNode])
            {
                level[nextNode] = level[currentNode] + 1;
                parent[nextNode] = currentNode;
                        }
        }
    }
}
/*/

int main()
{
    int n, e;
    cin >> n >> e;
    vis.resize(n, false);
    level.resize(n, 0);
    parent.resize(n, -1);
    adjList.resize(n, vector<int>());
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int startNode;
    cin >> startNode;
    level[startNode] = 0;
    dfs(startNode);
    for (int i = 0; i < n; i++)
    {
        cout << "Node Number: " << i << " "
             << "Level:" << level[i] << " parentNode:" << parent[i] << endl;
    }
}