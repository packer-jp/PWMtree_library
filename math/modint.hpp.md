---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':x:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':x:'
    path: math/bostan_mori.hpp
    title: math/bostan_mori.hpp
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
    path: test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
    title: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
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
    path: test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
    title: test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\n\n#line 1 \"template.hpp\"\n#include\
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
    \ 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n\nint main()\
    \ {}\n#line 4 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007> struct modint\
    \ {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val)\
    \ % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n    modint inv() const\
    \ {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n        while (b > 0) {\n\
    \            t = a / b;\n            swap(a -= t * b, b);\n            swap(u\
    \ -= t * v, v);\n        }\n        return modint(u);\n    }\n    modint pow(ll\
    \ k) const {\n        modint ret = 1, mul = val;\n        while (k) {\n      \
    \      if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>= 1;\n\
    \        }\n        return ret;\n    }\n    modint &operator+=(const modint &a)\
    \ {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return *this;\n \
    \   }\n    modint &operator-=(const modint &a) {\n        if ((val += MOD - a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
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
    \ modint &a) { return os << a.val; }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <ll MOD = 1000000007>\
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
    \ modint &a) { return os << a.val; }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy:
  - math/fps.hpp
  - math/subset_convolution.hpp
  - math/bostan_mori.hpp
  - math/kth_of_lrs.hpp
  - data_structure/lazy_segtree.hpp
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - test/judge.yosupo.jp/Kth_Term_of_Linearly_Recurrent_Sequence.0.test.cpp
  - test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Range_Affine_Range_Sum.0.test.cpp
  - test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - test/judge.yosupo.jp/Subset_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
documentation_of: math/modint.hpp
layout: document
title: modint
---

## 概要
- $\bmod\,m$ で考えた整数について、各種演算をサポートする。

## 詳細
- `<ll MOD> struct modint`  
    modint 本体。

    - `ll MOD`  
        テンプレート引数として与える法 $m$。

    - `ll val`  
        $\bmod\,m$ で考えたときの値。

    - `static ll mod()`  
        $m$ を返す。

    - `modint inv()`  
        逆元を返す。 $m$ と互いに素である場合に逆元が存在する。 $O(\log m)$ 時間。

    - `modint pow(ll k)`  
        $k$ 乗した結果を返す。 $O(\log k)$ 時間。

    - 四則演算、比較、複合代入

    - `iostream` を用いた入出力


## 参考
- [うしさんのライブラリ](https://ei1333.github.io/library/math/combinatorics/mod-int.cpp)