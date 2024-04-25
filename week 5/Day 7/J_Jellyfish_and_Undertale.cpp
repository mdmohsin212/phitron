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
        ll a,b,n;
        cin >> a >> b >> n;
        vi v(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] + 1 <= a)
            {
                ans += v[i];
            }
            else
            {
                ans += a - 1;
            }
        }
        if (b >= a)
        {
            ans += a;
        }
        else
        {
            ans += b;
        }
        cout << ans << ln;
    }
    return 0;
}