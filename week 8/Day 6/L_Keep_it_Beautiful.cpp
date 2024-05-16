#include <bits/stdc++.h>
using namespace std;
#define fastio()                  \
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
const ll N = 2e5 + 9;
const ll mod = 1e9 + 7;

void slove()
{
    ll n;
    cin >> n;
    ll mn = -1, mx = 0, cnt = 0;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (cnt == 0)
        {
            if (mn == -1)
            {
                mn = x;
                mx = x;
                v.push_back(1);
            }
            else if (x >= mx)
            {
                mx = x;
                v.push_back(1);
            }
            else if (x <= mn)
            {
                mx = mn;
                mn = x;
                cnt++;
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        else if (x >= mn and x <= mx)
        {
            v.push_back(1);
            mn = x;
        }
        else
        {
            v.push_back(0);
        }
    }
    for (ll value : v)
    {
        cout << value;
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
        slove();
    }
    return 0;
}