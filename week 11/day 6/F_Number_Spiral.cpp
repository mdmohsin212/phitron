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
typedef pair<ll, ll> pi;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void solve()
{
    ll y, x;
    cin >> y >> x;
    if (y > x)
    {
        if (y % 2 == 1)
        {
            cout << (y - 1) * (y - 1) + 1 + (x - 1) << ln;
        }
        else
        {
            cout << y * y - (x - 1) << ln;
        }
    }
    else
    {
        if (x % 2 == 1)
        {
            cout << x * x - (y - 1) << ln;
        }
        else
        {
            cout << (x - 1) * (x - 1) + 1 + (y - 1) << ln;
        }
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}