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
    ll a,b,l;
    cin >> a >> b >> l;
    set<ll> s;
    for (int i = 0; i <= 20; i++)
    {
        ll val = pow(a,i);
        if (l % val == 0)
        {
            ll x = l / val;
            for (int j = 0; j <= 20; j++)
            {
                ll y = pow(b,j);
                if (x % y == 0)
                {
                    s.insert(x/y);
                }
            } 
        }
    }
    cout << s.size() << ln;
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