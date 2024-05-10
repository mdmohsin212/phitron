#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 1e9 + 7;
ll power(ll base, ll n)
{
    ll total = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            total = (total * base) % N;
            n--;
        }
        else
        {
            base = (base * base) % N;
            n /= 2;
        }
    }
    return total % N;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        string s;
        while (k)
        {
            if(k % 2 == 0) s += '0';
            else s += '1';
            k /= 2;
        }
        ll ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1') ans += power(n,i);
            ans %= N;
        }
        cout << ans << ln;
    }
    return 0;
}