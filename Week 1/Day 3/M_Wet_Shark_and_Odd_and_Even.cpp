#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 != 0 && a[i] < mn)
        {
            mn = a[i];
        }
        
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - mn << endl;
    }
    return 0;
}