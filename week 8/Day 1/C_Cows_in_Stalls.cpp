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

    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll mid)
    {
        ll cnt = 1, last = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] - last >= mid)
            {
                last = a[i];
                cnt++;
            }
        }
        return cnt >= k;
    };

    ll l = 0, r = 1e9, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
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