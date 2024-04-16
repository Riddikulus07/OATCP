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
 
int countPaths(int n, vector<vector<char>>& grid) {
    vector<vector<int>> dp(n, vector<int>(n, 0));

    dp[0][0] = (grid[0][0] == '.') ? 1 : 0;

    for (int i = 1; i < n; ++i) {
        if (grid[i][0] == '.') {
            dp[i][0] = dp[i - 1][0];
        }
    }
    for (int j = 1; j < n; ++j) {
        if (grid[0][j] == '.') {
            dp[0][j] = dp[0][j - 1];
        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[i][j] == '.') {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }
    return dp[n - 1][n - 1];
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

    int n;
    inputFile >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inputFile >> grid[i][j];
        }
    }
    
    // Calculate the number of paths
    ll numPaths = countPaths(n, grid);

    // Write the output to the file
    outputFile << "Number of paths: " << numPaths << endl;

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}