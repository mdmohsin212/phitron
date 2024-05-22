#include <bits/stdc++.h>
using namespace std;
#define fastio()                  \
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
const ll N = 1e6 + 9;
const ll mod = 1e9 + 7;

void slove()
{
    ll n;
    cin >> n;
    vector<bool> prime(N, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < N; j += i)
                prime[j] = false;
        }
    }
    while (n--)
    {
        ll x;
        cin >> x;
        ll value = sqrt(x);
        if (value * value == x && prime[value])
        {
            yes;
        }
        else
        {
            no;
        }
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}