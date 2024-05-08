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
        vi a;
        for (int i = 1; i <= n; i++)
        {
            a.push_back(2 * i);
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << ln;
    }
    return 0;
}