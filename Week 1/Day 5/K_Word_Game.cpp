#include <bits/stdc++.h>
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
        map<string, int> mp;
        vector<string> a[3];
        for (int i = 0; i < 3; i++)
        {
            a[i].resize(n);
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                mp[a[i][j]]++;
            }
        }
        int cnt[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[a[i][j]] == 1)
                {
                    cnt[i] += 3;
                }
                else if (mp[a[i][j]] == 2)
                {
                    cnt[i] += 1;
                }
            }
        }
        cout << cnt[0] << " " << cnt[1] << " " << cnt[2] << endl;
    }
    return 0;
}
