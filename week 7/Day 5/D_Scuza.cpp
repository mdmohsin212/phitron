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
        vi a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vi ans(n + 2, 0);
        for (ll i = 1; i <= n; i++)
        {
            ans[i] = a[i] + ans[i - 1];
        }
        vi b(q);
        vector<pair<ll, ll>> k(q);
        for (ll i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }
        sort(k.begin(), k.end());
        int cnt = 0;

        for (int i = 0; i < q; i++)
        {
            while (cnt < n && a.at(cnt + 1) <= k[i].first)
            {
                cnt++;
            }
            b[k[i].second] = ans[cnt];
        }
        for (int i = 0; i < q; i++)
        {
            cout << b[i] << " ";
        }
        cout << ln;
    }
    return 0;
}