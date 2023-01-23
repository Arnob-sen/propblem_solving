#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    vector<int> b;
    for (int i = 0; i < a * 2; i++)
    {
        int z;
        cin >> z;
        b.push_back(z);
    }
    int mi = 10000;
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = i + 1; j < b.size(); j++)
        {
            int cont = 0;
            vector<int> z;
            for (int k = 0; k < b.size(); k++)
            {
                if (k != i && k != j)
                {
                    z.push_back(b[k]);
                }
            }
            for (int k = 0; k < z.size(); k += 2)
            {
                cont += z[k + 1] - z[k];
            }
            if (cont < mi)
                mi = cont;
        }
    }
    cout << mi;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
}