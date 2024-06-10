#include<bits/stdc++.h>
using namespace std;
#define fastio()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ln '\n'
#define gcd(a, b) __gcd(a, b)
#define ll long long
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
const ll N = 1e5 + 9;
const ll mod = 1e9 + 7;

void solve(){
    string s;
    cin >> s;
    map<char,int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    char c;
    for(auto chr : mp){
        if(chr.second % 2){
            c = chr.first;
            cnt++;
        }
    }
    if ((s.size() % 2 == 0 and cnt > 0) or cnt > 1){
        cout << "NO SOLUTION";
    }
    else
    {
        string ans = "";
        for(auto chr : mp){
            for (int i = 1; i <= chr.second / 2; i++)
            {
                ans += chr.first;
            }
        }
        cout << ans;
        if(s.size() % 2) cout << c;
        reverse(ans.begin(),ans.end());
        cout << ans;
    }
    
}

int main(int argc, char const *argv[])
{
    fastio();
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}