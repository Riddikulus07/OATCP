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
 
int main()
{
    // Open input and output files
    freopen("sample_in.txt", "r", stdin);
    freopen("sample_out.txt", "w", stdout);

    ll n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    vector<ll> nums(n);
    for (ll i = 0; i < n; i++)
        cin >> nums[i];
    ll ans = LLONG_MIN;
    ll dp = 1;

    for (ll i = 0; i < n; i++) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i] == 0)
            dp = 1;
    }
    dp = 1;
    for (ll i = n - 1; i >= 0; i--) {
        dp *= nums[i];
        ans = max(ans, dp);
        if (nums[i] == 0)
            dp = 1;
    }
    cout << ans%mod;

    // Close files
    fclose(stdin);
    fclose(stdout);

}