#include <bits/stdc++.h>
using namespace std;
#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln '\n'
#define gcd(a, b) __gcd(a, b)
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
const ll N = 2e5 + 9;
const ll mod = 1e9 + 7;

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void slove()
{
    int n;
    cin >> n;

    if (is_prime(n))
    {
        cout << 1 << '\n';
    }
    else if (n % 2 == 0)
    {
        cout << 2 << '\n';
    }
    else
    {
        if (is_prime(n - 2))
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 3 << '\n';
        }
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}