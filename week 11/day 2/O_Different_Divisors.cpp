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
ll prime(ll a)
{
    bool temp = false;
    while (1)
    {
        temp = false;
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                temp = true;
                break;
            }
        }
        if (!temp)
            break;
        else
            a++;
    }
    return a;
}
void solve()
{
    int d;
    cin >> d;
    ll ans = 0, a = d + 1;
    a = prime(a);
    ll b = a + d;
    b = prime(b);
    ans = a * b;
    cout << ans << ln;
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