#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
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
        ll ans = n, cnt = 0;
        while (n > 1)
        {
            n /= 2;
            cnt++;
        }
        ll val = pow(2,cnt);
        cout << ans - val << " " << val << ln;
    }
    return 0;
}