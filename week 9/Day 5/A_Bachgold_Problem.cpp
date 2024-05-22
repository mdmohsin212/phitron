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
const ll N = 2e5 + 9;
const ll mod = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    vector<int> primes;
    if (n % 2 == 1)
    {
        primes.push_back(3);
        n -= 3;
    }
    while (n > 0)
    {
        primes.push_back(2);
        n -= 2;
    }
    cout << primes.size() << ln;
    for (auto value : primes)
    {
        cout << value << " ";
    }
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
