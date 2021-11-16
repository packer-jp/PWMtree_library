---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/dinic.hpp
    title: "Dinic \u6CD5"
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/challenges/sources/VPC/TUATPC/3198
    links:
    - https://onlinejudge.u-aizu.ac.jp/challenges/sources/VPC/TUATPC/3198
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp\"\
    \n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/VPC/TUATPC/3198\"\
    \n#line 2 \"graph/dinic.hpp\"\n\n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a),\
    \ rend(a)\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\nusing ll = long\
    \ long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll\
    \ = vector<ll>;\nconstexpr double PI = 3.14159265358979323846;\nconstexpr ll dy[9]\
    \ = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1,\
    \ -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr\
    \ ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll\
    \ cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> constexpr T mypow(T x, ll n) {\n    T ret\
    \ = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x *= x;\n     \
    \   n >>= 1;\n    }\n    return ret;\n}\nconstexpr ll modpow(ll x, ll n, ll mod)\
    \ {\n    ll ret = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x\
    \ *= x;\n        n >>= 1;\n        x %= mod;\n        ret %= mod;\n    }\n   \
    \ return ret;\n}\ntemplate <typename T> T xor64(T lb, T ub) {\n    static ull\
    \ x = 88172645463325252ull;\n    x ^= x << 7;\n    return lb + (x ^= x >> 9) %\
    \ (ub - lb);\n}\nconstexpr ll safemod(ll x, ll mod) { return (x % mod + mod) %\
    \ mod; }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T> T make_vector(T &&a) { return a; }\ntemplate <typename... Ts> auto make_vector(int\
    \ h, Ts &&... ts) { return vector(h, make_vector(ts...)); }\ntemplate <typename\
    \ T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a) {\n   \
    \ os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n}\n\
    template <typename T, typename U, typename V> ostream &operator<<(ostream &os,\
    \ const tuple<T, U, V> &a) {\n    os << \"(\" << get<0>(a) << \", \" << get<1>(a)\
    \ << \", \" << get<2>(a) << \")\";\n    return os;\n}\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto\
    \ itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const set<T> &a) {\n    os << \"(\";\n    for\
    \ (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const multiset<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate\
    \ <typename T, typename U> ostream &operator<<(ostream &os, const map<T, U> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug()\
    \ { cerr << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head\
    \ &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr\
    \ << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \"\
    : \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep {\n  \
    \  struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll l, ll r) : l(l),\
    \ r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const { return l; };\n\
    \    itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n    \
    \    ll v;\n        itr(ll v) : v(v) {}\n        void operator++() { --v; }\n\
    \        ll operator*() const { return v; }\n        bool operator!=(itr i) const\
    \ { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l), r(r) {}\n\
    \    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n\ntemplate <ll\
    \ MOD = 1000000007> struct modint {\n    ll val;\n    modint(ll val = 0) : val(val\
    \ >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return\
    \ MOD; }\n    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0,\
    \ t;\n        while (b > 0) {\n            t = a / b;\n            swap(a -= t\
    \ * b, b);\n            swap(u -= t * v, v);\n        }\n        return modint(u);\n\
    \    }\n    modint pow(ll k) const {\n        modint ret = 1, mul = val;\n   \
    \     while (k) {\n            if (k & 1) ret *= mul;\n            mul *= mul;\n\
    \            k >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    modint\
    \ operator+() const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend bool operator==(const modint &a, const modint &b) { return a.val\
    \ == b.val; }\n    friend bool operator!=(const modint &a, const modint &b) {\
    \ return rel_ops::operator!=(a, b); }\n    friend modint operator+(const modint\
    \ &a, const modint &b) { return modint(a) += b; }\n    friend modint operator-(const\
    \ modint &a, const modint &b) { return modint(a) -= b; }\n    friend modint operator*(const\
    \ modint &a, const modint &b) { return modint(a) *= b; }\n    friend modint operator/(const\
    \ modint &a, const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\ntemplate <typename F> ll bisect(ll ok,\
    \ ll ng, F f) {\n    while (abs(ok - ng) > 1) {\n        ll mid = (ok + ng) /\
    \ 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n\nint main()\
    \ {}\n#line 4 \"graph/dinic.hpp\"\n\ntemplate <typename S> struct dinic {\n  \
    \  using C = typename S::cap_t;\n    struct _edge {\n        int to, rev;\n  \
    \      C cap;\n    };\n    struct edge {\n        int from, to;\n        C cap,\
    \ flow;\n    };\n    vector<vector<_edge>> g;\n    vector<int> level, iter;\n\
    \    vector<pair<int, int>> pos;\n    dinic(int n) : g(n), level(n), iter(n) {}\n\
    \    int add_edge(int from, int to, C cap) {\n        int from_id = g[from].size();\n\
    \        int to_id = g[to].size();\n        if (from == to) ++to_id;\n       \
    \ g[from].push_back({to, to_id, cap});\n        g[to].push_back({from, from_id,\
    \ S::zero()});\n        pos.emplace_back(from, from_id);\n        return pos.size()\
    \ - 1;\n    }\n    void change_edge(int i, C new_cap, C new_flow) {\n        _edge\
    \ &e = g[pos[i].first][pos[i].second], &re = g[e.to][e.rev];\n        e.cap =\
    \ new_cap - new_flow;\n        re.cap = new_flow;\n    }\n    C flow(int s, int\
    \ t, C lim = S::inf()) {\n        auto bfs = [&](int s) -> void {\n          \
    \  fill(level.begin(), level.end(), -1);\n            queue<int> q;\n        \
    \    level[s] = 0;\n            q.push(s);\n            while (!q.empty()) {\n\
    \                int v = q.front();\n                q.pop();\n              \
    \  for (_edge &e : g[v]) {\n                    if (e.cap == S::zero() || level[e.to]\
    \ >= 0) continue;\n                    level[e.to] = level[v] + 1;\n         \
    \           q.push(e.to);\n                }\n            }\n        };\n    \
    \    auto dfs = [&](auto dfs, int v, int t, C lim) -> C {\n            if (v ==\
    \ t) return lim;\n            for (int &i = iter[v]; i < g[v].size(); ++i) {\n\
    \                _edge &e = g[v][i];\n                if (level[v] >= level[e.to]\
    \ || e.cap == S::zero()) continue;\n                C d = dfs(dfs, e.to, t, lim\
    \ > e.cap ? e.cap : lim);\n                if (d == S::zero()) continue;\n   \
    \             e.cap -= d;\n                g[e.to][e.rev].cap += d;\n        \
    \        return d;\n            }\n            return S::zero();\n        };\n\
    \        C ret = S::zero();\n        while (true) {\n            bfs(s);\n   \
    \         if (level[t] < 0 || lim == S::zero()) return ret;\n            fill(iter.begin(),\
    \ iter.end(), 0);\n            C f;\n            while ((f = dfs(dfs, s, t, lim))\
    \ != S::zero()) {\n                ret += f;\n                lim -= f;\n    \
    \        }\n        }\n    }\n    edge get_edge(int i) const {\n        _edge\
    \ e = g[pos[i].first][pos[i].second], re = g[e.to][e.rev];\n        return {pos[i].first,\
    \ e.to, e.cap + re.cap, re.cap};\n    }\n    vector<edge> edges() const {\n  \
    \      vector<edge> ret(pos.size());\n        for (int i : rep(pos.size())) ret[i]\
    \ = get_edge(i);\n        return ret;\n    }\n    vector<bool> cut(int s) const\
    \ {\n        vector<bool> ret(g.size());\n        auto dfs = [&](auto dfs, int\
    \ v) -> void {\n            if (ret[v]) return;\n            ret[v] = true;\n\
    \            for (_edge e : g[v]) {\n                if (e.cap) dfs(dfs, e.to);\n\
    \            }\n        };\n        dfs(dfs, s);\n        return ret;\n    }\n\
    };\n\nstruct ll_dinic {\n    using cap_t = ll;\n    static cap_t zero() { return\
    \ 0; }\n    static cap_t inf() { return numeric_limits<cap_t>::max(); }\n};\n\
    #line 3 \"test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp\"\n\n\
    #line 5 \"test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp\"\nusing\
    \ namespace std;\n\nint main() {\n    ll n, m;\n    cin >> n >> m;\n    dinic<ll_dinic>\
    \ dinic(n * 2 + 2);\n    vector id(n, Vl(n, -1));\n    ll s = n * 2, t = n * 2\
    \ + 1;\n    for (ll i : rep(n)) {\n        dinic.add_edge(s, i, 1);\n        dinic.add_edge(i\
    \ + n, t, 1);\n    }\n    for (ll i : rep(m)) {\n        ll a, b;\n        cin\
    \ >> a >> b, --a, --b;\n        id[a][b] = dinic.add_edge(a, b + n, 1);\n    }\n\
    \    ll q, f = dinic.flow(s, t);\n    cin >> q;\n    for (ll i : rep(q)) {\n \
    \       ll x, y;\n        cin >> x >> y, --x, --y;\n        if (id[x][y] == -1)\
    \ {\n            id[x][y] = dinic.add_edge(x, y + n, 1);\n        } else {\n \
    \           auto e = dinic.get_edge(id[x][y]);\n            if (e.flow > 0) {\n\
    \                dinic.flow(x, s, 1);\n                dinic.flow(t, y + n, 1);\n\
    \                --f;\n            }\n            dinic.change_edge(id[x][y],\
    \ 0, 0);\n            id[x][y] = -1;\n        }\n        f += dinic.flow(s, t);\n\
    \        if (f == n) {\n            cout << \"Yes\" << endl;\n        } else {\n\
    \            cout << \"No\" << endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/challenges/sources/VPC/TUATPC/3198\"\
    \n#include \"../../graph/dinic.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nint main() {\n    ll n, m;\n    cin >> n >> m;\n    dinic<ll_dinic>\
    \ dinic(n * 2 + 2);\n    vector id(n, Vl(n, -1));\n    ll s = n * 2, t = n * 2\
    \ + 1;\n    for (ll i : rep(n)) {\n        dinic.add_edge(s, i, 1);\n        dinic.add_edge(i\
    \ + n, t, 1);\n    }\n    for (ll i : rep(m)) {\n        ll a, b;\n        cin\
    \ >> a >> b, --a, --b;\n        id[a][b] = dinic.add_edge(a, b + n, 1);\n    }\n\
    \    ll q, f = dinic.flow(s, t);\n    cin >> q;\n    for (ll i : rep(q)) {\n \
    \       ll x, y;\n        cin >> x >> y, --x, --y;\n        if (id[x][y] == -1)\
    \ {\n            id[x][y] = dinic.add_edge(x, y + n, 1);\n        } else {\n \
    \           auto e = dinic.get_edge(id[x][y]);\n            if (e.flow > 0) {\n\
    \                dinic.flow(x, s, 1);\n                dinic.flow(t, y + n, 1);\n\
    \                --f;\n            }\n            dinic.change_edge(id[x][y],\
    \ 0, 0);\n            id[x][y] = -1;\n        }\n        f += dinic.flow(s, t);\n\
    \        if (f == n) {\n            cout << \"Yes\" << endl;\n        } else {\n\
    \            cout << \"No\" << endl;\n        }\n    }\n}"
  dependsOn:
  - graph/dinic.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
  requiredBy: []
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
---
