---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: data_structure/persistent_uf.hpp
    title: "\u5B8C\u5168\u6C38\u7D9A Union-Find Tree"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/persistent_array.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using\
    \ priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false;\
    \ }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) { return a\
    \ > b ? a = b, true : false; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
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
    \    };\n} iOS;\n#line 4 \"data_structure/persistent_array.hpp\"\n\ntemplate <typename\
    \ T, int SHIFT> struct persistent_array {\n    using ptr = shared_ptr<persistent_array>;\n\
    \    static constexpr int BASE = bit(SHIFT);\n    static constexpr int MASK =\
    \ BASE - 1;\n    T val;\n    array<ptr, BASE> ch;\n    persistent_array(int n\
    \ = 1, T val = T()) : val(val) {\n        for (int i : rep(BASE)) {\n        \
    \    int m = (n >> SHIFT) + ((n & MASK) > i);\n            if (m > 1 || m > 0\
    \ && i > 0) ch[i] = ptr(new persistent_array(m, val));\n        }\n    }\n   \
    \ persistent_array(T val, const array<ptr, BASE> &ch) : val(val), ch(ch) {}\n\
    \    persistent_array(T val, const array<ptr, BASE> &ch, int i, ptr chp) : val(val),\
    \ ch(ch) { this->ch[i] = chp; }\n    T get(int i) const { return i > 0 ? ch[i\
    \ & MASK]->get(i >> SHIFT) : val; }\n    ptr setp(int i, T val) const {\n    \
    \    return ptr(i > 0 ? new persistent_array(this->val, ch, i & MASK, ch[i & MASK]->setp(i\
    \ >> SHIFT, val))\n                         : new persistent_array(val, ch));\n\
    \    }\n    persistent_array set(int i, T val) const { return *setp(i, val); }\n\
    };\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename T, int\
    \ SHIFT> struct persistent_array {\n    using ptr = shared_ptr<persistent_array>;\n\
    \    static constexpr int BASE = bit(SHIFT);\n    static constexpr int MASK =\
    \ BASE - 1;\n    T val;\n    array<ptr, BASE> ch;\n    persistent_array(int n\
    \ = 1, T val = T()) : val(val) {\n        for (int i : rep(BASE)) {\n        \
    \    int m = (n >> SHIFT) + ((n & MASK) > i);\n            if (m > 1 || m > 0\
    \ && i > 0) ch[i] = ptr(new persistent_array(m, val));\n        }\n    }\n   \
    \ persistent_array(T val, const array<ptr, BASE> &ch) : val(val), ch(ch) {}\n\
    \    persistent_array(T val, const array<ptr, BASE> &ch, int i, ptr chp) : val(val),\
    \ ch(ch) { this->ch[i] = chp; }\n    T get(int i) const { return i > 0 ? ch[i\
    \ & MASK]->get(i >> SHIFT) : val; }\n    ptr setp(int i, T val) const {\n    \
    \    return ptr(i > 0 ? new persistent_array(this->val, ch, i & MASK, ch[i & MASK]->setp(i\
    \ >> SHIFT, val))\n                         : new persistent_array(val, ch));\n\
    \    }\n    persistent_array set(int i, T val) const { return *setp(i, val); }\n\
    };"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/persistent_array.hpp
  requiredBy:
  - data_structure/persistent_uf.hpp
  timestamp: '2021-09-12 15:48:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Persistent_UnionFind.0.test.cpp
  - test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
documentation_of: data_structure/persistent_array.hpp
layout: document
title: "\u5B8C\u5168\u6C38\u7D9A\u914D\u5217"
---

## 参考
- [37zigen さんの記事](https://37zigen.com/persistent-array/)