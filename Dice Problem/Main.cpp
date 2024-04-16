#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];
*/
const ll mod = 1e9+7;
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
 
ll countWays(ll n) {
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 1; i <= 6; i++) {
        for (ll j = i; j <= n; j++) {
            dp[j] += dp[j - i];
        }
    }
    return dp[n];
}

int main() {
    // Open input and output files
    ifstream inputFile("sample_in.txt");
    ofstream outputFile("sample_output.txt");

    // Check if files are opened successfully
    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    int t;
    inputFile >> t;
    while (t--) {
        ll targetSum;
        inputFile >> targetSum;
        if (targetSum < 0) {
            outputFile << "Not Possible" << endl;
        } else {
            outputFile << countWays(targetSum) << endl;
        }
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}