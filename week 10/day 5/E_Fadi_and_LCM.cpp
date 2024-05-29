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
    ll x;
    cin >> x;
    ll ans = x;
    ll a = 1, b = x;
    for (ll i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            ll A = i;
            ll B = x / i;
            if (gcd(A, B) == 1 && max(A, B) < ans)
            {
                ans = max(A, B);
                a = A;
                b = B;
            }
        }
    }
    cout << a << " " << b << endl;
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