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
 ll xx(vector<ll> &costs, ll coins)
{

    sort(costs.begin(), costs.end());
    ll ans = 0;
    for (ll cc : costs) {
        if (coins >= cc) {
            coins -= cc;
            ans++;
            continue;
        } 
            break;
    }
    return ans;
}

int main()
{
    // Open input and output files
    freopen("input3.txt", "r", stdin);
    freopen("output3.txt", "w", stdout);

    ll n;
    cin >> n;
    
    vector<ll> costs(n);
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin>>costs[i];
    }
    
    ll coins;
    cin>>coins;
    ll res=xx(costs,coins);
    cout<<res<<endl;
    // Close files
    fclose(stdin);
    fclose(stdout);

}