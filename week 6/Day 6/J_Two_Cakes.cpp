#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b;
    cin >> n >> a >> b;
    
    auto cake = [&](ll pic){
        if ((a / pic) == 0 or (b / pic) == 0)
        {
            return false;
        }
        ll total = (a / pic) + (b / pic);
        return total >= n;
    };
    ll l = 1, r = max(a,b), mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (cake(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << ln;
    return 0;
}