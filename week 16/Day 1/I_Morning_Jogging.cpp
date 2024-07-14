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
typedef pair<int, int> pi;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    ll n, m, x;
    cin >> n >> m;
    vector<pi> a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            a.push_back({x, i});
        }
    }
    sort(a.begin(), a.end());
    vector<set<int>> b(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            b[i].insert(j);
    }
    vector<vi> ans(n, vi(m));
    for (int i = 0; i < m; i++)
    {
        ll r = a[i].second;
        ans[r][i] = a[i].first;
        b[r].erase(i);
    }
    for (int i = m; i < n * m; i++)
    {
        ll r = a[i].second;
        ll c = *b[r].begin();
        ans[r][c] = a[i].first;
        b[r].erase(c);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            cout << ans[i][j] << " ";
        }
        cout << ln;
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
