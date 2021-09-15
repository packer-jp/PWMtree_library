---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':x:'
    path: math/xor_convolution.hpp
    title: "xor \u7573\u307F\u8FBC\u307F"
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/fwht.hpp\"\n\n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\n#define uniq(a)\
    \ (a).erase(unique(all(a)), (a).end())\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing pll = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll\
    \ dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0,\
    \ 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr\
    \ ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll\
    \ cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> constexpr T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a) {\n   \
    \ os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n}\n\
    template <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n\
    \    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os <<\
    \ *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const set<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep\
    \ {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        ll operator*() const { return v; }\n        bool\
    \ operator!=(itr i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll\
    \ l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const\
    \ { return l; };\n    itr end() const { return r; };\n};\nstruct per {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { --v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l),\
    \ r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1;\
    \ };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static\
    \ constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"math/fwht.hpp\"\
    \n\ntemplate <typename T> void fwht(vector<T> &a) {\n    int n = a.size();\n \
    \   for (int i = 1; i < n; i <<= 1) {\n        for (int j = 0; j < n; j += i <<\
    \ 1) {\n            for (int k : rep(i)) {\n                T p = a[0 + j + k],\
    \ q = a[i + j + k];\n                a[0 + j + k] = p + q;\n                a[i\
    \ + j + k] = p - q;\n            }\n        }\n    }\n}\n\ntemplate <typename\
    \ T> void ifwht(vector<T> &a) {\n    fwht(a);\n    T ninv = T(1) / a.size();\n\
    \    for (T &ai : a) ai *= ninv;\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T> void\
    \ fwht(vector<T> &a) {\n    int n = a.size();\n    for (int i = 1; i < n; i <<=\
    \ 1) {\n        for (int j = 0; j < n; j += i << 1) {\n            for (int k\
    \ : rep(i)) {\n                T p = a[0 + j + k], q = a[i + j + k];\n       \
    \         a[0 + j + k] = p + q;\n                a[i + j + k] = p - q;\n     \
    \       }\n        }\n    }\n}\n\ntemplate <typename T> void ifwht(vector<T> &a)\
    \ {\n    fwht(a);\n    T ninv = T(1) / a.size();\n    for (T &ai : a) ai *= ninv;\n\
    }"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/fwht.hpp
  requiredBy:
  - math/xor_convolution.hpp
  timestamp: '2021-09-16 04:43:03+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/judge.yosupo.jp/Bitwise_Xor_Convolution.0.test.cpp
documentation_of: math/fwht.hpp
layout: document
title: "\u9AD8\u901F\u30A6\u30A9\u30EB\u30B7\u30E5\u30FB\u30A2\u30C0\u30DE\u30FC\u30EB\
  \u5909\u63DB"
---

## 概要
- 高速ウォルシュ・アダマール変換を行う。

- [cympfh さんの記事](https://cympfh.cc/aiura/hadamard-xor-convolution)