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
        ll n, k;
        cin >> n >> k;
        vi pos, neg;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                pos.push_back(x);
            }
            else if (x < 0)
            {
                neg.push_back(-x);
            }
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        ll ans = 0;
        for (int i = pos.size() - 1; i >= 0; i -= k)
        {
            ans += 2 * pos[i];
        }
        for (int i = neg.size() - 1; i >= 0; i -= k)
        {
            ans += 2 * neg[i];
        }
        if (!pos.empty() && !neg.empty())
        {
            if (pos.back() > neg.back())
            {
                ans -= pos.back();
            }
            else
            {
                ans -= neg.back();
            }
        }
        else if (!pos.empty())
        {
            ans -= pos.back();
        }
        else if (!neg.empty())
        {
            ans -= neg.back();
        }
        cout << ans << endl;
    }
    return 0;
}