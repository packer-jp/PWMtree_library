---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
    title: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/fzt_and_fmt.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
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
    \ {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        ll operator*() const { return v; }\n        bool\
    \ operator!=(const itr &i) const { return v != i.v; }\n    };\n    ll l, r;\n\
    \    rep(ll r) : l(min(0ll, r)), r(r) {}\n    rep(ll l, ll r) : l(min(l, r)),\
    \ r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        ll v;\n        itr(ll v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        ll operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    ll l, r;\n    per(ll r) : l(min(0ll, r)), r(r) {}\n    per(ll\
    \ l, ll r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"math/fzt_and_fmt.hpp\"\
    \n\ntemplate <typename T> void fzt_super(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if ((s >> i) & 1) a[s ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate\
    \ <typename T> void fzt_sub(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n        }\n    }\n}\n\n\
    template <typename T> void fmt_super(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if ((s >> i) & 1) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate\
    \ <typename T> void fmt_sub(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if (!((s >> i) & 1)) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T> void\
    \ fzt_super(vector<T> &a) {\n    int n = __builtin_ffs(a.size()) - 1;\n    for\
    \ (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n            if ((s\
    \ >> i) & 1) a[s ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate <typename\
    \ T> void fzt_sub(vector<T> &a) {\n    int n = __builtin_ffs(a.size()) - 1;\n\
    \    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n           \
    \ if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate\
    \ <typename T> void fmt_super(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if ((s >> i) & 1) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate\
    \ <typename T> void fmt_sub(vector<T> &a) {\n    int n = __builtin_ffs(a.size())\
    \ - 1;\n    for (int i : rep(n)) {\n        for (int s : rep(bit(n))) {\n    \
    \        if (!((s >> i) & 1)) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/fzt_and_fmt.hpp
  requiredBy: []
  timestamp: '2021-09-11 20:42:15+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
documentation_of: math/fzt_and_fmt.hpp
layout: document
redirect_from:
- /library/math/fzt_and_fmt.hpp
- /library/math/fzt_and_fmt.hpp.html
title: math/fzt_and_fmt.hpp
---
