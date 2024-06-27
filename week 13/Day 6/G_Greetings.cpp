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
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // less -> set, less_equal -> multi-set

void solve(){
    ll n;
    cin >> n;
    vi a(n),b(n);
    vector<pi> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    pbds<ll> pb;
    for (int i = 0; i < n; i++)
    {
        v[i] = {a[i],b[i]};
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        pb.insert(v[i].second);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += pb.order_of_key(v[i].second);
        pb.erase(v[i].second);
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