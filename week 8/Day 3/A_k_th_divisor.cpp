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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size() >= k)
    {
        cout << v[k - 1] << ln;
    }
    else
    {
        cout << -1 << ln;
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