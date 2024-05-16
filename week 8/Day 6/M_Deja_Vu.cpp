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
    ll n, q, x;
    cin >> n >> q;
    vi v(n),b;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (b.empty() or b.back() > x)
        {
            b.push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto it : b)
        {
            if (v[i] % (1 << it) == 0)
            {
                it = it - 1;
                v[i] += (1 << it);
            }
        }
    }
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << ln;
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