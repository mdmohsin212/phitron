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
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void slove(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> cnt(N, 0);
    for (int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    int ans = 1;
    for (int i = 2; i <= N; i++)
    {
        int count = 0;
        for (int j = i; j <= N; j += i){
            count += cnt[j];
        }
        ans = max(ans, count);
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