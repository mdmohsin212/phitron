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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n + 1), b(m + 1), c(m + 2, 0);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<pi> item(m + 1);
    for (int i = 1; i <= m; i++)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        item[i] = {l, r};
        b[i] = x;
    }
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        c[x]++;
        c[y + 1]--;
    }
    for (int i = 1; i <= m; i++){
        c[i] += c[i - 1];
    }
    for (int i = 1; i <= m; i++){
        b[i] = b[i] * c[i];
    }
    vi p(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        ll l = item[i].first;
        ll r = item[i].second;
        p[l] += b[i];
        p[r + 1] -= b[i];
    }
    for (int i = 1; i <= n; i++){
        p[i] += p[i - 1];
    }
    for (int i = 1; i <= n; i++){
        cout << p[i] + a[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}