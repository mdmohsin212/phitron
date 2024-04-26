#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
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
        ll n,m;
        cin >> n >> m;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(),a.end());
        ll ans = 0,sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum <= m)
            {
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