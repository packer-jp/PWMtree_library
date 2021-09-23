---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/matrix.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
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
    \    };\n} iOS;\n#line 4 \"math/matrix.hpp\"\n\ntemplate <typename S> struct matrix\
    \ {\n    using V = typename S::val_t;\n    vector<vector<V>> val;\n    matrix(int\
    \ n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n    matrix(const vector<vector<V>>\
    \ &src) : val(src) {}\n    vector<V> &operator[](int i) { return val[i]; }\n \
    \   const vector<V> &operator[](int i) const { return val[i]; }\n    int height()\
    \ const { return val.size(); }\n    int width() const { return val[0].size();\
    \ }\n    static matrix id(int n) {\n        matrix ret(n, n);\n        for (int\
    \ i : rep(n)) ret[i][i] = S::one();\n        return ret;\n    }\n    void row_add(int\
    \ i, int j, V a) {\n        for (int k : rep(width())) { val[i][k] += val[j][k]\
    \ * a; }\n    }\n    bool place_nonzero(int i, int j) {\n        for (int k :\
    \ rep(i, height())) {\n            if (val[k][j] != S::zero()) {\n           \
    \     if (k > i) row_add(i, k, S::one());\n                break;\n          \
    \  }\n        }\n        return val[i][j] != S::zero();\n    }\n    matrix upper_triangular()\
    \ const {\n        matrix ret(*this);\n        for (int i = 0, j = 0; i < height()\
    \ && j < width(); j++) {\n            if (!ret.place_nonzero(i, j)) continue;\n\
    \            for (int k : rep(i + 1, height())) ret.row_add(k, i, -ret[k][j] /\
    \ ret[i][j]);\n            i++;\n        }\n        return ret;\n    }\n    V\
    \ det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        for (int i : rep(height())) ret *= ut[i][i];\n        return ret;\n \
    \   }\n    matrix inv() const {\n        matrix ex(height(), width() << 1);\n\
    \        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { ex[i][j] = val[i][j]; }\n        }\n        for (int i : rep(height())) ex[i][width()\
    \ + i] = S::one();\n        matrix ut = ex.upper_triangular();\n        for (int\
    \ i : per(height())) {\n            ut.row_add(i, i, S::one() / ut[i][i] - S::one());\n\
    \            for (int j : rep(i)) ut.row_add(j, i, -ut[j][i] / ut[i][i]);\n  \
    \      }\n        matrix ret(height(), width());\n        for (int i : rep(height()))\
    \ {\n            for (int j : rep(width())) { ret[i][j] = ut[i][width() + j];\
    \ }\n        }\n        return ret;\n    }\n    matrix pow(ll k) const {\n   \
    \     matrix ret = matrix::id(height()), mul(*this);\n        while (k) {\n  \
    \          if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>=\
    \ 1;\n        }\n        return ret;\n    }\n    matrix &operator+=(const matrix\
    \ &a) {\n        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { val[i][j] += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix\
    \ &operator-=(const matrix &a) {\n        for (int i : rep(height())) {\n    \
    \        for (int j : rep(width())) { val[i][j] -= a[i][j]; }\n        }\n   \
    \     return *this;\n    }\n    matrix &operator*=(const matrix &a) {\n      \
    \  matrix res(height(), a.width());\n        for (int i : rep(height())) {\n \
    \           for (int j : rep(a.width())) {\n                for (int k : rep(width()))\
    \ { res[i][j] += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(const matrix &a) { return\
    \ *this *= a.inv(); }\n    bool operator==(const matrix &a) const { return val\
    \ == a.val; }\n    bool operator!=(const matrix &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    matrix operator+() const { return *this; }\n    matrix operator-()\
    \ const { return matrix(height(), width()) -= *this; }\n    matrix operator+(const\
    \ matrix &a) const { return matrix(*this) += a; }\n    matrix operator-(const\
    \ matrix &a) const { return matrix(*this) -= a; }\n    matrix operator*(const\
    \ matrix &a) const { return matrix(*this) *= a; }\n    matrix operator/(const\
    \ matrix &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n\
    \    using val_t = double;\n    static val_t zero() { return 0.0; }\n    static\
    \ val_t one() { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k : rep(i\
    \ + 1, height())) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n        \
    \    swap(val[i], val[k]);\n            row_add(i, i, -2.0);\n        }\n    }\n\
    \    return abs(val[i][j]) > EPS;\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ matrix {\n    using V = typename S::val_t;\n    vector<vector<V>> val;\n   \
    \ matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n    matrix(const\
    \ vector<vector<V>> &src) : val(src) {}\n    vector<V> &operator[](int i) { return\
    \ val[i]; }\n    const vector<V> &operator[](int i) const { return val[i]; }\n\
    \    int height() const { return val.size(); }\n    int width() const { return\
    \ val[0].size(); }\n    static matrix id(int n) {\n        matrix ret(n, n);\n\
    \        for (int i : rep(n)) ret[i][i] = S::one();\n        return ret;\n   \
    \ }\n    void row_add(int i, int j, V a) {\n        for (int k : rep(width()))\
    \ { val[i][k] += val[j][k] * a; }\n    }\n    bool place_nonzero(int i, int j)\
    \ {\n        for (int k : rep(i, height())) {\n            if (val[k][j] != S::zero())\
    \ {\n                if (k > i) row_add(i, k, S::one());\n                break;\n\
    \            }\n        }\n        return val[i][j] != S::zero();\n    }\n   \
    \ matrix upper_triangular() const {\n        matrix ret(*this);\n        for (int\
    \ i = 0, j = 0; i < height() && j < width(); j++) {\n            if (!ret.place_nonzero(i,\
    \ j)) continue;\n            for (int k : rep(i + 1, height())) ret.row_add(k,\
    \ i, -ret[k][j] / ret[i][j]);\n            i++;\n        }\n        return ret;\n\
    \    }\n    V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        for (int i : rep(height())) ret *= ut[i][i];\n        return ret;\n \
    \   }\n    matrix inv() const {\n        matrix ex(height(), width() << 1);\n\
    \        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { ex[i][j] = val[i][j]; }\n        }\n        for (int i : rep(height())) ex[i][width()\
    \ + i] = S::one();\n        matrix ut = ex.upper_triangular();\n        for (int\
    \ i : per(height())) {\n            ut.row_add(i, i, S::one() / ut[i][i] - S::one());\n\
    \            for (int j : rep(i)) ut.row_add(j, i, -ut[j][i] / ut[i][i]);\n  \
    \      }\n        matrix ret(height(), width());\n        for (int i : rep(height()))\
    \ {\n            for (int j : rep(width())) { ret[i][j] = ut[i][width() + j];\
    \ }\n        }\n        return ret;\n    }\n    matrix pow(ll k) const {\n   \
    \     matrix ret = matrix::id(height()), mul(*this);\n        while (k) {\n  \
    \          if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>=\
    \ 1;\n        }\n        return ret;\n    }\n    matrix &operator+=(const matrix\
    \ &a) {\n        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { val[i][j] += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix\
    \ &operator-=(const matrix &a) {\n        for (int i : rep(height())) {\n    \
    \        for (int j : rep(width())) { val[i][j] -= a[i][j]; }\n        }\n   \
    \     return *this;\n    }\n    matrix &operator*=(const matrix &a) {\n      \
    \  matrix res(height(), a.width());\n        for (int i : rep(height())) {\n \
    \           for (int j : rep(a.width())) {\n                for (int k : rep(width()))\
    \ { res[i][j] += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(const matrix &a) { return\
    \ *this *= a.inv(); }\n    bool operator==(const matrix &a) const { return val\
    \ == a.val; }\n    bool operator!=(const matrix &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    matrix operator+() const { return *this; }\n    matrix operator-()\
    \ const { return matrix(height(), width()) -= *this; }\n    matrix operator+(const\
    \ matrix &a) const { return matrix(*this) += a; }\n    matrix operator-(const\
    \ matrix &a) const { return matrix(*this) -= a; }\n    matrix operator*(const\
    \ matrix &a) const { return matrix(*this) *= a; }\n    matrix operator/(const\
    \ matrix &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n\
    \    using val_t = double;\n    static val_t zero() { return 0.0; }\n    static\
    \ val_t one() { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k : rep(i\
    \ + 1, height())) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n        \
    \    swap(val[i], val[k]);\n            row_add(i, i, -2.0);\n        }\n    }\n\
    \    return abs(val[i][j]) > EPS;\n}"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/matrix.hpp
  requiredBy: []
  timestamp: '2021-09-17 00:26:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
documentation_of: math/matrix.hpp
layout: document
title: "\u884C\u5217"
---

## 概要
- 集合 $V$ について定めた代数的構造上の $n \times m$ 行列に関する各種演算をサポートする。

## 詳細
- `<typename S> struct matrix`  
    行列本体。

    - `typename S`  
        テンプレート引数として与える構造体。

        - `using val_t`  
            $V$ を表す型。各種演算、比較、複合代入をサポートする必要がある。

        - `val_t zero()`  
            加法単位元 $0$ を返す。
        
        - `val_t one()`  
            乗法単位元 $1$ を返す。

    - `(constructor)(int n, int m)`  
        大きさ $n \times m$ 、全要素 $\mathrm{0}$ で初期化。

    - `(constructor)(vector<vector<V>> src)`  
        $src$ で初期化。

    - 要素アクセス  
        二次元配列のように、`[]`演算子を用いて行う。

    - `int height()`  
        高さ $n$ を返す。

    - `int width()`  
        幅 $m$ を返す。

    - `static matrix id(int n)`  
        $n \times n$ の単位行列を返す。

    - `S::val_t det()`  
        行列式を返す。定義に従った計算ではなく、上三角化を経由する関係上、`S::val_t` の除法を要請する。 $O(n^3)$ 時間。

    - `matrix inv()`  
        逆行列を返す。正則でない場合の動作は未定義。 $O(n^3)$ 時間。

    - `matrix pow(ll k)`  
        $k$ 乗した結果を返す。`S::val_t` が半環 (加法について可換モノイド、乗法についてモノイド、分配的、加法単位元は乗法吸収元) であることを要請する。 $O(n^3 \log k)$ 時間。

    - 四則演算、比較、複合代入

- `struct double_field`  
    実数体を載せるときに`matrix`にテンプレート引数 `S` として与える。誤差周りの事情から、特殊化を行っている。

## 参考
- [うしさんのライブラリ](https://ei1333.github.io/library/math/matrix/matrix.cpp)