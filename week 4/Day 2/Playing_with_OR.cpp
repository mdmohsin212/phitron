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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 0, ans = 0, odd = 0;
        while (r < n)
        {
            if (a[r] % 2 != 0)
            {
                odd++;
            }
            if ((r - l) + 1 == k)
            {
                if (odd >= 1)
                {
                    ans++;
                }
                if (a[l] % 2 != 0)
                {
                    odd--;
                }
                l++;
            }
            r++;
        }
        cout << ans << ln;
    }
    return 0;
}