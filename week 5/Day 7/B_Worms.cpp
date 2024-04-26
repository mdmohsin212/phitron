#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const int N = 1e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx = 1;
    cin >> n;
    vi a(1000006);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (x--)
        {
            a[idx] = i;
            idx++;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y;
        cout << a[y] << ln;
    }

    return 0;
}