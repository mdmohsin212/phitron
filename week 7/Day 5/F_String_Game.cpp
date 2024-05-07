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

    string a, b;
    cin >> a >> b;
    ll n = a.size();
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](ll mid)
    {
        vi bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[v[i]] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i + 1] && a[i] == b[cnt])
            {
                cnt++;
            }
        }
        return cnt == b.size();
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
    return 0;
}
