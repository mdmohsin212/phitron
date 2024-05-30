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
    ll n, mx = LLONG_MIN, sum = 0;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    ll val = mx - a[0];
    for (int i = 0; i < n; i++)
    {
        val = gcd(val, mx - a[i]);
    }
    ll ans = (mx * n) - sum;
    cout << ans / val << " " << val << ln;
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