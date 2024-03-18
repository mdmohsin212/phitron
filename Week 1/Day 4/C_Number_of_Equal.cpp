#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (l < n && r < m)
    {
        ll curr = a[l], cnt1 = 0, cnt2 = 0;
        while (a[l] == curr && l < n)
        {
            cnt1++;
            l++;
        }
        while (b[r] < curr && r < m)
        {
            r++;
        }
        
        while (b[r] == curr && r < m)
        {
            cnt2++;
            r++;
        }
        ans += (cnt1 * cnt2);
    }
    cout << ans << '\n';
    return 0;
}