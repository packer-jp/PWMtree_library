---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: modint
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
    PROBLEM: https://judge.yosupo.jp/problem/range_affine_range_sum
    links:
    - https://judge.yosupo.jp/problem/range_affine_range_sum
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/range_affine_range_sum\"\n\
    #line 2 \"data_structure/lazy_segtree.hpp\"\n\n#line 2 \"math/modint.hpp\"\n\n\
    #line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n\
    #define all(a) begin(a), end(a)\n#define rall(a) rbegin(a), rend(a)\n#define uniq(a)\
    \ (a).erase(unique(all(a)), (a).end())\n#define SZ(x) ((int)(x).size())\n#define\
    \ pb(x) push_back(x)\n#define eb(x) emplace_back(x)\n#define vsum(x) reduce(all(x))\n\
    #define vmax(a) *max_element(all(a))\n#define vmin(a) *min_element(all(a))\n#define\
    \ LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))\n#define UB(c, x) distance((c).begin(),\
    \ upper_bound(all(c), (x)))\n#define mp make_pair\n#define endl '\\n'\nusing ll\
    \ = long long;\nusing ull = unsigned long long;\nusing ld = long double;\nusing\
    \ Pi = pair<int, int>;\nusing Pl = pair<ll, ll>;\nusing Vi = vector<int>;\nusing\
    \ Vl = vector<ll>;\nusing Vc = vector<char>;\nusing VVi = vector<vector<int>>;\n\
    using VVl = vector<vector<ll>>;\nusing VVc = vector<vector<char>>;\nconstexpr\
    \ ll inf = 1000000000ll;\nconstexpr ll INF = 4000000004000000000LL;\nconstexpr\
    \ ld eps = 1e-15;\nconstexpr ld PI = 3.141592653589793;\nconstexpr int popcnt(ull\
    \ x) { return __builtin_popcountll(x); }\ntemplate <typename T> using mat = vector<vector<T>>;\n\
    constexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1,\
    \ 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a <\
    \ 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b);\
    \ }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int\
    \ n) { return 1ull << n; }\ntemplate <typename T> constexpr T mypow(T x, ll n)\
    \ {\n    T ret = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x\
    \ *= x;\n        n >>= 1;\n    }\n    return ret;\n}\nconstexpr ll modpow(ll x,\
    \ ll n, ll mod) {\n    ll ret = 1;\n    while (n) {\n        if (n & 1) ret *=\
    \ x;\n        x *= x;\n        n >>= 1;\n        x %= mod;\n        ret %= mod;\n\
    \    }\n    return ret;\n}\ntemplate <typename T> T xor64(T lb, T ub) {\n    static\
    \ ull x = 88172645463325252ull;\n    x ^= x << 7;\n    return lb + (x ^= x >>\
    \ 9) % (ub - lb);\n}\nconstexpr ll safemod(ll x, ll mod) { return (x % mod + mod)\
    \ % mod; }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
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
    \ os;\n}\ntemplate <typename T> void print(const T &a) { cout << a << endl; }\n\
    template <typename T> void print(const vector<T> &v) {\n    for (auto &e : v)\
    \ cout << e << \" \";\n    cout << endl;\n}\ntemplate <typename T> void scan(vector<T>\
    \ &a) {\n    for (auto &i : a) cin >> i;\n}\nstruct timer {\n    clock_t start_time;\n\
    \    void start() { start_time = clock(); }\n    int lap() {\n        // return\
    \ x ms.\n        return (clock() - start_time) * 1000 / CLOCKS_PER_SEC;\n    }\n\
    };\ntemplate <typename T = int> struct Edge {\n    int from, to;\n    T cost;\n\
    \    int idx;\n\n    Edge() = default;\n\n    Edge(int from, int to, T cost =\
    \ 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}\n\n    operator\
    \ int() const { return to; }\n};\ntemplate <typename T = int> struct Graph {\n\
    \    vector<vector<Edge<T>>> g;\n    int es;\n\n    Graph() = default;\n\n   \
    \ explicit Graph(int n) : g(n), es(0) {}\n\n    size_t size() const { return g.size();\
    \ }\n\n    void add_directed_edge(int from, int to, T cost = 1) { g[from].emplace_back(from,\
    \ to, cost, es++); }\n\n    void add_edge(int from, int to, T cost = 1) {\n  \
    \      g[from].emplace_back(from, to, cost, es);\n        g[to].emplace_back(to,\
    \ from, cost, es++);\n    }\n\n    void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n        for (int i = 0; i < M; i++) {\n \
    \           int a, b;\n            cin >> a >> b;\n            a += padding;\n\
    \            b += padding;\n            T c = T(1);\n            if (weighted)\
    \ cin >> c;\n            if (directed)\n                add_directed_edge(a, b,\
    \ c);\n            else\n                add_edge(a, b, c);\n        }\n    }\n\
    };\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
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
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"math/modint.hpp\"\
    \n\ntemplate <ll MOD = 1000000007> struct modint {\n    ll val;\n    modint(ll\
    \ val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static\
    \ ll mod() { return MOD; }\n    modint inv() const {\n        ll a = val, b =\
    \ MOD, u = 1, v = 0, t;\n        while (b > 0) {\n            t = a / b;\n   \
    \         swap(a -= t * b, b);\n            swap(u -= t * v, v);\n        }\n\
    \        return modint(u);\n    }\n    modint pow(ll k) const {\n        modint\
    \ ret = 1, mul = val;\n        while (k) {\n            if (k & 1) ret *= mul;\n\
    \            mul *= mul;\n            k >>= 1;\n        }\n        return ret;\n\
    \    }\n    modint &operator+=(const modint &a) {\n        if ((val += a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator-=(const\
    \ modint &a) {\n        if ((val += MOD - a.val) >= MOD) val -= MOD;\n       \
    \ return *this;\n    }\n    modint &operator*=(const modint &a) {\n        (val\
    \ *= a.val) %= MOD;\n        return *this;\n    }\n    modint &operator/=(const\
    \ modint &a) { return *this *= a.inv(); }\n    modint operator+() const { return\
    \ *this; }\n    modint operator-() const { return modint(-val); }\n    friend\
    \ bool operator==(const modint &a, const modint &b) { return a.val == b.val; }\n\
    \    friend bool operator!=(const modint &a, const modint &b) { return rel_ops::operator!=(a,\
    \ b); }\n    friend modint operator+(const modint &a, const modint &b) { return\
    \ modint(a) += b; }\n    friend modint operator-(const modint &a, const modint\
    \ &b) { return modint(a) -= b; }\n    friend modint operator*(const modint &a,\
    \ const modint &b) { return modint(a) *= b; }\n    friend modint operator/(const\
    \ modint &a, const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n#line 5 \"data_structure/lazy_segtree.hpp\"\
    \n\ntemplate <typename S> struct lazy_segtree {\n    using V = typename S::val_t;\n\
    \    using F = typename S::fn_t;\n    int n, size, log;\n    vector<V> val;\n\
    \    vector<F> lazy;\n    lazy_segtree(int n) : lazy_segtree(vector(n, S::e()))\
    \ {}\n    lazy_segtree(const vector<V> &src) : n(src.size()) {\n        for (size\
    \ = 1, log = 0; size < n; size <<= 1, ++log) {}\n        val.resize(size << 1);\n\
    \        copy(all(src), val.begin() + size);\n        lazy.resize(size << 1, S::id());\n\
    \        for (int i : per(1, size)) val[i] = S::op(val[i << 1 | 0], val[i << 1\
    \ | 1]);\n    }\n    V reflect(int i) { return S::mapping(lazy[i], val[i]); }\n\
    \    void push(int i) {\n        val[i] = S::mapping(lazy[i], val[i]);\n     \
    \   lazy[i << 1 | 0] = S::composition(lazy[i], lazy[i << 1 | 0]);\n        lazy[i\
    \ << 1 | 1] = S::composition(lazy[i], lazy[i << 1 | 1]);\n        lazy[i] = S::id();\n\
    \    }\n    void thrust(int i) {\n        for (int j = log; j; j--) push(i >>\
    \ j);\n    }\n    void recalc(int i) {\n        while (i >>= 1) val[i] = S::op(reflect(i\
    \ << 1 | 0), reflect(i << 1 | 1));\n    }\n    void set(int i, const V &a) {\n\
    \        thrust(i += size);\n        val[i] = a;\n        lazy[i] = S::id();\n\
    \        recalc(i);\n    }\n    void apply(int l, int r, F f) {\n        if (l\
    \ >= r) return;\n        thrust(l += size);\n        thrust(r += size - 1);\n\
    \        for (int i = l, j = r + 1; i < j; i >>= 1, j >>= 1) {\n            if\
    \ (i & 1) lazy[i] = S::composition(f, lazy[i]), ++i;\n            if (j & 1) --j,\
    \ lazy[j] = S::composition(f, lazy[j]);\n        }\n        recalc(l);\n     \
    \   recalc(r);\n    }\n    V get(int i) {\n        thrust(i += size);\n      \
    \  return reflect(i);\n    }\n    V prod(int l, int r) {\n        if (l >= r)\
    \ return S::e();\n        thrust(l += size);\n        thrust(r += size - 1);\n\
    \        V a = S::e(), b = S::e();\n        for (++r; l < r; l >>= 1, r >>= 1)\
    \ {\n            if (l & 1) a = S::op(a, reflect(l++));\n            if (r & 1)\
    \ b = S::op(reflect(--r), b);\n        }\n        return S::op(a, b);\n    }\n\
    \    template <typename G> int max_right(int l, G g) {\n        if (l == n) return\
    \ n;\n        thrust(l += size);\n        V a = S::e();\n        do {\n      \
    \      while (~l & 1) l >>= 1;\n            if (!g(S::op(a, reflect(l)))) {\n\
    \                while (l < size) {\n                    push(l);\n          \
    \          l = l << 1 | 0;\n                    if (g(S::op(a, reflect(l)))) a\
    \ = S::op(a, reflect(l++));\n                }\n                return l - size;\n\
    \            }\n            a = S::op(a, reflect(l++));\n        } while ((l &\
    \ -l) != l);\n        return n;\n    }\n    template <typename G> int min_left(int\
    \ r, G g) {\n        if (r == 0) return 0;\n        thrust((r += size) - 1);\n\
    \        V a = S::e();\n        do {\n            --r;\n            while (r >\
    \ 1 && r & 1) r >>= 1;\n            if (!g(S::op(reflect(r), a))) {\n        \
    \        while (r < size) {\n                    push(r);\n                  \
    \  r = r << 1 | 1;\n                    if (g(S::op(reflect(r), a))) a = S::op(reflect(r--),\
    \ a);\n                }\n                return r + 1 - size;\n            }\n\
    \            a = S::op(reflect(r), a);\n        } while ((r & -r) != r);\n   \
    \     return 0;\n    }\n};\n\nstruct min_monoid_with_addition {\n    using val_t\
    \ = ll;\n    using fn_t = ll;\n    static val_t op(val_t a, val_t b) { return\
    \ min(a, b); }\n    static val_t e() { return LLONG_MAX; }\n    static val_t mapping(fn_t\
    \ f, val_t a) { return a == e() ? a : f + a; }\n    static fn_t composition(fn_t\
    \ f, fn_t g) { return f + g; }\n    static fn_t id() { return 0; }\n};\n\nstruct\
    \ min_monoid_with_update {\n    using val_t = ll;\n    using fn_t = ll;\n    static\
    \ val_t op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return\
    \ LLONG_MAX; }\n    static val_t mapping(fn_t f, val_t a) { return f == id() ?\
    \ a : f; }\n    static fn_t composition(fn_t f, fn_t g) { return f == id() ? g\
    \ : f; }\n    static fn_t id() { return -1; };\n};\n\nstruct sum_monoid_with_addition\
    \ {\n    using val_t = pair<ll, ll>;\n    using fn_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return {a.first + b.first, a.second + b.second}; }\n    static\
    \ val_t e() { return {0, 0}; }\n    static val_t mapping(fn_t f, val_t a) { return\
    \ {a.first + f * a.second, a.second}; }\n    static fn_t composition(fn_t f, fn_t\
    \ g) { return f + g; }\n    static fn_t id() { return 0; };\n};\n\nstruct sum_monoid_with_update\
    \ {\n    using val_t = pair<ll, ll>;\n    using fn_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return {a.first + b.first, a.second + b.second}; }\n    static\
    \ val_t e() { return {0, 0}; }\n    static val_t mapping(fn_t f, val_t a) { return\
    \ f == id() ? a : make_pair(f * a.second, a.second); }\n    static fn_t composition(fn_t\
    \ f, fn_t g) { return f == id() ? g : f; }\n    static fn_t id() { return LLONG_MIN;\
    \ };\n};\n\ntemplate <typename T> struct sum_monoid_with_affine {\n    using val_t\
    \ = pair<T, int>;\n    using fn_t = pair<T, T>;\n    static val_t op(val_t a,\
    \ val_t b) { return {a.first + b.first, a.second + b.second}; }\n    static val_t\
    \ e() { return {0, 0}; }\n    static val_t mapping(fn_t f, val_t a) { return {f.first\
    \ * a.first + f.second * a.second, a.second}; }\n    static fn_t composition(fn_t\
    \ f, fn_t g) { return {f.first * g.first, f.second + f.first * g.second}; }\n\
    \    static fn_t id() { return {1, 0}; };\n};\n#line 4 \"test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    ll n, q;\n    cin >>\
    \ n >> q;\n    vector<pair<mint, int>> src(n, {0, 1});\n    for (ll i : rep(n))\
    \ cin >> src[i].first;\n    lazy_segtree<sum_monoid_with_affine<mint>> lst(src);\n\
    \    while (q--) {\n        ll t, l, r;\n        cin >> t >> l >> r;\n       \
    \ if (t == 0) {\n            ll b, c;\n            cin >> b >> c;\n          \
    \  lst.apply(l, r, {b, c});\n        }\n        if (t == 1) { cout << lst.prod(l,\
    \ r).first << endl; }\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/range_affine_range_sum\"\
    \n#include \"../../data_structure/lazy_segtree.hpp\"\n#include \"../../math/modint.hpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    ll n, q;\n    cin >>\
    \ n >> q;\n    vector<pair<mint, int>> src(n, {0, 1});\n    for (ll i : rep(n))\
    \ cin >> src[i].first;\n    lazy_segtree<sum_monoid_with_affine<mint>> lst(src);\n\
    \    while (q--) {\n        ll t, l, r;\n        cin >> t >> l >> r;\n       \
    \ if (t == 0) {\n            ll b, c;\n            cin >> b >> c;\n          \
    \  lst.apply(l, r, {b, c});\n        }\n        if (t == 1) { cout << lst.prod(l,\
    \ r).first << endl; }\n    }\n}"
  dependsOn:
  - data_structure/lazy_segtree.hpp
  - math/modint.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
  requiredBy: []
  timestamp: '2021-10-17 16:15:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
- /verify/test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp.html
title: test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
---