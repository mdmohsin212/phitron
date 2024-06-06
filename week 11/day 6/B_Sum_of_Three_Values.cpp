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
    ll n, m;
    cin >> n >> m;
    vector<pi> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back({x, i + 1});
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        ll x = m - a[i].first;
        ll k = n - 1;
        for (int j = i + 1; j < k; j++)
        {
            while (j < k and a[j].first + a[k].first > x) k--;
            if (j < k and a[j].first + a[k].first == x)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second;
                return;
            }
        }
    }
    cout << "IMPOSSIBLE" << ln;
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}