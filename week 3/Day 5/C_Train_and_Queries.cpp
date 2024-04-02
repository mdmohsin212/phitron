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
        ll n, q;
        cin >> n >> q;
        map<int, pi> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!mp.count(x))
            {
                mp[x] = {i, i};
            }
            else
            {
                mp[x].second = i;
            }
        }
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            if (mp.count(a) && mp.count(b) && mp[a].first <= mp[b].second)
            {
                yes;
            }
            else
            {
                no;
            }
        }
        // cout << mp.count(a) << " " << mp.count(b) << " " << mp[a] << " " << mp[b] << ln;
    }
    return 0;
}