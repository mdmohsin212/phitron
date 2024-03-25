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

    ll n, s;
    cin >> n >> s;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, ans = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mx = *ml.rbegin(), mn = *ml.begin();
        if ((mx - mn) <= s)
        {
            ans += (r - l) + 1;
        }
        else
        {
            while (l < r)
            {
                ll mx = *ml.rbegin(), mn = *ml.begin();
                if ((mx - mn) <= s)
                {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            ll mn = *ml.begin(), mx = *ml.rbegin();
            if ((mx - mn) <= s)
            {
                ans += (r - l) + 1;
            }
        }
        r++;
    }
    cout << ans << ln;
    return 0;
}