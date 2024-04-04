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
        ll a[n][n - 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                mp[a[i][0]]++;
            }
        }
        ll mx_val = 0, value = 0;
        for (auto &val : mp)
        {
            if (val.second > mx_val)
            {
                mx_val = val.second;
                value = val.first;
            }
        }
        cout << value << " ";
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (value != a[i][0])
            {
                ans = i;
                break;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            cout << a[ans][i] << " ";
        }
        cout << ln;
    }
    return 0;
}