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
    ll cnt = 1;
    while (true)
    {
        ll n,m;
        cin >> n >> m;
        if (n == 0 and m == 0)
        {
            break;
        }
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        cout << "CASE# " << cnt << ":" << endl;
        while (m--)
        {
            ll x;
            cin >> x;
            auto ans = lower_bound(a.begin(),a.end(),x);
            if (*ans == x and ans != a.end())
            {
                cout << x << " found at " << ans - a.begin() + 1 << ln;
            }
            else
            {
                cout << x << " not found" << ln;
            }
            
        }
        cnt++;
    }
    
    return 0;
}