#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.second.first < b.second.first;
}

vector<pair<int, pair<int, int>>> selectActivities(vector<pair<int, pair<int, int>>> &activities, int S, int E, int R)
{
    sort(activities.begin(), activities.end(), compare);

    vector<pair<int, pair<int, int>>> selected;
    int currentEnd = S;
    int currentResource = R;

    for (pair<int, pair<int, int>> a : activities)
    {
        if (a.first >= currentEnd && a.second.first <= E && a.second.second <= currentResource)
        {
            selected.push_back(a);
            currentEnd = a.second.first;
            currentResource -= a.second.second;
        }
    }

    return selected;
}

int main()
{
    int S = 1, E = 10, R = 10;
    vector<pair<int, pair<int, int>>> activities = {
        make_pair(1, make_pair(2, 3)),
        make_pair(3, make_pair(5, 2)),
        make_pair(0, make_pair(6, 5)),
        make_pair(8, make_pair(9, 1))};

    vector<pair<int, pair<int, int>>> selected = selectActivities(activities, S, E, R);

    cout << "Selected activities:\n";
    for (pair<int, pair<int, int>> a : selected)
    {
        cout << "Start: " << a.first << ", End: " << a.second.first << ", Resource: " << a.second.second << "\n";
    }

    return 0;
}