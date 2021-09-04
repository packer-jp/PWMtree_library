---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: data_structure/cht.hpp
    title: Convex Hull Trick
  - icon: ':x:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':x:'
    path: data_structure/persistent_array.hpp
    title: data_structure/persistent_array.hpp
  - icon: ':x:'
    path: data_structure/segtree.hpp
    title: Segment Tree
  - icon: ':x:'
    path: data_structure/splay_tree.hpp
    title: Splay Tree
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: "Dijkstra \u6CD5"
  - icon: ':warning:'
    path: graph/oibfs.hpp
    title: 01-BFS
  - icon: ':warning:'
    path: math/combination.hpp
    title: "\u7D44\u307F\u5408\u308F\u305B"
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: "NTT/\u7573\u307F\u8FBC\u307F"
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: "\u5F62\u5F0F\u7684\u51AA\u7D1A\u6570"
  - icon: ':warning:'
    path: math/inner_basis.hpp
    title: "xor \u57FA\u5E95"
  - icon: ':heavy_check_mark:'
    path: math/matrix.hpp
    title: "\u884C\u5217"
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: modint
  - icon: ':warning:'
    path: util/bisect.hpp
    title: "\u4E8C\u5206\u6CD5"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Convolution.0.test.cpp
    title: test/judge.yosupo.jp/Convolution.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
    title: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - icon: ':x:'
    path: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
    title: test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
    title: test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
    title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing\
    \ ull = unsigned long long;\nusing vll = vector<ll>;\nconstexpr ull bit(int n)\
    \ { return 1ull << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\n\
    constexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr\
    \ ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr\
    \ T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return ((a < b) ? (a = b, true) : (false));\
    \ }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) { return ((a\
    \ > b) ? (a = b, true) : (false)); }\ntemplate <typename T> ostream &operator<<(ostream\
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
    \ }\n    };\n    int l, r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return l; };\n  \
    \  itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n      \
    \  int v;\n        itr(int v) : v(v) {}\n        void operator++() { --v; }\n\
    \        int operator*() const { return v; }\n        bool operator!=(const itr\
    \ &i) const { return v != i.v; }\n    };\n    int l, r;\n    per(int r) : l(min(0,\
    \ r)), r(r) {}\n    per(int l, int r) : l(min(l, r)), r(r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define\
    \ all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing ull = unsigned long\
    \ long;\nusing vll = vector<ll>;\nconstexpr ull bit(int n) { return 1ull << n;\
    \ }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll\
    \ a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a,\
    \ ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr T sq(const T\
    \ &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) { return ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename\
    \ T, typename U> bool chmin(T &a, const U &b) { return ((a > b) ? (a = b, true)\
    \ : (false)); }\ntemplate <typename T> ostream &operator<<(ostream &os, const\
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
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};"
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy:
  - graph/oibfs.hpp
  - graph/dijkstra.hpp
  - math/inner_basis.hpp
  - math/modint.hpp
  - math/combination.hpp
  - math/convolution.hpp
  - math/matrix.hpp
  - math/fps.hpp
  - util/bisect.hpp
  - data_structure/lazy_segtree.hpp
  - data_structure/splay_tree.hpp
  - data_structure/cht.hpp
  - data_structure/segtree.hpp
  - data_structure/persistent_array.hpp
  timestamp: '2021-09-04 20:56:23+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
  - test/judge.yosupo.jp/Inv_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  - test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Pow_of_Formal_Power_Series.0.test.cpp
  - test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  - test/judge.yosupo.jp/Convolution.0.test.cpp
  - test/judge.yosupo.jp/Persistent_Queue.0.test.cpp
  - test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
