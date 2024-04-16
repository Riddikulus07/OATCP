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
 int fx(vector<vector<int>>& matrix) {
    int n = matrix.size(); 
    int m = matrix[0].size();

    vector<int> row(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            row[i] |= matrix[i][j] << (m - j);
        }
    }

    int ans = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int bits = __builtin_popcount(row[i] & row[j]);
            int count = bits * (bits - 1) / 2;
            ans += count;
        }
    }

    return ans;
}
int main()
{
      // Open input and output files
    freopen("sample_in.txt", "r", stdin);
    freopen("sample_out.txt", "w", stdout);
   int n;
   cin>>n;
    vector<vector<int>>b(n,vector<int>(n));
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < n; j++)
    {
        cin>>b[i][j];
    }
    
   }
   int result = fx(b);

    cout << result << endl;
          // Close files
    fclose(stdin);
    fclose(stdout);

    return 0;}