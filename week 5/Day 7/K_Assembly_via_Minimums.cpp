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
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) / 2;
        vi a(n), b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        a[n - 1] = 1e9;
        ll cnt = 1, i = 0, idx = n - cnt;
        while (n - cnt > 0)
        {
            a[i++] = b[idx - 1];
            cnt++;
            idx += n - cnt;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << ln;
    }
    return 0;
}