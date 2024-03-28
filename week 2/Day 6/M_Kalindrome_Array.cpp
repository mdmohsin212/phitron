#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
bool plaindrom(vector<int> a)
{
    int l = 0, r = a.size() - 1;
    bool flag = true;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            flag = false;
            break;
        }
        l++;
        r--;
    }
    return flag;
}
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
        vector<int> a(n);
        vector<int> v1,v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b, c, l = 0, r = n - 1;
        bool good = true;
        while (l < r)
        {
            if (a[l] != a[r])
            {
                good = false;
                b = a[l];
                c = a[r];
                break;
            }
            l++;
            r--;
        }
        if (good)
        {
            cout << "YES" << ln;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b)
                {
                    v1.push_back(a[i]);
                }
                if (a[i] != c)
                {
                    v2.push_back(a[i]);
                }
            }
            if (plaindrom(v1) || plaindrom(v2))
            {
                cout << "YES" << ln;
            }
            else
            {
                cout << "NO" << ln;
            }
        }
    }
    return 0;
}
