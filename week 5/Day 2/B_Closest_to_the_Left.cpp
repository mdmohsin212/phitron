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

    ll n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        ll x;
        cin >> x;
        ll l = 0, r = a.size() - 1, idx = -1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] <= x)
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << idx + 1 << ln;
    }
    return 0;
}