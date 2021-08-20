---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':question:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':x:'
    path: data_structure/segtree.hpp
    title: data_structure/segtree.hpp
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
  - icon: ':warning:'
    path: graph/zobfs.hpp
    title: graph/zobfs.hpp
  - icon: ':warning:'
    path: math/combination.hpp
    title: math/combination.hpp
  - icon: ':question:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':x:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':warning:'
    path: math/inner_basis.hpp
    title: math/inner_basis.hpp
  - icon: ':heavy_check_mark:'
    path: math/matrix.hpp
    title: math/matrix.hpp
  - icon: ':question:'
    path: math/modint.hpp
    title: math/modint.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
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
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_smallest_Window_I.2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\null bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate\
    \ <typename T> T sq(const T &a) { return a * a; }\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n        a = b;\n      \
    \  return true;\n    }\n    return false;\n}\ntemplate <typename T, typename U>\
    \ bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a = b;\n        return\
    \ true;\n    }\n    return false;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\n\nstruct rep {\n    struct itr {\n        int v;\n        itr(int v) :\
    \ v(v) {}\n        void operator++() { ++v; }\n        int operator*() const {\
    \ return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    rep(int r) : l(0), r(r) {}\n    rep(int l, int\
    \ r) : l(l), r(r) {}\n    itr begin() const { return l; };\n    itr end() const\
    \ { return r; };\n};\nstruct per {\n    struct itr {\n        int v;\n       \
    \ itr(int v) : v(v) {}\n        void operator++() { --v; }\n        int operator*()\
    \ const { return v; }\n        bool operator!=(const itr &i) const { return v\
    \ != i.v; }\n    };\n    int l, r;\n    per(int r) : l(0), r(r) {}\n    per(int\
    \ l, int r) : l(l), r(r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define\
    \ all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing ull = unsigned long\
    \ long;\null bit(int n) { return 1ull << n; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep\
    \ {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(0), r(r) {}\n    rep(int l, int r) : l(l), r(r) {}\n\
    \    itr begin() const { return l; };\n    itr end() const { return r; };\n};\n\
    struct per {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n\
    \        void operator++() { --v; }\n        int operator*() const { return v;\
    \ }\n        bool operator!=(const itr &i) const { return v != i.v; }\n    };\n\
    \    int l, r;\n    per(int r) : l(0), r(r) {}\n    per(int l, int r) : l(l),\
    \ r(r) {}\n    itr begin() const { return r - 1; };\n    itr end() const { return\
    \ l - 1; };\n};"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy:
  - math/convolution.hpp
  - math/modint.hpp
  - math/matrix.hpp
  - math/combination.hpp
  - math/fps.hpp
  - math/inner_basis.hpp
  - graph/dijkstra.hpp
  - graph/zobfs.hpp
  - data_structure/lazy_segtree.hpp
  - data_structure/segtree.hpp
  timestamp: '2021-08-19 13:08:19+09:00'
  verificationStatus: LIBRARY_SOME_WA
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
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
