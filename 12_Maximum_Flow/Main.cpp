#include <bits/stdc++.h>
typedef long long ll;
/*const ll xz = 1e7 + 10;
ll fact[xz];
ll no[xz];
const ll mod = 1e7 + 10;*/
#define V 100 // Assuming a maximum number of vertices
using namespace std;
using namespace std::chrono;

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
bool bfs(int rG[V][V], int s, int t, int pp[]) {
    bool vis[V];
    memset(vis, 0, sizeof(vis));
    queue<int> q;
    q.push(s);
    vis[s] = true;
    pp[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < V; v++) {
            if (vis[v] == false && rG[u][v] > 0) {
                if (v == t) {
                    pp[v] = u;
                    return true;
                }
                q.push(v);
                pp[v] = u;
                vis[v] = true;
            }
        }
    }
    return false;
}

int fx(int gg[V][V], int s, int t) {
    int u, v;
    int rG[V][V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            rG[u][v] = gg[u][v];

    int pp[V];
    int mx = 0;
    auto ss = high_resolution_clock::now();
    while (bfs(rG, s, t, pp)) {
        int pf = INT_MAX;
        for (v = t; v != s; v = pp[v]) {
            u = pp[v];
            pf = min(pf, rG[u][v]);
        }
        for (v = t; v != s; v = pp[v]) {
            u = pp[v];
            rG[u][v] -= pf;
            rG[v][u] += pf;
        }
        mx += pf;
    }
    auto stop = high_resolution_clock::now();
    auto dt = duration_cast<microseconds>(stop - ss);
    cout << "Time taken by Ford-Fulkerson algorithm: " << dt.count() << " microseconds" << endl;
    return mx;
}

int main() {
    
    // Open input and output files
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n, src, dst;
    cin >> n;
    cin >> src>> dst;
    int gg[V][V] = {0}; 
    int n1, n2, cc;
    while (true) {
        cin >> n1;
        if (n1 == -1) break;
        cin >> n2 >> cc;
        gg[n1][n2] = cc; 
    }

    int ans = fx(gg, src, dst);
    cout << "Max FLow : "<<ans << endl;
    // Close files
    fclose(stdin);
    fclose(stdout);

    return 0;
}
