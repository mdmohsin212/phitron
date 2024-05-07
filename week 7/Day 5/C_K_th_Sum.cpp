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

    ll n, m;
    cin >> n >> m;
    vi a(n), b(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while (j < n)
        {
            ans.push_back(a[i] + b[j]);
            j++;
        }
    }
    a.clear(),b.clear();
    sort(ans.begin(), ans.end());
    cout << ans[m - 1] << ln;
    return 0;
}