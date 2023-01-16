#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, i, j, c = 0;
    string s;
    cin >> n;
    getchar();
    for (j = 0; j < n; j++)
    {
        getline(cin, s);
        // cin>>s;
        stack<char> a;
        l = s.length();
        for (i = 0; i < l; i++)
        {
            if (s[i] == '(' || s[i] == '[')
            {
                a.push(s[i]);
            }
            else if (s[i] == ')' || s[i] == ']')
            {
                if (a.empty() == false)
                {
                    if ((a.top() == '(' && s[i] == ')') || (a.top() == '[' && s[i] == ']'))
                        a.pop();
                }
                else
                {
                    if (s[i] == ')' || s[i] == ']')
                    {
                        cout << "No" << endl;

                        c++;
                        break;
                    }
                }
            }
        }
        if (c == 0)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}