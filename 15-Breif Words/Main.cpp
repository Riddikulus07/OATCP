#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];
const ll mod = 1e7 + 10;*/
using namespace std;
 
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
 
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
 
int exp(int x, int n, int mod)
{
    int res = 1;
    x = x % mod;
    while (n > 0)
    {
        if (n & 1)
            res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
 
    return res;
}
/*ll ff(ll x)
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < xz; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
}*/
 
vector<string> fx(string &str, string xx, int ii, int n)
{
    vector<string> res;

    if(n == 0)
    {
        res.push_back(xx);
        return res;
    }

    if(ii == str.length())
    {
        return res;
    }

    vector<string> xy = fx(str, xx + str[ii], ii + 1, n - 1);
    res.insert(res.end(), xy.begin(), xy.end());

    vector<string> xz = fx(str, xx, ii + 1, n);
    res.insert(res.end(), xz.begin(), xz.end());

    return res;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   int n;
    set<string> ss;

    cin >> n;

    vector<vector<string>> ans;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;

        vector<string> temp;
        for(int i = 1; i <= 4; ++i)
        {
            vector<string> vv = fx(x, "", 0, i);
            for(int j = 0; j < vv.size(); j++)
            {
                if(ss.find(vv[j]) == ss.end())
                {
                    temp.push_back(vv[j]);
                    ss.insert(vv[j]);
                }
            }
        }

        ans.push_back(temp);
    }

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "\n";
        }
        cout << "\n" << "\n";
    }

}