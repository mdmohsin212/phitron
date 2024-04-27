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

    ll n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        auto ans = lower_bound(a.begin(),a.end(),x);
        auto ans2 = upper_bound(a.begin(),a.end(),x);
        if (ans == a.end())
        {
            if (a[n - 1] < x){
                cout << a[n - 1] << " ";
            }
            else{
                cout << "X" << " ";
            }
        }
        else
        {
            ll k = ans - a.begin();
            k--;
            if (k >= 0 and a[k] < x){
                cout << a[k] << " ";
            }
            else{
                cout << "X" << " ";
            }
        }
        if (ans2 == a.end())
        {
            cout << "X" << ln;
        }
        else
        {
            cout << *ans2 << ln;
        }
    }
    return 0;
}