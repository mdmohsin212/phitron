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
#define gcd(a, b) __gcd(a, b)
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    pbds<int> p;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(a[i]);
        p.insert(a[i]);
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