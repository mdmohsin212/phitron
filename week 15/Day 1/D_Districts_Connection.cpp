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
    set<ll> s;
    map<ll,vi> mp;
    vector<vi> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i);
        s.insert(x);
    }
    if(s.size() == 1){
        no;
        return;
    }
    yes;
    for(auto x : mp){
        v.push_back(x.second);
    }
    for (int i = 1; i < v.size(); i++)
    {
        for (auto j : v[i])
        {
            cout << v[0][0] + 1 << " " << j + 1 << ln;
        }
    }
    for (int i = 1; i < v[0].size(); i++)
    {
        cout << v[0][i] + 1 << " " << v[1][0] + 1 << ln;
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