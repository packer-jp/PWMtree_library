---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/segtree.hpp
    title: Segment Tree
  - icon: ':heavy_check_mark:'
    path: graph/hld.hpp
    title: "HL \u5206\u89E3"
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
  bundledCode: "#line 1 \"test/unit/hld.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja\"\
    \n#line 2 \"data_structure/segtree.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
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
    \    };\n} iOS;\n#line 4 \"data_structure/segtree.hpp\"\n\ntemplate <typename\
    \ S> struct segtree {\n    using V = typename S::val_t;\n    int n, size;\n  \
    \  vector<V> val;\n    segtree(int n) : segtree(vector(n, S::e())) {}\n    segtree(const\
    \ vector<V> &src) : n(src.size()) {\n        for (size = 1; size < n; size <<=\
    \ 1) {}\n        val.resize(size << 1);\n        copy(all(src), val.begin() +\
    \ size);\n        for (int i : per(1, size)) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    void set(int i, const V &a) {\n        val[i += size]\
    \ = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n\
    \    }\n    V get(int i) const { return val[i + size]; }\n    V prod(int l, int\
    \ r) const {\n        V a = S::e(), b = S::e();\n        for (l += size, r +=\
    \ size; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) a = S::op(a, val[l++]);\n\
    \            if (r & 1) b = S::op(val[--r], b);\n        }\n        return S::op(a,\
    \ b);\n    }\n    template <typename F> int max_right(int l, F f) const {\n  \
    \      if (l == n) return n;\n        V a = S::e();\n        l += size;\n    \
    \    do {\n            while (~l & 1) l >>= 1;\n            if (!f(S::op(a, val[l])))\
    \ {\n                while (l < size) {\n                    l = l << 1;\n   \
    \                 if (f(S::op(a, val[l]))) a = S::op(a, val[l++]);\n         \
    \       }\n                return l - size;\n            }\n            a = S::op(a,\
    \ val[l++]);\n        } while ((l & -l) != l);\n        return n;\n    }\n   \
    \ template <typename F> int min_left(int r, F f) const {\n        if (r == 0)\
    \ return 0;\n        V a = S::e();\n        r += size;\n        do {\n       \
    \     r--;\n            while (r > 1 && r & 1) r >>= 1;\n            if (!f(S::op(val[r],\
    \ a))) {\n                while (r < size) {\n                    r = r << 1 |\
    \ 1;\n                    if (f(S::op(val[r], a))) a = S::op(val[r--], a);\n \
    \               }\n                return r + 1 - size;\n            }\n     \
    \       a = S::op(val[r], a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid {\n    using val_t = ll;\n    static val_t\
    \ op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return LLONG_MAX;\
    \ }\n};\n\nstruct sum_monoid {\n    using val_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return a + b; }\n    static val_t e() { return 0; }\n};\n#line\
    \ 2 \"graph/hld.hpp\"\n\n#line 4 \"graph/hld.hpp\"\n\nstruct hld {\n    vector<vector<int>>\
    \ g;\n    vector<int> par, sz, dep, in, out, head;\n    hld(int n) : g(n), par(n),\
    \ sz(n), dep(n), in(n), out(n), head(n) {}\n    void add_edge(int u, int v) {\
    \ g[u].push_back(v), g[v].push_back(u); }\n    vector<int> build(int root) {\n\
    \        auto dfs_sz = [&](auto dfs_sz, int v, int p) -> void {\n            sz[v]\
    \ = 1;\n            par[v] = p;\n            if (p != -1) dep[v] = dep[p] + 1;\n\
    \            for (int &u : g[v]) {\n                if (u == p) continue;\n  \
    \              dfs_sz(dfs_sz, u, v);\n                sz[v] += sz[u];\n      \
    \          if (sz[u] > sz[g[v][0]]) swap(u, g[v][0]);\n            }\n       \
    \ };\n        int t = 0;\n        auto dfs_hld = [&](auto dfs_hld, int v) -> int\
    \ {\n            in[v] = t++;\n            for (int i : rep(g[v].size())) {\n\
    \                int u = g[v][i];\n                if (u == par[v]) continue;\n\
    \                head[u] = (i == 0 ? head[v] : u);\n                dfs_hld(dfs_hld,\
    \ u);\n            }\n            return out[v] = t;\n        };\n        dfs_sz(dfs_sz,\
    \ root, -1);\n        head[root] = root;\n        dfs_hld(dfs_hld, root);\n  \
    \      return in;\n    }\n    int lca(int u, int v) const {\n        while (true)\
    \ {\n            if (in[u] > in[v]) swap(u, v);\n            if (head[u] == head[v])\
    \ return u;\n            v = par[head[v]];\n        }\n    }\n    int dist(int\
    \ u, int v) const { return dep[u] + dep[v] - 2 * dep[lca(u, v)]; }\n    vector<pair<int,\
    \ int>> get_path(int u, int v, bool edge) const {\n        vector<pair<int, int>>\
    \ a, b;\n        while (true) {\n            if (head[u] == head[v]) {\n     \
    \           if (edge) {\n                    if (in[u] > in[v]) a.emplace_back(in[u],\
    \ in[v] + 1);\n                    if (in[u] < in[v]) a.emplace_back(in[u] + 1,\
    \ in[v]);\n                } else {\n                    a.emplace_back(in[u],\
    \ in[v]);\n                }\n                break;\n            }\n        \
    \    if (in[u] > in[v]) {\n                a.emplace_back(in[u], in[head[u]]);\n\
    \                u = par[head[u]];\n            } else {\n                b.emplace_back(in[head[v]],\
    \ in[v]);\n                v = par[head[v]];\n            }\n        }\n     \
    \   a.insert(a.end(), b.rbegin(), b.rend());\n        return a;\n    }\n    pair<int,\
    \ int> get_subtree(int v, bool edge) const { return {in[v] + edge, out[v] - 1};\
    \ }\n};\n#line 4 \"test/unit/hld.test.cpp\"\n\n#line 6 \"test/unit/hld.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    int n = 10;\n    struct str {\n  \
    \      using val_t = string;\n        static val_t op(val_t a, val_t b) { return\
    \ a + b; }\n        static val_t e() { return \"\"; }\n    };\n    segtree<str>\
    \ st_fwd(n), st_rev(n);\n    vector<string> weight = {\"a\", \"b\", \"c\", \"\
    d\", \"e\", \"f\", \"g\", \"h\", \"i\", \"j\"};\n    hld hld(n);\n    hld.add_edge(7,\
    \ 2);\n    hld.add_edge(2, 6);\n    hld.add_edge(4, 2);\n    hld.add_edge(4, 3);\n\
    \    hld.add_edge(5, 4);\n    hld.add_edge(5, 1);\n    hld.add_edge(1, 0);\n \
    \   hld.add_edge(0, 9);\n    hld.add_edge(5, 8);\n    vector<int> in = hld.build(5);\n\
    \    for (int i : rep(n)) {\n        st_fwd.set(in[i], weight[i]);\n        st_rev.set(n\
    \ - in[i] - 1, weight[i]);\n    }\n    auto path = [&](int u, int v) {\n     \
    \   string ret = \"\";\n        vector<pair<int, int>> path = hld.get_path(u,\
    \ v, false);\n        for (int i : rep(path.size())) {\n            int l = path[i].first,\
    \ r = path[i].second;\n            if (l < r) {\n                ret += st_fwd.prod(l,\
    \ r + 1);\n            } else {\n                ret += st_rev.prod(n - l - 1,\
    \ n - r);\n            }\n        }\n        return ret;\n    };\n    auto subtree\
    \ = [&](int v) {\n        pair<int, int> subtree = hld.get_subtree(v, false);\n\
    \        return st_fwd.prod(subtree.first, subtree.second + 1);\n    };\n    assert(path(2,\
    \ 1) == \"cefb\");\n    assert(path(5, 3) == \"fed\");\n    assert(path(7, 4)\
    \ == \"hce\");\n    assert(path(4, 4) == \"e\");\n    assert(subtree(2) == \"\
    chg\");\n    assert(subtree(5) == \"fechgdbaji\");\n    assert(hld.dist(2, 0)\
    \ == 4);\n    assert(hld.dist(4, 1) == 2);\n\n    cout << \"Hello World\" << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja\"\
    \n#include \"../../data_structure/segtree.hpp\"\n#include \"../../graph/hld.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\nint main() {\n    int n\
    \ = 10;\n    struct str {\n        using val_t = string;\n        static val_t\
    \ op(val_t a, val_t b) { return a + b; }\n        static val_t e() { return \"\
    \"; }\n    };\n    segtree<str> st_fwd(n), st_rev(n);\n    vector<string> weight\
    \ = {\"a\", \"b\", \"c\", \"d\", \"e\", \"f\", \"g\", \"h\", \"i\", \"j\"};\n\
    \    hld hld(n);\n    hld.add_edge(7, 2);\n    hld.add_edge(2, 6);\n    hld.add_edge(4,\
    \ 2);\n    hld.add_edge(4, 3);\n    hld.add_edge(5, 4);\n    hld.add_edge(5, 1);\n\
    \    hld.add_edge(1, 0);\n    hld.add_edge(0, 9);\n    hld.add_edge(5, 8);\n \
    \   vector<int> in = hld.build(5);\n    for (int i : rep(n)) {\n        st_fwd.set(in[i],\
    \ weight[i]);\n        st_rev.set(n - in[i] - 1, weight[i]);\n    }\n    auto\
    \ path = [&](int u, int v) {\n        string ret = \"\";\n        vector<pair<int,\
    \ int>> path = hld.get_path(u, v, false);\n        for (int i : rep(path.size()))\
    \ {\n            int l = path[i].first, r = path[i].second;\n            if (l\
    \ < r) {\n                ret += st_fwd.prod(l, r + 1);\n            } else {\n\
    \                ret += st_rev.prod(n - l - 1, n - r);\n            }\n      \
    \  }\n        return ret;\n    };\n    auto subtree = [&](int v) {\n        pair<int,\
    \ int> subtree = hld.get_subtree(v, false);\n        return st_fwd.prod(subtree.first,\
    \ subtree.second + 1);\n    };\n    assert(path(2, 1) == \"cefb\");\n    assert(path(5,\
    \ 3) == \"fed\");\n    assert(path(7, 4) == \"hce\");\n    assert(path(4, 4) ==\
    \ \"e\");\n    assert(subtree(2) == \"chg\");\n    assert(subtree(5) == \"fechgdbaji\"\
    );\n    assert(hld.dist(2, 0) == 4);\n    assert(hld.dist(4, 1) == 2);\n\n   \
    \ cout << \"Hello World\" << endl;\n}"
  dependsOn:
  - data_structure/segtree.hpp
  - template.hpp
  - graph/hld.hpp
  isVerificationFile: true
  path: test/unit/hld.test.cpp
  requiredBy: []
  timestamp: '2021-09-18 20:49:55+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/unit/hld.test.cpp
layout: document
redirect_from:
- /verify/test/unit/hld.test.cpp
- /verify/test/unit/hld.test.cpp.html
title: test/unit/hld.test.cpp
---
