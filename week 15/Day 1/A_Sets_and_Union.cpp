#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln '\n'
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n;
    cin >> n;
    vector<set<ll>> v(n);
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v[i].insert(x);
            s.insert(x);
        }
    }

    ll ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        set<ll> x;
        for (int j = 0; j < n; j++)
        {
            if (v[j].find(i) == v[j].end())
            {
                x.insert(v[j].begin(), v[j].end());
            }
        }
        if (x.size() != s.size())
            ans = max(ans, (ll)x.size());
    }
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