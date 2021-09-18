---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/dinic.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a), end(a)\n#define\
    \ rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\n\
    #define SZ(x) ((int)(x).size())\n#define pb(x) push_back(x)\n#define eb(x) emplace_back(x)\n\
    #define vsum(x) reduce(all(x))\n#define vmax(a) *max_element(all(a))\n#define\
    \ vmin(a) *min_element(all(a))\n#define LB(c, x) distance((c).begin(), lower_bound(all(c),\
    \ (x)))\n#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))\n#define\
    \ mp make_pair\n#define endl '\\n'\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing ld = long double;\nusing Pi = pair<int, int>;\nusing Pl =\
    \ pair<ll, ll>;\nusing Vi = vector<int>;\nusing Vl = vector<ll>;\nusing Vc = vector<char>;\n\
    using VVi = vector<vector<int>>;\nusing VVl = vector<vector<ll>>;\nusing VVc =\
    \ vector<vector<char>>;\nconstexpr ll inf = 1000000000ll;\nconstexpr ll INF =\
    \ 4000000004000000000LL;\nconstexpr ld eps = 1e-15;\nconstexpr ld PI = 3.141592653589793;\n\
    constexpr int popcnt(ull x) { return __builtin_popcountll(x); }\ntemplate <typename\
    \ T> using mat = vector<vector<T>>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1,\
    \ -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> constexpr T mypow(T x, ll n) {\n    T ret = 1;\n    while (n) {\n       \
    \ if (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n    }\n    return ret;\n\
    }\nconstexpr ll modpow(ll x, ll n, ll mod) {\n    ll ret = 1;\n    while (n) {\n\
    \        if (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n        x %=\
    \ mod;\n        ret %= mod;\n    }\n    return ret;\n}\ntemplate <typename T>\
    \ T xor64(T lb, T ub) {\n    static ull x = 88172645463325252ull;\n    x ^= x\
    \ << 7;\n    return lb + (x ^= x >> 9) % (ub - lb);\n}\nconstexpr ll safemod(ll\
    \ x, ll mod) { return (x % mod + mod) % mod; }\ntemplate <typename T> constexpr\
    \ T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> bool chmin(T &a, const U &b) { return a > b ? a = b,\
    \ true : false; }\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const pair<T, U> &a) {\n    os << \"(\" << a.first << \", \" << a.second\
    \ << \")\";\n    return os;\n}\ntemplate <typename T, typename U, typename V>\
    \ ostream &operator<<(ostream &os, const tuple<T, U, V> &a) {\n    os << \"(\"\
    \ << get<0>(a) << \", \" << get<1>(a) << \", \" << get<2>(a) << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ set<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\ntemplate <typename T> void print(const T\
    \ &a) { cout << a << endl; }\ntemplate <typename T> void print(const vector<T>\
    \ &v) {\n    for (auto &e : v) cout << e << \" \";\n    cout << endl;\n}\ntemplate\
    \ <typename T> void scan(vector<T> &a) {\n    for (auto &i : a) cin >> i;\n}\n\
    struct timer {\n    clock_t start_time;\n    void start() { start_time = clock();\
    \ }\n    int lap() {\n        // return x ms.\n        return (clock() - start_time)\
    \ * 1000 / CLOCKS_PER_SEC;\n    }\n};\ntemplate <typename T = int> struct Edge\
    \ {\n    int from, to;\n    T cost;\n    int idx;\n\n    Edge() = default;\n\n\
    \    Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost),\
    \ idx(idx) {}\n\n    operator int() const { return to; }\n};\ntemplate <typename\
    \ T = int> struct Graph {\n    vector<vector<Edge<T>>> g;\n    int es;\n\n   \
    \ Graph() = default;\n\n    explicit Graph(int n) : g(n), es(0) {}\n\n    size_t\
    \ size() const { return g.size(); }\n\n    void add_directed_edge(int from, int\
    \ to, T cost = 1) { g[from].emplace_back(from, to, cost, es++); }\n\n    void\
    \ add_edge(int from, int to, T cost = 1) {\n        g[from].emplace_back(from,\
    \ to, cost, es);\n        g[to].emplace_back(to, from, cost, es++);\n    }\n\n\
    \    void read(int M, int padding = -1, bool weighted = false, bool directed =\
    \ false) {\n        for (int i = 0; i < M; i++) {\n            int a, b;\n   \
    \         cin >> a >> b;\n            a += padding;\n            b += padding;\n\
    \            T c = T(1);\n            if (weighted) cin >> c;\n            if\
    \ (directed)\n                add_directed_edge(a, b, c);\n            else\n\
    \                add_edge(a, b, c);\n        }\n    }\n};\n#ifdef ONLINE_JUDGE\n\
    #define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename\
    \ Head, typename... Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr\
    \ << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n\
    #define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(itr i) const { return v < *i; }\n    };\n    ll\
    \ l, r;\n    rep(ll l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n \
    \   itr begin() const { return l; };\n    itr end() const { return r; };\n};\n\
    struct per {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n \
    \       void operator++() { --v; }\n        ll operator*() const { return v; }\n\
    \        bool operator!=(itr i) const { return v > *i; }\n    };\n    ll l, r;\n\
    \    per(ll l, ll r) : l(l), r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\nstruct\
    \ io_setup {\n    static constexpr int PREC = 20;\n    io_setup() {\n        cout\
    \ << fixed << setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n\
    \    };\n} iOS;\n#line 4 \"graph/dinic.hpp\"\n\ntemplate <typename S> struct dinic\
    \ {\n    using C = typename S::cap_t;\n    struct _edge {\n        int to, rev;\n\
    \        C cap;\n    };\n    struct edge {\n        int from, to;\n        C cap,\
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
    \ 0; }\n    static cap_t inf() { return numeric_limits<cap_t>::max(); }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ dinic {\n    using C = typename S::cap_t;\n    struct _edge {\n        int to,\
    \ rev;\n        C cap;\n    };\n    struct edge {\n        int from, to;\n   \
    \     C cap, flow;\n    };\n    vector<vector<_edge>> g;\n    vector<int> level,\
    \ iter;\n    vector<pair<int, int>> pos;\n    dinic(int n) : g(n), level(n), iter(n)\
    \ {}\n    int add_edge(int from, int to, C cap) {\n        int from_id = g[from].size();\n\
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
    \ 0; }\n    static cap_t inf() { return numeric_limits<cap_t>::max(); }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/dinic.hpp
  requiredBy: []
  timestamp: '2021-09-18 20:49:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Arrangement_of_pieces.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
documentation_of: graph/dinic.hpp
layout: document
title: "Dinic \u6CD5"
---

## 概要
- Dinic 法を用いて、最大フロー問題を解く。

## 詳細

- `<typename S> struct dinic`  
    Dinic 法を用いて最大フローを求める構造体。

    - `typename S`  
        テンプレート引数として与える構造体。

        - `using cap_t`  
            各頂点の距離を表す型。

        - `static cap_t zero()`  
            `cap_t` の零元を返す。

        - `static cap_t inf()`  
            `cap_t` の最大元を返す。

    - `(constructor)(int n)`  
        頂点数 $n$ で初期化。

    - `int add_edge(int from, int to, S::cap_t cap)`  
        頂点 $from$ から頂点 $to$ に容量 $cap$ の辺を張り、辺番号を返す。$0 \leq cap$ を要求。

    - `void change_edge(int i, S::cap_t new_cap, S::cap_t new_flow)`  
        辺 $i$ の容量を $new\,cap$ に、流量を $new\,flow$ に変更する。$0 \leq new\,flow \leq new\,cap$ を要求。

    - `S::cap_t flow(int s, int t, S::cap_t lim = S::inf())`  
        頂点 $s$ から $t$ へ、流量 $lim$ に達するまで流す。$O(n^2 m)$ 時間。辺の容量が高々 $k$ のとき、$O(km^{3/2})$ 時間。辺の容量が高々 $k$ で多重辺がないとき、$O(kn^{2/3}m)$ 時間。二部マッチングで用いる場合、$O(\sqrt{n}m)$ 時間。

    - `struct edge`
        - `int from, to`  
            始点と終点。
        
        - `S::cap_t cap, flow`  
            容量と流量。

    - `edge get_edge(int i)`  
        辺 `i` を返す。

    - `vector<edge> edges()`  
        番号順に並んだ辺の `vector` を返す。

    - `vector<bool> cut(int s)`  
        残余グラフ上で各頂点に到達できるかどうかの `bool` 値を要素とする `vector` を返す。

- `struct ll_dinic`  
    距離やコストが `ll` 型であるような最大フロー問題を解くときに`dinic`にテンプレート引数 `S` として与える。

## 参考
- [ACL](https://atcoder.github.io/ac-library/production/document_ja/maxflow.html)
- [みさわさんの記事](https://misawa.github.io/others/flow/dinic_time_complexity.html)