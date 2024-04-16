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
 
int main()
{
  // Open input and output files
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    int n;
    cin >> n;
    if (n <= 0) {
        if (n == 1) {
            int x;
            cin >> x;
        }
        cout << 0;
        return 0;
    }
    vector<ll> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<ll> dp(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += nums[i];
        dp[0] += (i * nums[i]);
    }

    ll ans = dp[0], idx = n - 1;
    for (int i = 1; i < n; i++) {
        dp[i] = sum + dp[i - 1] - (n * nums[idx]);
        --idx;
        ans = max(dp[i], ans);
    }
    cout << ans;

    // Close files
    fclose(stdin);
    fclose(stdout);

}