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

void slove()
{
    int n;
    cin >> n;
    vi a(n + 3);
    bool ans = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        bool flag = false;
        for (int j = 2; j <= i + 1; j++)
        {
            if (a[i] % j != 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            ans = true;
            break;
        }
    }
    if (!ans)
    {
        yes;
    }
    else
    {
        no;
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}