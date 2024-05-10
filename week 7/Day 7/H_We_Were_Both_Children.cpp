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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > n)
                continue;
            mp[a[i]]++;
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ll val = 0;
            for (int j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    val += mp[j];
                    if (j * j != i)
                    {
                        val += mp[i / j];
                    }
                }
            }
            ans = max(ans, val);
        }
        cout << ans << ln;
    }
    return 0;
}