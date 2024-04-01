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
        ll n;
        cin >> n;
        map<ll, ll> mp;
        set<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            s.insert(x);
            s.insert(x + 1);
        }
        ll y = 0, ans = 0;
        for (auto val : s)
        {
            ll x = mp[val];
            if (x > y)
            {
                ans += x - y;
            }
            y = x;
        }
        cout << ans << ln;
    }
    return 0;
}