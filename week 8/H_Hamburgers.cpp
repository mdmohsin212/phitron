#include <bits/stdc++.h>
#define ll long long
#define ln '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    ll na, nb, nc, pb, ps, pc, r, a = 0, b = 0, c = 0;
    cin >> s;
    cin >> na >> nb >> nc >> pb >> ps >> pc >> r;
    for (char i : s)
    {
        if (i == 'B')   a++;
        else if (i == 'S')  b++;
        else if (i == 'C')  c++;
    }
    ll l = 0, h = 1e15, mid, x, y, z, cost;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        x = max(0LL, a * mid - na);
        y = max(0LL, b * mid - nb);
        z = max(0LL, c * mid - nc);
        cost = x * pb + y * ps + z * pc;

        if (cost == r)
        {
            cout << mid << ln;
            return 0;
        }
        else if (cost > r)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << h << ln;

    return 0;
}
