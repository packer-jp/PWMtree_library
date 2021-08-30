---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/combination.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\null bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) {\n   \
    \ if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) {\n    if (b\
    \ < a) {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\
    template <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n\
    \    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n   \
    \ return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid\
    \ debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head\
    \ &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr\
    \ << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \"\
    : \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep {\n\
    \    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\n#line 4 \"math/combination.hpp\"\n\
    \ntemplate <typename mint> struct combination {\n    vector<mint> fact, finv,\
    \ inv;\n    combination(int n) : fact(n + 1), finv(n + 1), inv(n + 1) {\n    \
    \    fact[0] = fact[1] = finv[0] = finv[1] = inv[1] = 1;\n        for (int i :\
    \ rep(2, n + 1)) {\n            fact[i] = fact[i - 1] * i;\n            inv[i]\
    \ = -inv[mint::mod() % i] * (mint::mod() / i);\n            finv[i] = finv[i -\
    \ 1] * inv[i];\n        }\n    }\n    mint P(int n, int r) { return r < 0 || n\
    \ < r ? 0 : (fact[n] * finv[n - r]); }\n    mint C(int n, int r) { return P(n,\
    \ r) * finv[r]; }\n    mint H(int n, int r) { return C(n + r - 1, r); }\n    mint\
    \ catalan(int n) { return C(2 * n, n) / (n + 1); }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename mint>\
    \ struct combination {\n    vector<mint> fact, finv, inv;\n    combination(int\
    \ n) : fact(n + 1), finv(n + 1), inv(n + 1) {\n        fact[0] = fact[1] = finv[0]\
    \ = finv[1] = inv[1] = 1;\n        for (int i : rep(2, n + 1)) {\n           \
    \ fact[i] = fact[i - 1] * i;\n            inv[i] = -inv[mint::mod() % i] * (mint::mod()\
    \ / i);\n            finv[i] = finv[i - 1] * inv[i];\n        }\n    }\n    mint\
    \ P(int n, int r) { return r < 0 || n < r ? 0 : (fact[n] * finv[n - r]); }\n \
    \   mint C(int n, int r) { return P(n, r) * finv[r]; }\n    mint H(int n, int\
    \ r) { return C(n + r - 1, r); }\n    mint catalan(int n) { return C(2 * n, n)\
    \ / (n + 1); }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/combination.hpp
  requiredBy: []
  timestamp: '2021-08-20 12:52:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/combination.hpp
layout: document
redirect_from:
- /library/math/combination.hpp
- /library/math/combination.hpp.html
title: math/combination.hpp
---
