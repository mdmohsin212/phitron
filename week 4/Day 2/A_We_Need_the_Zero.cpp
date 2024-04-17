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
        int n;
        cin >> n;
        vi a(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
        if (n % 2)
        {
            cout << x << ln;
        }
        else
        {
            if (x == 0)
            {
                cout << 0 << ln;
            }
            else
            {
                cout << -1 << ln;
            }
        }
    }
    return 0;
}