---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data_structure/segtree.hpp
    title: Segment Tree
  - icon: ':x:'
    path: graph/hld.hpp
    title: "HL \u5206\u89E3"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja
  bundledCode: "#line 1 \"test/unit/hld.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_A&lang=ja\"\
    \n#line 2 \"data_structure/segtree.hpp\"\n\n#line 1 \"template.hpp\"\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a), end(a)\n#define\
    \ rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr double PI = 3.14159265358979323846;\nconstexpr\
    \ ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1,\
    \ 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\n\
    constexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr\
    \ ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return\
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
    \ 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n#line 4 \"\
    data_structure/segtree.hpp\"\n\ntemplate <typename S> struct segtree {\n    using\
    \ V = typename S::val_t;\n    int n, size;\n    vector<V> val;\n    segtree(int\
    \ n) : segtree(vector(n, S::e())) {}\n    segtree(const vector<V> &src) : n(src.size())\
    \ {\n        for (size = 1; size < n; size <<= 1) {}\n        val.resize(size\
    \ << 1);\n        copy(all(src), val.begin() + size);\n        for (int i : per(1,\
    \ size)) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n    }\n    void set(int\
    \ i, const V &a) {\n        val[i += size] = a;\n        while (i >>= 1) val[i]\
    \ = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n    }\n    V get(int i) const {\
    \ return val[i + size]; }\n    V prod(int l, int r) const {\n        V a = S::e(),\
    \ b = S::e();\n        for (l += size, r += size; l < r; l >>= 1, r >>= 1) {\n\
    \            if (l & 1) a = S::op(a, val[l++]);\n            if (r & 1) b = S::op(val[--r],\
    \ b);\n        }\n        return S::op(a, b);\n    }\n    template <typename F>\
    \ int max_right(int l, F f) const {\n        if (l == n) return n;\n        V\
    \ a = S::e();\n        l += size;\n        do {\n            while (~l & 1) l\
    \ >>= 1;\n            if (!f(S::op(a, val[l]))) {\n                while (l <\
    \ size) {\n                    l = l << 1;\n                    if (f(S::op(a,\
    \ val[l]))) a = S::op(a, val[l++]);\n                }\n                return\
    \ l - size;\n            }\n            a = S::op(a, val[l++]);\n        } while\
    \ ((l & -l) != l);\n        return n;\n    }\n    template <typename F> int min_left(int\
    \ r, F f) const {\n        if (r == 0) return 0;\n        V a = S::e();\n    \
    \    r += size;\n        do {\n            r--;\n            while (r > 1 && r\
    \ & 1) r >>= 1;\n            if (!f(S::op(val[r], a))) {\n                while\
    \ (r < size) {\n                    r = r << 1 | 1;\n                    if (f(S::op(val[r],\
    \ a))) a = S::op(val[r--], a);\n                }\n                return r +\
    \ 1 - size;\n            }\n            a = S::op(val[r], a);\n        } while\
    \ ((r & -r) != r);\n        return 0;\n    }\n};\n\nstruct min_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return min(a, b); }\n \
    \   static val_t e() { return LLONG_MAX; }\n};\n\nstruct sum_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return a + b; }\n    static\
    \ val_t e() { return 0; }\n};\n#line 2 \"graph/hld.hpp\"\n\n#line 2 \"template.hpp\"\
    \nusing namespace std;\n\n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a),\
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
    \ 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n#line 4 \"\
    graph/hld.hpp\"\n\nstruct hld {\n    vector<vector<int>> g;\n    vector<int> par,\
    \ sz, dep, in, out, head;\n    hld(int n) : g(n), par(n), sz(n), dep(n), in(n),\
    \ out(n), head(n) {}\n    void add_edge(int u, int v) { g[u].push_back(v), g[v].push_back(u);\
    \ }\n    vector<int> build(int root) {\n        auto dfs_sz = [&](auto dfs_sz,\
    \ int v, int p) -> void {\n            sz[v] = 1;\n            par[v] = p;\n \
    \           if (p != -1) dep[v] = dep[p] + 1;\n            for (int &u : g[v])\
    \ {\n                if (u == p) continue;\n                dfs_sz(dfs_sz, u,\
    \ v);\n                sz[v] += sz[u];\n                if (sz[u] > sz[g[v][0]])\
    \ swap(u, g[v][0]);\n            }\n        };\n        int t = 0;\n        auto\
    \ dfs_hld = [&](auto dfs_hld, int v) -> int {\n            in[v] = t++;\n    \
    \        for (int i : rep(g[v].size())) {\n                int u = g[v][i];\n\
    \                if (u == par[v]) continue;\n                head[u] = (i == 0\
    \ ? head[v] : u);\n                dfs_hld(dfs_hld, u);\n            }\n     \
    \       return out[v] = t;\n        };\n        dfs_sz(dfs_sz, root, -1);\n  \
    \      head[root] = root;\n        dfs_hld(dfs_hld, root);\n        return in;\n\
    \    }\n    int lca(int u, int v) const {\n        while (true) {\n          \
    \  if (in[u] > in[v]) swap(u, v);\n            if (head[u] == head[v]) return\
    \ u;\n            v = par[head[v]];\n        }\n    }\n    int dist(int u, int\
    \ v) const { return dep[u] + dep[v] - 2 * dep[lca(u, v)]; }\n    vector<pair<int,\
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
  - template.hpp
  isVerificationFile: true
  path: test/unit/hld.test.cpp
  requiredBy: []
  timestamp: '2021-11-16 21:52:32+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/unit/hld.test.cpp
layout: document
redirect_from:
- /verify/test/unit/hld.test.cpp
- /verify/test/unit/hld.test.cpp.html
title: test/unit/hld.test.cpp
---