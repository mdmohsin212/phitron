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
        ll n;
        cin >> n;
        vi a(n);
        ll sum = 0, cnt = 0, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                cnt++;
            }
            sum += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }
        if (cnt % 2 == 1)
        {
            sum -= (2 * mn);
        }
        cout << sum << ln;
    }
    return 0;
}