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
    vi a(n,0);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] += x;
    }
    sort(a.rbegin(),a.rend());
    ll ans = 0, l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] > -1 and a[r] > -1)
        {
            ans++;
            l++, r--;
        }
        else if (a[l] < 0 and a[r] < 0) break;
        else if (a[l] > -1)
        {
            if (a[l] >= abs(a[r]))
            {
                ans++;
                l++, r--;
            }
            else r--;
        }
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