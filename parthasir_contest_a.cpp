/*/#include <bits/stdc++.h>
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
/*/
//([()[]()])()
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, i;
    string s;
    cin >> n;
    cin >> s;
    stack<char> a;
    l = s.length();
    for (int j = 0; j < n; j++)
    {
        for (i = 0; i < l; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                a.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if (a.empty() == false && a.top() == s[i])
                {
                    a.pop();
                }
            }
        }

        if (a.empty() == true)
        {
            cout << "yes\n";
        }
        else
            cout << "no\n";
    }
    return 0;
}