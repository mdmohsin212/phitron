#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vi a(n), b(m);
        ll ans = 0, idx = min(n, m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        for (int i = 0; i < idx; i++)
        {
            ans += min(a[i], (b[i] * h));
        }
        cout << ans << ln;
    }
    return 0;
}