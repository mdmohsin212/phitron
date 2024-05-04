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
        auto ok = [&](int val)
        {
            multiset<ll> ml;
            for (int i = 0; i < n; i++)
            {
                ml.insert(a[i]);
            }
            ll need;
            for (int i = 1; i <= val; i++)
            {
                need = val - i + 1;
                auto it = ml.upper_bound(need);
                if (it == ml.begin() || ml.empty())
                {
                    return 0;
                }
                ml.erase(--it);
                if (ml.empty())
                {
                    break;
                }
                it = ml.begin();
                ml.insert(*it + need);
                ml.erase(it);
            }
            return 1;
        };
        ll l = 0, r = n, ans = 0, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << ln;
    }
    return 0;
}