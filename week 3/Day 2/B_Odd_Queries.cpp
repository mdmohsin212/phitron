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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, sum = 0;
        cin >> n >> q;
        vi v(n + 1), pre(n + 1);
        pre[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        for (int i = 1; i <= n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll ans = sum - (pre[r] - pre[l - 1]) + (k * (r - l + 1));
            if (ans % 2 != 0)
            {
                yes;
            }
            else
            {
                no;
            }
            // cout << ans << ln;
        }
    }
    return 0;
}