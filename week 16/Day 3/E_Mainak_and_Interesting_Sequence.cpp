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
    int n,m;
    cin >> n >> m;
    if ((n > m) || (n % 2 == 0 && m % 2))
    {
        no;
        return;
    }
    yes;
    int x = n - (n % 2 ? 1 : 2);
    for (int i = 1; i <= x; i++)
    {
        cout << 1 << " ";
    }
    if (n % 2) cout << (m - (n - 1)) << ln;
    else cout << (m - (n - 2)) / 2 << " " << (m - (n - 2)) / 2 << ln;
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