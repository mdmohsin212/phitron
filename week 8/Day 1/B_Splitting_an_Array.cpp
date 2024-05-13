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

    ll n, k;
    cin >> n >> k;
    vi a(n);
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        l = max(l, a[i]);
        r += a[i];
    }

    auto check = [&](ll mid)
    {
        ll sum = 0, cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > mid)
            {
                sum = a[i];
                cnt++;
            }
            else
            {
                sum += a[i];
            }
        }
        return cnt <= k;
    };

    ll ans = r;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid))
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
    return 0;
}