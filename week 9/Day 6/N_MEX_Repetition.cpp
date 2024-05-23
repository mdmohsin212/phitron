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
    ll n,k,mx;
    cin >> n >> k;
    vi a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    k = k % (n + 1);
    for (int i = 0; i <= n; i++)
    {
        if (!mp[i])
        {
            mx = i;
        }
    }
    ll idx;
    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        idx = i + k;
        if (idx < n){
            ans[idx] = a[i];
        }
        else if (idx == n){
            ans[n - i - 1] = mx;
        }
        else{
            ans[idx % (n + 1)] = a[i];
        }
    }
    for(auto value : ans){
        cout << value << " ";
    }
    cout << ln;
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}