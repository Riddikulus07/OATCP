#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];*/
const ll mod = 1e9 +7;
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
bool static compare(ll a, ll b)
{
    string ptr = to_string(a), qtr = to_string(b);
    return ptr + qtr > qtr + ptr;
}
string xx(vector<ll> &nums)
{
    ll n = nums.size();
    sort(nums.begin(), nums.end(), compare);
    string ans;
    for (int i = 0; i < n; i++)
        ans += to_string(nums[i]);
    if (ans[0] == '0')
        return "0";
    return ans;
}
int main()
{
    // Open input and output files
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    ll n;
    
    vector<ll>v;
    while(cin>>n)
    {
        v.push_back(n);
    }
    string res = xx(v);
    cout << res << endl;
    // Close files
    fclose(stdin);
    fclose(stdout);

}