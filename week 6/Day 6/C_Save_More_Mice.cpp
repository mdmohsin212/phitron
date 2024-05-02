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
        vi a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        ll ans = 0, cnt = 0;
        for (int i = 0; i < m; i++)
        {
            if (cnt < a[i])
            {
                cnt += (n - a[i]);
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << ln;
    }
    return 0;
}