#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, n;
    cin >> k >> n;
    priority_queue<ll> pq;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        pq.push(a);
    }
    ll ans = 0;
    while (pq.size() >= k)
    {
        vi b;
        for (int i = 0; i < k; i++)
        {
            b.push_back(pq.top() - 1);
            pq.pop();
        }
        for (ll i : b)
        {
            if (i > 0)
            {
                pq.push(i);
            }
        }
        ans++;
    }
    cout << ans << ln;
    return 0;
}