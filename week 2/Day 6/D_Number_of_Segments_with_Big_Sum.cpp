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

    ll n, s;
    cin >> n >> s;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, ans = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s && l <= r)
        {
            ans += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << ln;
    return 0;
}