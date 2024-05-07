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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll mn= abs(v[0] - v[1]), mn2 = -1e9;
        for (int i = 0; i < n - 1; i++)
        {
            mn2 = max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            mn = min(mn, mn2);
        }
        mn = min(mn, abs(v[n - 1] - v[n - 2]));
        cout << mn << endl;
    }
    return 0;
}