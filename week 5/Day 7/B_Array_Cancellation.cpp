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
        ll n;
        cin >> n;
        vi a(n);
        ll ans = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 0)
            {
                pos += a[i];   
            }
            else
            {
                if (pos + a[i] >= 0)
                {
                    pos += a[i];
                }
                else
                {
                    a[i] += pos;
                    pos = 0;
                    ans += a[i];
                }
            }
        }
        cout << abs(ans) << ln;
    }
    return 0;
}