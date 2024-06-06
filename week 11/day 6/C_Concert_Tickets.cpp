#include<bits/stdc++.h>
using namespace std;
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

void solve(){
    ll n,m;
    cin >> n >> m;
    multiset<ll> ml;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ml.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll v;
        cin >> v;
        auto it = ml.upper_bound(v);
        if(it == ml.begin()){
            cout << -1 << ln;
            continue;
        }
        else
        {
            cout << *--it << ln;
            ml.erase(it);
        }
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}