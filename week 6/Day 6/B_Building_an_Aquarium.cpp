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
        ll n,m;
        cin >> n >> m;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 1, r = 1e10, mid;
        while (l < r - 1)
        {
            ll ans = 0;
            mid = l + (r - l) / 2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                {
                    ans += (mid - a[i]);
                }
            }
            if (ans > m)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
            
        }
        cout << l << ln;
    }
    return 0;
}