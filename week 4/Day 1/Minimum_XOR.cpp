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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, XOR = 0;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        ll ans = XOR;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, (XOR ^ a[i]));
        }
        cout << ans << ln;
    }
    return 0;
}