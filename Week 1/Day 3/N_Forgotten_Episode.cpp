
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    ll total = (n * (n + 1)) / 2;
    cout << total - sum << endl;
    return 0;
}
