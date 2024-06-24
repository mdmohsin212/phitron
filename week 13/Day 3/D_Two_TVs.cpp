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
    int n;
    cin >> n;
    map<int, int> d;
    for (int i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    ll sum = 0;
    bool ans = true;
    for (auto [i, val] : d)
    {
        sum += val;
        if (sum > 2)
        {
            ans = false;
            break;
        }
    }
    if(ans) yes;
    else no;
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