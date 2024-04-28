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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans[30];
        memset(ans,0,sizeof(ans));
        ll i = 0;
        while (i < 30)
        {
            ll nm = (1 << i);
            ll j = 0;
            while (j < n)
            {
                if ((a[j] & nm) != 0){
                    ans[i]++;
                }
                j++;
            }
            i++;
        }
        ll k = 1;
        while (k <= n)
        {
            bool flag = false;
            ll j = 0;
            while (j < 30)
            {
                if ((ans[j] % k) != 0)
                {
                    flag = true;
                    break;
                }
                j++;
            }
            if (flag == 0){
                cout << k << " ";
            }
            k++;
        }
        cout << ln;
    }
    return 0;
}