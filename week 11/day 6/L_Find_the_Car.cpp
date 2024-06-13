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
    int n,k,q;
    cin >> n >> k >> q;
    vi a(k+1),b(k+1);
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
    }
    while (q--)
    {
        ll x;
        cin >> x;
        ll val = upper_bound(a.begin(),a.end(), x) - a.begin();
        ll ans = b[val - 1];
        ll d = a[val] - a[val - 1];
        ll time = b[val] - b[val - 1];
        ll need = x - a[val - 1];

        ans += ((need * time) / d);
        cout << ans << " ";
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
        cout << ln;
    }
    return 0;
}