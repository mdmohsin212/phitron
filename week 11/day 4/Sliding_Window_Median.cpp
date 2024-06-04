#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void slove(){
    int n,k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    pbds<pair<int,int>> p;
    while (r < n)
    {
        p.insert({a[r],r});
        if ((r - l + 1) == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }
            auto val = *p.find_by_order(pos);
            cout << val.first << " ";
            p.erase({a[l],l});
            l++;
        }
        r++;
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