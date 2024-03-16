#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }
    string ans = "";
    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
        {
            ans = i + 'a';
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "None" << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}