#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int cnt = 0;
                for (int k = 0; k < m; k++)
                {
                    cnt += abs(a[i][k] - a[j][k]);
                }
                ans = min(ans,cnt);
            }
        }
        cout << ans << ln;
    }
    return 0;
}