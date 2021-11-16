---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':x:'
    path: math/bostan_mori.hpp
    title: math/bostan_mori.hpp
  - icon: ':x:'
    path: math/convolution.hpp
    title: "\u7573\u307F\u8FBC\u307F"
  - icon: ':x:'
    path: math/fps.hpp
    title: "\u5F62\u5F0F\u7684\u51AA\u7D1A\u6570"
  - icon: ':x:'
    path: math/kth_of_lrs.hpp
    title: math/kth_of_lrs.hpp
  - icon: ':x:'
    path: math/subset_convolution.hpp
    title: Subset Convolution
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Kth_Term_of_Linearly_Recurrent_Sequence.0.test.cpp
    title: test/judge.yosupo.jp/Kth_Term_of_Linearly_Recurrent_Sequence.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/ntt.hpp\"\n\n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\n\
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
    \ {}\n#line 4 \"math/ntt.hpp\"\n\ntemplate <typename mint> void ntt(vector<mint>\
    \ &a, bool inv = false) {\n    int n = a.size(), m = n >> 1;\n    mint root =\
    \ 2;\n    while (root.pow((mint::mod() - 1) >> 1) == 1) root += 1;\n    mint wn\
    \ = root.pow((mint::mod() - 1) / n);\n    if (inv) wn = wn.inv();\n    vector<mint>\
    \ b(n);\n    for (int i = 1; i < n; i <<= 1, wn *= wn, swap(a, b)) {\n       \
    \ mint wj = 1;\n        for (int j = 0; j < m; j += i, wj *= wn) {\n         \
    \   for (int k : rep(i)) {\n                b[0 + (j << 1) + k] = (a[0 + j + k]\
    \ + a[m + j + k]);\n                b[i + (j << 1) + k] = (a[0 + j + k] - a[m\
    \ + j + k]) * wj;\n            }\n        }\n    }\n    if (inv) {\n        mint\
    \ ninv = mint(n).inv();\n        for (mint &ai : a) ai *= ninv;\n    }\n}\ntemplate\
    \ <typename mint> void intt(vector<mint> &a) { ntt(a, true); }\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename mint>\
    \ void ntt(vector<mint> &a, bool inv = false) {\n    int n = a.size(), m = n >>\
    \ 1;\n    mint root = 2;\n    while (root.pow((mint::mod() - 1) >> 1) == 1) root\
    \ += 1;\n    mint wn = root.pow((mint::mod() - 1) / n);\n    if (inv) wn = wn.inv();\n\
    \    vector<mint> b(n);\n    for (int i = 1; i < n; i <<= 1, wn *= wn, swap(a,\
    \ b)) {\n        mint wj = 1;\n        for (int j = 0; j < m; j += i, wj *= wn)\
    \ {\n            for (int k : rep(i)) {\n                b[0 + (j << 1) + k] =\
    \ (a[0 + j + k] + a[m + j + k]);\n                b[i + (j << 1) + k] = (a[0 +\
    \ j + k] - a[m + j + k]) * wj;\n            }\n        }\n    }\n    if (inv)\
    \ {\n        mint ninv = mint(n).inv();\n        for (mint &ai : a) ai *= ninv;\n\
    \    }\n}\ntemplate <typename mint> void intt(vector<mint> &a) { ntt(a, true);\
    \ }"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/ntt.hpp
  requiredBy:
  - math/fps.hpp
  - math/subset_convolution.hpp
  - math/convolution.hpp
  - math/bostan_mori.hpp
  - math/kth_of_lrs.hpp
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/judge.yosupo.jp/Kth_Term_of_Linearly_Recurrent_Sequence.0.test.cpp
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
documentation_of: math/ntt.hpp
layout: document
title: "\u6570\u8AD6\u5909\u63DB"
---
## 概要
- 数論変換を行う。
- 2 基底の Stockham FFT で実装している。

## 詳細
- `<typename mint> ntt(vector<mint> &a)`  
    $a$ 自身を NTT した結果に更新する。列長 $n$ は 2 冪である必要がある。 $O(n\log n)$ 時間。

- `<typename mint> intt(vector<mint> &a)`  
    $a$ 自身を逆 NTT した結果に更新する。列長 $n$ は 2 冪である必要がある。 $O(n\log n)$ 時間。

## 参考
- [Stockham FFT 入門](http://wwwa.pikara.ne.jp/okojisan/stockham/stockham1.html)