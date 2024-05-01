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
vector<vector<int>> fx(vector<vector<int>> &pairs)
{
    unordered_map<int, unordered_set<int>> g;
    unordered_map<int, pair<int, int>> v;
    for (auto p : pairs)
    {
        g[p[0]].insert(p[1]);
        v[p[1]].first++;  // inv
        v[p[0]].second++; // outv
    }
    auto getsrc = [&]()
    {
        int src;
        for (auto [e, d] : v)
        {
            auto [in, out] = d;
            if (out - in == 1)
            {
                src = e;
                break;
            }
            src = e;
        }
        return src;
    };
    int src = getsrc();
    deque<int> path;
    stack<int> st;
    st.push(src);
    while (!st.empty())
    {
        int u = st.top();
        if (g[u].size() == 0)
        {
            path.push_front(u);
            st.pop();
        }
        else
        {
            int v = *g[u].begin();
            g[u].erase(v);
            st.push(v);
        }
    }
    vector<vector<int>> ans;
    int n = path.size();
    for (int i = 0; i < n - 1; ++i)
    {
        ans.push_back({path[i], path[i + 1]});
    }
    return ans;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<vector<int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp[i].push_back(x);
        vp[i].push_back(y);
    }
    vector<vector<int>> ans = fx(vp);
    cout << "\n";
    if (ans.size() != n)
    {
        cout << "No valid arrangement found !" << "\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << ans[i][0] << " " << ans[i][1] << "\n";
        }
    }
}