#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    getchar();
    while (n--)
    {
        string s;
        getline(cin, s);
        // cin >> s;
        stack<char> st;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '[')
                st.push(s[i]);

            else if (s[i] == '(')
                st.push(s[i]);
            else if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else if (s[i] == ']')
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                    st.push(s[i]);

            else
                st.push(s[i]);
        }
        if (st.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
//([()[]()])()
