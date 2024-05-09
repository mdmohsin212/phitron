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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n),b;
        map<int,int> mp,mp1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto it : mp)
        {
            ll x = it.first;
            ll y = it.second;
            if (x <= n)
            {
                for (int i = 1; i < y; i++) b.push_back(x);
                mp1[x] = 1;
            }
            else
            {
                for (int i = 1; i <= y; i++)
                    b.push_back(x);
            }
        }
        ll ans = 0, cnt = 1;
        for (int i = 0; i < b.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (mp1[j] == 1) cnt++;
                else break;
            }
            ll x = (b[i] - 1) / 2;
            if (cnt <= x)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << ln;
    }
    return 0;
}