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
  bundledCode: "#line 1 \"math/inner_basis.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\
    \n\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for\
    \ (int i = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define\
    \ bit(n) (1ull << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"math/inner_basis.hpp\"\n\nvector<ll>\
    \ inner_basis(vector<ll> a) {\n    vector<ll> basis, ret;\n    for (ll e : a)\
    \ {\n        ll e_ = e;\n        for (ll b : basis) chmin(e, e ^ b);\n       \
    \ if (e) basis.push_back(e), ret.push_back(e_);\n    }\n    return ret;\n}\n\n\
    \n"
  code: "#ifndef PWMTREE_XOR_BASIS_HPP\n#define PWMTREE_XOR_BASIS_HPP 1\n\n#include\
    \ \"../template.hpp\"\n\nvector<ll> inner_basis(vector<ll> a) {\n    vector<ll>\
    \ basis, ret;\n    for (ll e : a) {\n        ll e_ = e;\n        for (ll b : basis)\
    \ chmin(e, e ^ b);\n        if (e) basis.push_back(e), ret.push_back(e_);\n  \
    \  }\n    return ret;\n}\n\n#endif"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/inner_basis.hpp
  requiredBy: []
  timestamp: '2021-08-08 16:58:14+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/inner_basis.hpp
layout: document
redirect_from:
- /library/math/inner_basis.hpp
- /library/math/inner_basis.hpp.html
title: math/inner_basis.hpp
---
