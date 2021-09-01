---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: "NTT/\u7573\u307F\u8FBC\u307F"
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: math/fps.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
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
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/modint.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\null bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) { return\
    \ ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return ((a > b) ? (a = b, true) : (false)); }\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os\
    \ << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr\
    \ << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n\
    }\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep {\n    struct\
    \ itr {\n        int v;\n        itr(int v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        int operator*() const { return v; }\n        bool operator!=(const\
    \ itr &i) const { return v != i.v; }\n    };\n    int l, r;\n    rep(int r) :\
    \ l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l, r)), r(r) {}\n    itr\
    \ begin() const { return l; };\n    itr end() const { return r; };\n};\nstruct\
    \ per {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n    \
    \    void operator++() { --v; }\n        int operator*() const { return v; }\n\
    \        bool operator!=(const itr &i) const { return v != i.v; }\n    };\n  \
    \  int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int l, int r) :\
    \ l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n    itr end()\
    \ const { return l - 1; };\n};\n#line 4 \"math/modint.hpp\"\n\ntemplate <ll MOD\
    \ = 1000000007> struct modint {\n    ll val;\n    modint(ll val = 0) : val(val\
    \ >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return\
    \ MOD; }\n    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0,\
    \ t;\n        while (b > 0) {\n            t = a / b;\n            swap(a -= t\
    \ * b, b);\n            swap(u -= t * v, v);\n        }\n        return modint(u);\n\
    \    }\n    modint pow(ll n) const {\n        modint ret = 1, mul = val;\n   \
    \     while (n) {\n            if (n & 1) ret *= mul;\n            mul *= mul;\n\
    \            n >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    bool\
    \ operator==(const modint &a) const { return val == a.val; }\n    bool operator!=(const\
    \ modint &a) const { return rel_ops::operator!=(*this, a); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend modint operator+(const modint &a, const modint &b) { return modint(a)\
    \ += b; }\n    friend modint operator-(const modint &a, const modint &b) { return\
    \ modint(a) -= b; }\n    friend modint operator*(const modint &a, const modint\
    \ &b) { return modint(a) *= b; }\n    friend modint operator/(const modint &a,\
    \ const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <ll MOD = 1000000007>\
    \ struct modint {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val %\
    \ MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n\
    \    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n   \
    \     while (b > 0) {\n            t = a / b;\n            swap(a -= t * b, b);\n\
    \            swap(u -= t * v, v);\n        }\n        return modint(u);\n    }\n\
    \    modint pow(ll n) const {\n        modint ret = 1, mul = val;\n        while\
    \ (n) {\n            if (n & 1) ret *= mul;\n            mul *= mul;\n       \
    \     n >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    bool\
    \ operator==(const modint &a) const { return val == a.val; }\n    bool operator!=(const\
    \ modint &a) const { return rel_ops::operator!=(*this, a); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend modint operator+(const modint &a, const modint &b) { return modint(a)\
    \ += b; }\n    friend modint operator-(const modint &a, const modint &b) { return\
    \ modint(a) -= b; }\n    friend modint operator*(const modint &a, const modint\
    \ &b) { return modint(a) *= b; }\n    friend modint operator/(const modint &a,\
    \ const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/modint.hpp
  requiredBy:
  - math/convolution.hpp
  - math/fps.hpp
  timestamp: '2021-09-01 11:36:48+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
documentation_of: math/modint.hpp
layout: document
title: modint
---

# 概要
- $\bmod\,m$ で考えた整数について、各種演算をサポートする。

# 詳細
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

    - `modint pow(ll n)`  
        $n$ 乗した結果を返す。 $O(\log n)$ 時間。

    - 四則演算、比較、複合代入

    - `iostream` を用いた入出力


# 参考文献
- [うしさんのライブラリ](https://ei1333.github.io/library/math/combinatorics/mod-int.cpp)