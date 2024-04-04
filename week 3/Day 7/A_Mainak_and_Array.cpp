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
        ll n;
        cin >> n;
        vi a(n);
        ll ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << ln;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i - 1] - a[i]);
        }
        cout << ans << ln;
    }
    return 0;
}