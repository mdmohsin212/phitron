#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio()                  \
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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pi> a;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    vi mx(n), mn(n);
    ll mxx = 0, mnn = LLONG_MAX;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        mxx = max(mxx, a[i].second);
        mx[i] = mxx;
        mnn = min(mnn, a[i].second);
        mn[i] = mnn;
    }
    map<ll, ll> mp;
    for (int i = 0; i < a.size(); i++)
    {
        ll x = mx[i] - mn[i] + 1;
        ll val = a[i].first;
        mp[val] = max(mp[val], x * 2);
    }
    for (int i = 1; i <= k; i++)
    {
        cout << mp[i] << " ";
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
        solve();
    }
    return 0;
}
