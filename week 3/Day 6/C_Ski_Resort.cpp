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
        ll n, k, q;
        cin >> n >> k >> q;
        vi a(n);
        ll cnt = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= q)
                cnt++;
            else
            {
                if (cnt >= k)
                {
                    ll sum = (cnt + 1) - k;
                    ans += ((sum + 1) * sum) / 2;
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ll sum = (cnt + 1) - k;
            ans += ((sum + 1) * sum) / 2;
        }
        cout << ans << ln;
    }
    return 0;
}