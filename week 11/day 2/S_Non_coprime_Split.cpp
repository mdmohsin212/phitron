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
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

int divisor(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n <= 3 and m <= 3)
    {
        cout << -1 << ln;
        return;
    }
    if (m - n >= 1)
    {
        if (m % 2) m--;
        cout << m / 2 << " " << m / 2 << ln;
        return;
    }
    if (divisor(n) == n)
    {
        cout << -1 << ln;
        return;
    }
    else cout << divisor(n) << " " << n - divisor(n) << ln;
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