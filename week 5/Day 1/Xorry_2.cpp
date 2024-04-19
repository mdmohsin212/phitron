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
        ll cnt = 0, sum = 0, ans = 0;
        while (n)
        {   
            if ((n & 1) == 0)
            {
                cnt++;
                sum++;
            }
            else if ((n & 1) == 1)
            {
                ans = sum;
                sum = 0;
            }
            n >>= 1;
        }
        ll XOR = pow(2, cnt - ans);
        cout << XOR << ln;
    }
    return 0;
}