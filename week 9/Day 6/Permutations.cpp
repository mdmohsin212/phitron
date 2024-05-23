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
    ll n;
    cin >> n;
    if (n <= 3 && n > 1)
    {
        cout << "NO SOLUTION" << ln;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
    }
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