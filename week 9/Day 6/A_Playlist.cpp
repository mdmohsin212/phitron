#include<bits/stdc++.h>
using namespace std;
#define fastio()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln '\n'
#define gcd(a, b) __gcd(a, b)
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
const ll N = 2e5 + 9;
const ll mod = 1e9 + 7;

void slove(){
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int,int> mp;
    int cnt = 0, ans = 1;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        while (mp[a[i]] > 1)
        {
            mp[a[cnt]]--;
            cnt++;
        }
        ans = max(ans,i + 1 - cnt);
    }
    cout << ans << ln;
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}