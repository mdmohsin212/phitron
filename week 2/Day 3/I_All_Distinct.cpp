#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
#define N 100005
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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        if ((n - s.size()) % 2 == 0)
        {
            cout << s.size() << ln;
        }
        else
        {
            cout << s.size() - 1 << ln;
        }
    }
    return 0;
}