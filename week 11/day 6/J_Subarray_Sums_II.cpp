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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll,ll> mp;
    ll sum = 0, ans = 0, l = 0;
    mp[0] = 1;
    while (l < n)
    {
        sum += a[l];
        if (mp.count(sum - m))
        {
            ans += mp[sum - m];
        }
        mp[sum]++;
        l++;
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