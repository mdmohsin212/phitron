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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 1, mx = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (mx >= a[i])
            {
                mx ^= a[i];
            }
            else
            {
                mx = a[i];
                ans++;
            }
        }
        cout << ans << ln;
    }
    return 0;
}