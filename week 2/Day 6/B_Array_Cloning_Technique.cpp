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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            mx = max(mx, mp[a[i]]);
        }
        if (mx == n)
        {
            cout << 0 << ln;
        }
        else
        {
            int ans = 1;
            while (mx != n)
            {
                if (mx + mx >= n)
                {
                    ans += (n - mx);
                    break;
                }
                ans += mx;
                mx *= 2;
                ans++;
            }
            cout << ans << ln;
        }
    }
    return 0;
}