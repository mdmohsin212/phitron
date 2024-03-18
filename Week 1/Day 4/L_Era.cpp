#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ans = max(ans, x - i);
        }
        cout << ans << "\n";
    }
    return 0;
}