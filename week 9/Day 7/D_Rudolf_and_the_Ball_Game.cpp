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
    int n, m, x,y;
    char c;
    cin >> n >> m >> x;
    vi a(n, 0);
    a[x - 1] = 1;
    while (m--)
    {
        cin >> y >> c;
        vi b(n, 0);
        for (int i = 0; i < n; ++i)
        {
            if (a[i])
            {
                if (c == '0' || c == '?')
                {
                    b[(i + y) % n] = 1;
                }
                if (c == '1' || c == '?')
                {
                    b[(n + (i - y)) % n] = 1;
                }
            }
        }
        a = b;
    }
    int cnt = 0;
    for (int value : a)
    {
        if (value)
        {
            cnt++;
        }
    }
    cout << cnt << ln;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
        {
            cout << i + 1 << ' ';
        }
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
