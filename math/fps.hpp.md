---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: "\u7573\u307F\u8FBC\u307F"
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: modint
  - icon: ':heavy_check_mark:'
    path: math/ntt.hpp
    title: "\u6570\u8AD6\u5909\u63DB"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/subset_convolution.hpp
    title: Subset Convolution
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/fps.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a),\
    \ rend(a)\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\n#define SZ(x)\
    \ ((int)(x).size())\n#define pb(x) push_back(x)\n#define eb(x) emplace_back(x)\n\
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
    \    };\n} iOS;\n#line 2 \"math/convolution.hpp\"\n\n#line 2 \"math/ntt.hpp\"\n\
    \n#line 4 \"math/ntt.hpp\"\n\ntemplate <typename mint> void ntt(vector<mint> &a,\
    \ bool inv = false) {\n    int n = a.size(), m = n >> 1;\n    mint root = 2;\n\
    \    while (root.pow((mint::mod() - 1) >> 1) == 1) root += 1;\n    mint wn = root.pow((mint::mod()\
    \ - 1) / n);\n    if (inv) wn = wn.inv();\n    vector<mint> b(n);\n    for (int\
    \ i = 1; i < n; i <<= 1, wn *= wn, swap(a, b)) {\n        mint wj = 1;\n     \
    \   for (int j = 0; j < m; j += i, wj *= wn) {\n            for (int k : rep(i))\
    \ {\n                b[0 + (j << 1) + k] = (a[0 + j + k] + a[m + j + k]);\n  \
    \              b[i + (j << 1) + k] = (a[0 + j + k] - a[m + j + k]) * wj;\n   \
    \         }\n        }\n    }\n    if (inv) {\n        mint ninv = mint(n).inv();\n\
    \        for (mint &ai : a) ai *= ninv;\n    }\n}\ntemplate <typename mint> void\
    \ intt(vector<mint> &a) { ntt(a, true); }\n#line 5 \"math/convolution.hpp\"\n\n\
    template <typename T> vector<T> convolution_naive(vector<T> a, vector<T> b) {\n\
    \    int na = a.size(), nb = b.size();\n    vector<T> c(na + nb - 1);\n    if\
    \ (na < nb) swap(a, b), swap(na, nb);\n    for (int i : rep(na)) {\n        for\
    \ (int j : rep(nb)) c[i + j] += a[i] * b[j];\n    }\n    return c;\n}\n\ntemplate\
    \ <typename mint> vector<mint> convolution_ntt(vector<mint> a, vector<mint> b)\
    \ {\n    int _n = a.size() + b.size() - 1, n;\n    for (n = 1; n < _n; n <<= 1)\
    \ {}\n    a.resize(n), b.resize(n);\n    ntt(a), ntt(b);\n    for (int i : rep(n))\
    \ a[i] *= b[i];\n    intt(a);\n    a.resize(_n);\n    return a;\n}\n\ntemplate\
    \ <typename mint> vector<mint> convolution(const vector<mint> &a, const vector<mint>\
    \ &b) {\n    if (min(a.size(), b.size()) <= 60) {\n        return convolution_naive(a,\
    \ b);\n    } else {\n        return convolution_ntt(a, b);\n    }\n}\n#line 2\
    \ \"math/modint.hpp\"\n\n#line 4 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007>\
    \ struct modint {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val %\
    \ MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n\
    \    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n   \
    \     while (b > 0) {\n            t = a / b;\n            swap(a -= t * b, b);\n\
    \            swap(u -= t * v, v);\n        }\n        return modint(u);\n    }\n\
    \    modint pow(ll k) const {\n        modint ret = 1, mul = val;\n        while\
    \ (k) {\n            if (k & 1) ret *= mul;\n            mul *= mul;\n       \
    \     k >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
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
    \ modint &a) { return os << a.val; }\n};\n#line 6 \"math/fps.hpp\"\n\ntemplate\
    \ <typename T> struct fps : vector<T> {\n    using vector<T>::vector;\n    using\
    \ vector<T>::operator=;\n    fps() : vector<T>() {}\n    fps(const T &a) : vector<T>(1,\
    \ a) {}\n    fps(const fps &a) : vector<T>(a) {}\n    fps &operator=(const fps\
    \ &a) {\n        *this = (vector<T>)a;\n        return *this;\n    }\n    fps\
    \ &operator+=(const fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n\
    \        for (int i : rep(a.size())) (*this)[i] += a[i];\n        return *this;\n\
    \    }\n    fps &operator-=(const fps &a) {\n        if (a.size() > this->size())\
    \ this->resize(a.size());\n        for (int i : rep(a.size())) (*this)[i] -= a[i];\n\
    \        return *this;\n    }\n    fps &operator*=(const fps &a);\n    fps &operator/=(const\
    \ T &a) {\n        for (int i : rep(this->size())) (*this)[i] /= a;\n        return\
    \ *this;\n    };\n    fps &operator>>=(int d) {\n        if ((int)this->size()\
    \ <= d) {\n            *this = {};\n        } else {\n            this->erase(this->begin(),\
    \ this->begin() + d);\n        }\n        return *this;\n    }\n    fps &operator<<=(int\
    \ d) {\n        this->insert(this->begin(), d, T(0));\n        return *this;\n\
    \    }\n    fps &chdot(const fps &a) {\n        for (int i : rep(this->size()))\
    \ {\n            if (i < (int)a.size()) {\n                (*this)[i] *= a[i];\n\
    \            } else {\n                (*this)[i] = 0;\n            }\n      \
    \  }\n        return *this;\n    }\n    fps prefix(int d) const { return fps(this->begin(),\
    \ this->begin() + min((int)this->size(), d)); }\n    fps differential() const\
    \ {\n        int n = this->size();\n        fps ret(max(0, n - 1));\n        for\
    \ (int i : rep(1, n)) { ret[i - 1] = i * (*this)[i]; }\n        return ret;\n\
    \    }\n    fps integral() const {\n        int n = this->size();\n        fps\
    \ ret(n + 1);\n        ret[0] = T(0);\n        if (n > 0) ret[1] = T(1);\n   \
    \     for (int i : rep(2, n + 1)) ret[i] = (-ret[T::mod() % i]) * (T::mod() /\
    \ i);\n        for (int i : rep(n)) ret[i + 1] *= (*this)[i];\n        return\
    \ ret;\n    }\n    fps inv(int d = -1) const {\n        if (d == -1) d = this->size();\n\
    \        fps ret{(*this)[0].inv()};\n        for (int m = 1; m < d; m <<= 1) ret\
    \ = (ret + ret - ret * ret * this->prefix(m << 1)).prefix(m << 1);\n        return\
    \ ret.prefix(d);\n    }\n    fps log(int d = -1) const {\n        assert((*this)[0]\
    \ == T(1));\n        if (d == -1) d = this->size();\n        return (this->differential()\
    \ * this->inv(d)).prefix(d - 1).integral();\n    }\n    fps exp(int d = -1) const\
    \ {\n        assert(this->size() == 0 || (*this)[0] == T(0));\n        if (d ==\
    \ -1) d = this->size();\n        fps ret{1};\n        for (int m = 1; m < d; m\
    \ <<= 1) ret = (ret * (this->prefix(m << 1) + T(1) - ret.log(m << 1))).prefix(m\
    \ << 1);\n        return ret.prefix(d);\n    }\n    fps pow(ll k, int d = -1)\
    \ const {\n        if (d == -1) d = this->size();\n        for (int i : rep(this->size()))\
    \ {\n            if ((*this)[i] != T(0)) {\n                if (i * k > d) return\
    \ fps(d);\n                fps ret = (((*this * (*this)[i].inv()) >> i).log(d)\
    \ * T(k)).exp(d) * ((*this)[i].pow(k));\n                ret = (ret << (i * k)).prefix(d);\n\
    \                ret.resize(d);\n                return ret;\n            }\n\
    \        }\n        return fps(d);\n    }\n    friend fps operator+(const fps\
    \ &a) { return a; }\n    friend fps operator-(const fps &a) { return fps() -=\
    \ a; }\n    friend fps operator+(const fps &a, const fps &b) { return fps(a) +=\
    \ b; }\n    friend fps operator-(const fps &a, const fps &b) { return fps(a) -=\
    \ b; }\n    friend fps operator*(const fps &a, const fps &b) { return fps(a) *=\
    \ b; }\n    friend fps operator>>(const fps &a, int d) { return fps(a) >>= d;\
    \ }\n    friend fps operator<<(const fps &a, int d) { return fps(a) <<= d; }\n\
    };\n\nusing m9 = modint<998244353>;\n\ntemplate <> fps<m9> &fps<m9>::operator*=(const\
    \ fps<m9> &a) {\n    *this = convolution(*this, a);\n    return *this;\n}\n\n\
    template <> fps<m9> fps<m9>::inv(int d) const {\n    if (d == -1) d = this->size();\n\
    \    fps ret{(*this)[0].inv()};\n    for (int m = 1; m < d; m <<= 1) {\n     \
    \   fps f = this->prefix(m << 1);\n        fps g = ret;\n        f.resize(m <<\
    \ 1), ntt(f);\n        g.resize(m << 1), ntt(g);\n        f.chdot(g);\n      \
    \  intt(f);\n        f >>= m, f.resize(m << 1), ntt(f);\n        f.chdot(g);\n\
    \        intt(f);\n        f = -f;\n        ret.insert(ret.end(), f.begin(), f.begin()\
    \ + m);\n    }\n    return ret.prefix(d);\n}\n\ntemplate <> fps<m9> fps<m9>::exp(int\
    \ d) const {\n    using T = m9;\n    assert(this->size() == 0 || (*this)[0] ==\
    \ T(0));\n    if (d == -1) d = this->size();\n    fps ret{1}, g{1}, g_freq{1};\n\
    \    for (int m = 1; m < d; m <<= 1) {\n        fps ret_freq = ret.prefix(m);\n\
    \        ret_freq.resize(m << 1), ntt(ret_freq);\n\n        fps g_cont = g_freq;\n\
    \        for (int i : rep(m)) g_cont[i] *= ret_freq[i << 1];\n        intt(g_cont);\n\
    \        g_cont >>= m >> 1;\n        g_cont.resize(m), ntt(g_cont);\n        g_cont.chdot(g_freq);\n\
    \        intt(g_cont);\n        g_cont = -g_cont;\n        g.insert(g.end(), g_cont.begin(),\
    \ g_cont.begin() + (m >> 1));\n\n        fps r = this->differential().prefix(m\
    \ - 1);\n        r.resize(m), ntt(r);\n        for (int i : rep(m)) r[i] *= ret_freq[i\
    \ << 1];\n        intt(r);\n\n        fps t = ret.differential() - r;\n      \
    \  t.insert(t.begin(), t.back()), t.pop_back();\n        t.resize(m << 1), ntt(t);\n\
    \        g_freq = g, g_freq.resize(m << 1), ntt(g_freq);\n        t.chdot(g_freq);\n\
    \        intt(t), t.resize(m);\n\n        fps u = (this->prefix(m << 1) - (t <<\
    \ m - 1).integral()) >> m;\n        u.resize(m << 1), ntt(u);\n        u.chdot(ret_freq);\n\
    \        intt(u);\n\n        ret += u.prefix(m) << m;\n    }\n    return ret.prefix(d);\n\
    }\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n#include \"convolution.hpp\"\
    \n#include \"modint.hpp\"\n\ntemplate <typename T> struct fps : vector<T> {\n\
    \    using vector<T>::vector;\n    using vector<T>::operator=;\n    fps() : vector<T>()\
    \ {}\n    fps(const T &a) : vector<T>(1, a) {}\n    fps(const fps &a) : vector<T>(a)\
    \ {}\n    fps &operator=(const fps &a) {\n        *this = (vector<T>)a;\n    \
    \    return *this;\n    }\n    fps &operator+=(const fps &a) {\n        if (a.size()\
    \ > this->size()) this->resize(a.size());\n        for (int i : rep(a.size()))\
    \ (*this)[i] += a[i];\n        return *this;\n    }\n    fps &operator-=(const\
    \ fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n  \
    \      for (int i : rep(a.size())) (*this)[i] -= a[i];\n        return *this;\n\
    \    }\n    fps &operator*=(const fps &a);\n    fps &operator/=(const T &a) {\n\
    \        for (int i : rep(this->size())) (*this)[i] /= a;\n        return *this;\n\
    \    };\n    fps &operator>>=(int d) {\n        if ((int)this->size() <= d) {\n\
    \            *this = {};\n        } else {\n            this->erase(this->begin(),\
    \ this->begin() + d);\n        }\n        return *this;\n    }\n    fps &operator<<=(int\
    \ d) {\n        this->insert(this->begin(), d, T(0));\n        return *this;\n\
    \    }\n    fps &chdot(const fps &a) {\n        for (int i : rep(this->size()))\
    \ {\n            if (i < (int)a.size()) {\n                (*this)[i] *= a[i];\n\
    \            } else {\n                (*this)[i] = 0;\n            }\n      \
    \  }\n        return *this;\n    }\n    fps prefix(int d) const { return fps(this->begin(),\
    \ this->begin() + min((int)this->size(), d)); }\n    fps differential() const\
    \ {\n        int n = this->size();\n        fps ret(max(0, n - 1));\n        for\
    \ (int i : rep(1, n)) { ret[i - 1] = i * (*this)[i]; }\n        return ret;\n\
    \    }\n    fps integral() const {\n        int n = this->size();\n        fps\
    \ ret(n + 1);\n        ret[0] = T(0);\n        if (n > 0) ret[1] = T(1);\n   \
    \     for (int i : rep(2, n + 1)) ret[i] = (-ret[T::mod() % i]) * (T::mod() /\
    \ i);\n        for (int i : rep(n)) ret[i + 1] *= (*this)[i];\n        return\
    \ ret;\n    }\n    fps inv(int d = -1) const {\n        if (d == -1) d = this->size();\n\
    \        fps ret{(*this)[0].inv()};\n        for (int m = 1; m < d; m <<= 1) ret\
    \ = (ret + ret - ret * ret * this->prefix(m << 1)).prefix(m << 1);\n        return\
    \ ret.prefix(d);\n    }\n    fps log(int d = -1) const {\n        assert((*this)[0]\
    \ == T(1));\n        if (d == -1) d = this->size();\n        return (this->differential()\
    \ * this->inv(d)).prefix(d - 1).integral();\n    }\n    fps exp(int d = -1) const\
    \ {\n        assert(this->size() == 0 || (*this)[0] == T(0));\n        if (d ==\
    \ -1) d = this->size();\n        fps ret{1};\n        for (int m = 1; m < d; m\
    \ <<= 1) ret = (ret * (this->prefix(m << 1) + T(1) - ret.log(m << 1))).prefix(m\
    \ << 1);\n        return ret.prefix(d);\n    }\n    fps pow(ll k, int d = -1)\
    \ const {\n        if (d == -1) d = this->size();\n        for (int i : rep(this->size()))\
    \ {\n            if ((*this)[i] != T(0)) {\n                if (i * k > d) return\
    \ fps(d);\n                fps ret = (((*this * (*this)[i].inv()) >> i).log(d)\
    \ * T(k)).exp(d) * ((*this)[i].pow(k));\n                ret = (ret << (i * k)).prefix(d);\n\
    \                ret.resize(d);\n                return ret;\n            }\n\
    \        }\n        return fps(d);\n    }\n    friend fps operator+(const fps\
    \ &a) { return a; }\n    friend fps operator-(const fps &a) { return fps() -=\
    \ a; }\n    friend fps operator+(const fps &a, const fps &b) { return fps(a) +=\
    \ b; }\n    friend fps operator-(const fps &a, const fps &b) { return fps(a) -=\
    \ b; }\n    friend fps operator*(const fps &a, const fps &b) { return fps(a) *=\
    \ b; }\n    friend fps operator>>(const fps &a, int d) { return fps(a) >>= d;\
    \ }\n    friend fps operator<<(const fps &a, int d) { return fps(a) <<= d; }\n\
    };\n\nusing m9 = modint<998244353>;\n\ntemplate <> fps<m9> &fps<m9>::operator*=(const\
    \ fps<m9> &a) {\n    *this = convolution(*this, a);\n    return *this;\n}\n\n\
    template <> fps<m9> fps<m9>::inv(int d) const {\n    if (d == -1) d = this->size();\n\
    \    fps ret{(*this)[0].inv()};\n    for (int m = 1; m < d; m <<= 1) {\n     \
    \   fps f = this->prefix(m << 1);\n        fps g = ret;\n        f.resize(m <<\
    \ 1), ntt(f);\n        g.resize(m << 1), ntt(g);\n        f.chdot(g);\n      \
    \  intt(f);\n        f >>= m, f.resize(m << 1), ntt(f);\n        f.chdot(g);\n\
    \        intt(f);\n        f = -f;\n        ret.insert(ret.end(), f.begin(), f.begin()\
    \ + m);\n    }\n    return ret.prefix(d);\n}\n\ntemplate <> fps<m9> fps<m9>::exp(int\
    \ d) const {\n    using T = m9;\n    assert(this->size() == 0 || (*this)[0] ==\
    \ T(0));\n    if (d == -1) d = this->size();\n    fps ret{1}, g{1}, g_freq{1};\n\
    \    for (int m = 1; m < d; m <<= 1) {\n        fps ret_freq = ret.prefix(m);\n\
    \        ret_freq.resize(m << 1), ntt(ret_freq);\n\n        fps g_cont = g_freq;\n\
    \        for (int i : rep(m)) g_cont[i] *= ret_freq[i << 1];\n        intt(g_cont);\n\
    \        g_cont >>= m >> 1;\n        g_cont.resize(m), ntt(g_cont);\n        g_cont.chdot(g_freq);\n\
    \        intt(g_cont);\n        g_cont = -g_cont;\n        g.insert(g.end(), g_cont.begin(),\
    \ g_cont.begin() + (m >> 1));\n\n        fps r = this->differential().prefix(m\
    \ - 1);\n        r.resize(m), ntt(r);\n        for (int i : rep(m)) r[i] *= ret_freq[i\
    \ << 1];\n        intt(r);\n\n        fps t = ret.differential() - r;\n      \
    \  t.insert(t.begin(), t.back()), t.pop_back();\n        t.resize(m << 1), ntt(t);\n\
    \        g_freq = g, g_freq.resize(m << 1), ntt(g_freq);\n        t.chdot(g_freq);\n\
    \        intt(t), t.resize(m);\n\n        fps u = (this->prefix(m << 1) - (t <<\
    \ m - 1).integral()) >> m;\n        u.resize(m << 1), ntt(u);\n        u.chdot(ret_freq);\n\
    \        intt(u);\n\n        ret += u.prefix(m) << m;\n    }\n    return ret.prefix(d);\n\
    }"
  dependsOn:
  - template.hpp
  - math/convolution.hpp
  - math/ntt.hpp
  - math/modint.hpp
  isVerificationFile: false
  path: math/fps.hpp
  requiredBy:
  - math/subset_convolution.hpp
  timestamp: '2021-09-24 15:58:58+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
documentation_of: math/fps.hpp
layout: document
title: "\u5F62\u5F0F\u7684\u51AA\u7D1A\u6570"
---

## 概要
- `modint`上の形式的冪級数に関する各種演算をサポートする。

## 詳細
- `<typename mint> struct fps`  
    形式的冪級数本体。

    - `typename mint`  
        テンプレート引数として与える`modint`。

## 参考
- [Nyaan さんのライブラリ](https://nyaannyaan.github.io/library/fps/formal-power-series.hpp)
- [opt さんの記事](https://opt-cp.com/fps-fast-algorithms/)
- [exp 高速化に関する論文](https://arxiv.org/pdf/1301.5804.pdf)