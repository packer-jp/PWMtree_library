---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"util/doubling.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\n\
    constexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ull bit(int n)\
    \ { return 1ull << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\n\
    constexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr\
    \ ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr\
    \ T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> bool chmin(T &a, const U &b) { return a > b ? a = b,\
    \ true : false; }\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep\
    \ {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ ll PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"util/doubling.hpp\"\
    \n\nstruct doubling {\n    int n;\n    vector<int> next;\n    vector<vector<int>>\
    \ dst;\n    doubling(int n) : n(n), next(n + 1, n) {}\n    void set(int i, int\
    \ j) { next[i] = ((j == -1) ? n : j); }\n    void build(ll t_max) {\n        dst.assign(64\
    \ - __builtin_clzll(t_max), next);\n        for (int i : rep(dst.size() - 1))\
    \ {\n            for (int j : rep(n + 1)) dst[i + 1][j] = dst[i][dst[i][j]];\n\
    \        }\n    }\n    int get(int i, ll t) const {\n        if (i == -1) return\
    \ -1;\n        for (int j : per(dst.size())) {\n            if ((t >> j) & 1)\
    \ i = dst[j][i];\n        }\n        return i == n ? -1 : i;\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\nstruct doubling {\n    int\
    \ n;\n    vector<int> next;\n    vector<vector<int>> dst;\n    doubling(int n)\
    \ : n(n), next(n + 1, n) {}\n    void set(int i, int j) { next[i] = ((j == -1)\
    \ ? n : j); }\n    void build(ll t_max) {\n        dst.assign(64 - __builtin_clzll(t_max),\
    \ next);\n        for (int i : rep(dst.size() - 1)) {\n            for (int j\
    \ : rep(n + 1)) dst[i + 1][j] = dst[i][dst[i][j]];\n        }\n    }\n    int\
    \ get(int i, ll t) const {\n        if (i == -1) return -1;\n        for (int\
    \ j : per(dst.size())) {\n            if ((t >> j) & 1) i = dst[j][i];\n     \
    \   }\n        return i == n ? -1 : i;\n    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: util/doubling.hpp
  requiredBy: []
  timestamp: '2021-09-07 03:13:34+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/doubling.hpp
layout: document
redirect_from:
- /library/util/doubling.hpp
- /library/util/doubling.hpp.html
title: util/doubling.hpp
---
