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
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > 0) sum += a[i];
    }
    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] > 0)
            {
                cnt = max(cnt, sum);
                sum -= a[i];
            }
            else
            {
                cnt = max(cnt, sum + a[i]);
            }
        }
        else
        {
            if (a[i] > 0)
            {
                sum -= a[i];
                cnt = max(cnt, sum);
            }
            else
            {
                cnt = max(cnt, sum);
            }
        }
    }
    ans += cnt;
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