#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
void slove(){
    ll n;
    cin >> n;
    vi a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (a[i] > a[i - 1] and a[i] > a[i + 1])
        {
            yes;
            cout << i - 1 << " " << i << " " << i + 1 << ln;
            return;
        }
    }
    no;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}