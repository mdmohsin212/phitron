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
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char, vector<int>> pos, pos2;
    for (int i = 0; i < n; i++)
    {
        pos[s[i]].push_back(i);
        pos2[r[i]].push_back(i);
    }
    vector<int> per(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos[ch].size(); i++)
        {
            per[pos2[ch][i]] = pos[ch][i];
        }
    }
    pbds<int> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(per[i]);
        p.insert(per[i]);
    }
    cout << ans << ln;
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