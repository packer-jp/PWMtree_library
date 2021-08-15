---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':heavy_check_mark:'
    path: data_structure/segtree.hpp
    title: data_structure/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  - icon: ':warning:'
    path: graph/zobfs.hpp
    title: graph/zobfs.hpp
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':warning:'
    path: math/inner_basis.hpp
    title: math/inner_basis.hpp
  - icon: ':heavy_check_mark:'
    path: math/matrix.hpp
    title: math/matrix.hpp
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: math/modint.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
    title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I.2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template.hpp\"\n\n\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\n#define all(a)\
    \ (a).begin(), (a).end()\n#define bit(n) (1ull << (n))\nusing ll = long long;\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a * a; }\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n\
    \        a = b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename\
    \ T, typename U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a =\
    \ b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n \
    \   for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n\n"
  code: "#ifndef PWMTREE_TEMPLATE_HPP\n#define PWMTREE_TEMPLATE_HPP 1\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (int i = 0; i\
    \ < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define bit(n) (1ull\
    \ << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n#endif"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy:
  - math/convolution.hpp
  - math/modint.hpp
  - math/matrix.hpp
  - math/fps.hpp
  - math/inner_basis.hpp
  - graph/dijkstra.hpp
  - graph/zobfs.hpp
  - data_structure/lazy_segtree.hpp
  - data_structure/segtree.hpp
  timestamp: '2021-05-12 23:06:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I.2.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
