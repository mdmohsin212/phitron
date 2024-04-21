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
        ll n, q;
        cin >> n >> q;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vi pre(n+1, 0);
        for (int i = 0; i < n; i++)
        {
            pre[i+1] = pre[i] + a[i];
        }
        while (q--)
        {
            ll x;
            cin >> x;
            ll l = 1, r = n, mid, ans = -1;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (pre[mid] >= x)
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
    }
    return 0;
}
