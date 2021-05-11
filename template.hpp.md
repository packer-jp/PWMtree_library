---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: data_structure/lazy_segtree.hpp
    title: data_structure/lazy_segtree.hpp
  - icon: ':heavy_check_mark:'
    path: data_structure/segtree.hpp
    title: data_structure/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  - icon: ':x:'
    path: math/matrix.hpp
    title: math/matrix.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/shortest_path_0.test.cpp
    title: test/judge.yosupo.jp/shortest_path_0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_3.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I_2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I_2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\n#define all(a)\
    \ (a).begin(), (a).end()\n#define bit(n) (1LL << (n))\nusing ll = long long;\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T> T sq(T a) { return a * a; }\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n        a =\
    \ b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename T,\
    \ typename U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, vector<T> a) {\n    os << \"(\";\n    for (auto itr\
    \ = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ?\
    \ \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (int\
    \ i = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define bit(n)\
    \ (1LL << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(T a)\
    \ { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a, const\
    \ U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const U\
    \ &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n    return\
    \ false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, vector<T>\
    \ a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++)\
    \ { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n\
    \    return os;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy:
  - math/matrix.hpp
  - graph/dijkstra.hpp
  - data_structure/segtree.hpp
  - data_structure/lazy_segtree.hpp
  timestamp: '2021-05-11 17:03:13+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I_2.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ_0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_3.test.cpp
  - test/judge.yosupo.jp/shortest_path_0.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
