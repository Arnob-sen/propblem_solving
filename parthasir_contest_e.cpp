#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    while (cin >> s && s != "#")
    {
        //  sort(s.begin(), s.end());
        if (next_permutation(s.begin(), s.end()))
            cout << s << "\n";
        else
            cout << "No Successor\n";
        // cout << s << endl;
    }
}