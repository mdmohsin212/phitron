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
typedef pair<ll, ll> pll;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;
    vi a(n),ans(n);
    vi prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }
    ll cnt = 1;
    for (auto value : prime)
    {
        bool found = 0;
        for (int i = 0; i < n; ++i)
        {
            if (ans[i] != -1) continue;
            if (a[i] % value) continue;
            found = 1;
            ans[i] = cnt;
        }
        if (found) cnt++;
    }
    cout << cnt - 1 << ln;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << ln;
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