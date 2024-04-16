#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];*/
const ll mod = 1e9 + 7;
using namespace std;
 
 int dp[101][101];
 
int a[101];
int b[101];
 
int n,m;
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
 int fn(int i, int j)
{
    if(i>=n or j>=m)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    int o1=0, o2, o3;
    if(abs(a[i]-b[j])<=1)
        o1 = 1 + fn(i+1,j+1);
    o2 = fn(i+1, j);
    o3 = fn(i, j+1);
    return dp[i][j] = max({o1,o2,o3});
}
int main()
{
    // File handling for input
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    memset(dp, -1, sizeof(dp));
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    cout<<fn(0,0);
    // Close the files after reading and writing
    fclose(stdin);
    fclose(stdout);


}