---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
    title: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/and_or_convolution.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ull bit(int n) { return 1ull << n; }\nconstexpr ll sign(ll a) { return (a >\
    \ 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0\
    \ && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate\
    \ <typename T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename\
    \ T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b,\
    \ true : false; }\ntemplate <typename T, typename U> bool chmin(T &a, const U\
    \ &b) { return a > b ? a = b, true : false; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(const itr &i) const { return v != i.v; }\n   \
    \ };\n    ll l, r;\n    rep(ll r) : l(min(0ll, r)), r(r) {}\n    rep(ll l, ll\
    \ r) : l(min(l, r)), r(r) {}\n    itr begin() const { return l; };\n    itr end()\
    \ const { return r; };\n};\nstruct per {\n    struct itr {\n        ll v;\n  \
    \      itr(ll v) : v(v) {}\n        void operator++() { --v; }\n        ll operator*()\
    \ const { return v; }\n        bool operator!=(const itr &i) const { return v\
    \ != i.v; }\n    };\n    ll l, r;\n    per(ll r) : l(min(0ll, r)), r(r) {}\n \
    \   per(ll l, ll r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r\
    \ - 1; };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n   \
    \ static constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed <<\
    \ setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n    };\n\
    } iOS;\n#line 4 \"math/and_or_convolution.hpp\"\n\ntemplate <typename T> void\
    \ fzt_super(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1))\
    \ {\n        for (int s : rep(a.size())) {\n            if ((s >> i) & 1) a[s\
    \ ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate <typename T> void fzt_sub(vector<T>\
    \ &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int\
    \ s : rep(a.size())) {\n            if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n\
    \        }\n    }\n}\n\ntemplate <typename T> void fmt_super(vector<T> &a) {\n\
    \    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int s : rep(a.size()))\
    \ {\n            if ((s >> i) & 1) a[s ^ bit(i)] -= a[s];\n        }\n    }\n\
    }\n\ntemplate <typename T> void fmt_sub(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
    \ - 1)) {\n        for (int s : rep(a.size())) {\n            if (!((s >> i) &\
    \ 1)) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate <typename T> vector<T>\
    \ and_convolution(vector<T> a, vector<T> b) {\n    int n_ = max(a.size(), b.size()),\
    \ n;\n    for (n = 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n   \
    \ fzt_super(a), fzt_super(b);\n    for (int i : rep(n)) a[i] *= b[i];\n    fmt_super(a);\n\
    \    return a;\n}\n\ntemplate <typename T> vector<T> or_convolution(vector<T>\
    \ a, vector<T> b) {\n    int n_ = max(a.size(), b.size()), n;\n    for (n = 1;\
    \ n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    fzt_sub(a), fzt_sub(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    fmt_sub(a);\n    return a;\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T> void\
    \ fzt_super(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1))\
    \ {\n        for (int s : rep(a.size())) {\n            if ((s >> i) & 1) a[s\
    \ ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate <typename T> void fzt_sub(vector<T>\
    \ &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int\
    \ s : rep(a.size())) {\n            if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n\
    \        }\n    }\n}\n\ntemplate <typename T> void fmt_super(vector<T> &a) {\n\
    \    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int s : rep(a.size()))\
    \ {\n            if ((s >> i) & 1) a[s ^ bit(i)] -= a[s];\n        }\n    }\n\
    }\n\ntemplate <typename T> void fmt_sub(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
    \ - 1)) {\n        for (int s : rep(a.size())) {\n            if (!((s >> i) &\
    \ 1)) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate <typename T> vector<T>\
    \ and_convolution(vector<T> a, vector<T> b) {\n    int n_ = max(a.size(), b.size()),\
    \ n;\n    for (n = 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n   \
    \ fzt_super(a), fzt_super(b);\n    for (int i : rep(n)) a[i] *= b[i];\n    fmt_super(a);\n\
    \    return a;\n}\n\ntemplate <typename T> vector<T> or_convolution(vector<T>\
    \ a, vector<T> b) {\n    int n_ = max(a.size(), b.size()), n;\n    for (n = 1;\
    \ n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    fzt_sub(a), fzt_sub(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    fmt_sub(a);\n    return a;\n}"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/and_or_convolution.hpp
  requiredBy: []
  timestamp: '2021-09-12 02:09:55+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/judge.yosupo.jp/Bitwise_And_Convolution.0.test.cpp
  - test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
documentation_of: math/and_or_convolution.hpp
layout: document
title: "FZT / FMT, and / or \u7573\u307F\u8FBC\u307F"
---

## 概要
- FZT (Fast Zeta Transform、高速ゼータ変換)、FMT (Fast Moebius Transform、高速メビウス変換) を行う。FZT と FMT は互いに逆変換の関係にある。
- FZT / FMT を利用して and / orの畳み込みを行う。

## 詳細
- `<typename T> fzt_super(vector<T> &a)`  
    $a$ 自身をゼータ変換 (上位集合版) した結果に更新する。即ち、$a$ を集合上で定義される関数 $f$ と解釈したとき、
    $$g(S) := \sum_{T \supseteq S}{f(T)}$$
    で与えられる $g$ に更新する。

- `<typename T> fzt_sub(vector<T> &a)`  
    $a$ 自身をゼータ変換 (下位集合版) した結果に更新する。即ち、$a$ を集合上で定義される関数 $f$ と解釈したとき、
    $$g(S) := \sum_{T \subseteq S}{f(T)}$$
    で与えられる $g$ に更新する。

- `<typename T> fmt_super(vector<T> &a)`  
    $a$ 自身をメビウス変換 (上位集合版) した結果に更新する。即ち、$a$ を集合上で定義される関数 $g$ と解釈したとき、
    $$f(S) = \sum_{T \supseteq S}{(-1)^{|T| - |S|}g(T)}$$
    で与えられる $f$ に更新する。

- `<typename T> fzt_sub(vector<T> &a)`  
    $a$ 自身をメビウス変換 (下位集合版) した結果に更新する。即ち、$a$ を集合上で定義される関数 $g$ と解釈したとき、
    $$f(S) = \sum_{T \subseteq S}{(-1)^{|T| - |S|}g(T)}$$
    で与えられる $f$ に更新する。