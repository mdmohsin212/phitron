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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, r = 0, l = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
        {
            ans += (r - l) + 1;
        }
        else
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
                }
                l++;
            }
            ans += (r - l) + 1;
        }
        r++;
    }
    cout << ans << ln;
    return 0;
}