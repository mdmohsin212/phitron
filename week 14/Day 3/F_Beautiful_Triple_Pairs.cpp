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
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<tuple<ll,ll,ll>, ll> mp;
    ll ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        tuple<ll,ll,ll> t = make_tuple(a[i],a[i+1],a[i+2]);
        vector<tuple<ll,ll,ll>> v(3);
        v[0] = make_tuple(0,a[i+1],a[i+2]);
        v[1] = make_tuple(a[i],0,a[i+2]);
        v[2] = make_tuple(a[i],a[i+1],0);
        for(auto val : v){
            ans += mp[val] - mp[t];
            mp[val]++;
        }
        mp[t]++;
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