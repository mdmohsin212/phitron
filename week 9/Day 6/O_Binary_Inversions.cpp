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

ll solution(vector<ll> a, int n)
{
    ll res = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one++;
        }
        else
        {
            res += one;
        }
    }
    return res;
}

void slove()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = solution(a, n);
    int id = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            id = i;
            break;
        }
    }
    ans = max(ans, solution(a, n));
    if (id != -1)
    {
        a[id] = 0;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            break;
        }
    }
    ans = max(ans, solution(a, n));
    cout << ans << ln;
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