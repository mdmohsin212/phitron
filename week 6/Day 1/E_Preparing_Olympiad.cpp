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

    ll n,l,r,x;
    cin >> n >> l >> r >> x;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < pow(2,n); i++)
    {
        ll sum = 0, cnt = 0, mn = LLONG_MAX, mx = LLONG_MIN;
        for (int j = 0; j < n; j++)
        {
            if (((i >> j) & 1) == 1)
            {
                sum += a[j];
                cnt++;
                mn = min(mn,a[j]);
                mx = max(mx,a[j]);
            }
        }
        if (sum >= l and sum <= r and cnt >= 2 and mx - mn >= x)
        {
            ans++;
        }
    }
    cout << ans << ln;
    return 0;
}