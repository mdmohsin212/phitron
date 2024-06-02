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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll val1 = 0, val2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            val1 = gcd(val1,a[i]);
        }
        else
        {
            val2 = gcd(val2,a[i]);
        }
    }
    bool ans = false, ans2 = false;
    for (int i = 1; i < n; i+=2)
    {
        if (a[i] % val1 == 0)
        {
            ans = true;
            break;
        }
    }
    for (int i = 0; i < n; i+=2)
    {
        if (a[i] % val2 == 0)
        {
            ans2 = true;
            break;
        }
    }
    if(ans and ans2) cout << 0 << ln;
    else if (!ans)
    {
        cout << val1 << ln;
    }
    else cout << val2 << ln;
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