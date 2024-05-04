#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
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
        sort(a.begin(),a.end());
        auto ok = [&](int k)
        {
            ll cnt = 0, first = a[0], end, time;
            for (int i = 0; i < n; i++)
            {
                end = a[i];
                time = (end + 1 - first) / 2;
                if (time > k)
                    cnt++, first = a[i];
            }
            return cnt < 3;
        };
        ll l = 0, r = 1e9, ans, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << ln;
    }
    return 0;
}