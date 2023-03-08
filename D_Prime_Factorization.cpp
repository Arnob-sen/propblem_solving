#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int lucky(int n)
{
    vector<int> v = {30};
    int num = 31;
    while (v.size() < n)
    {
        int prime_divisors = 0;
        for (int i = 2; i <= num / 2 && prime_divisors < 3; i++)
        {
            if (is_prime(i) && num % i == 0)
            {
                prime_divisors++;
            }
        }
        if (prime_divisors >= 3)
        {
            v.push_back(num);
        }
        num++;
    }
    return v.back();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        cout << lucky(n) << endl;
    }
}
