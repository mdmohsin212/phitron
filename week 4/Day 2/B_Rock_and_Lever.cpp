#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
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
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[__lg(x)]++;
        }
        ll ans = 0;
        for (auto [x, y] : mp)
        {
            // cout << x << " " << y << ln;
            ans += (y * (y - 1)) / 2;
        }
        cout << ans << ln;
    }
    return 0;
}