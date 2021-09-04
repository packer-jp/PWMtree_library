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
  bundledCode: "#line 2 \"util/bisect.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing vll = vector<ll>;\n\
    constexpr ull bit(int n) { return 1ull << n; }\nconstexpr ll sign(ll a) { return\
    \ (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b)\
    \ < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate\
    \ <typename T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename\
    \ T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) { return ((a < b) ? (a\
    \ = b, true) : (false)); }\ntemplate <typename T, typename U> bool chmin(T &a,\
    \ const U &b) { return ((a > b) ? (a = b, true) : (false)); }\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n#ifdef\
    \ ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl;\
    \ }\ntemplate <typename Head, typename... Tail> void debug(Head &&head, Tail &&...\
    \ tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n\
    }\n#define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
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
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\n#line\
    \ 4 \"util/bisect.hpp\"\n\ntemplate <typename F> ll bisect(ll ok, ll ng, F f)\
    \ {\n    while (abs(ok - ng) > 1) {\n        ll mid = (ok + ng) / 2;\n       \
    \ (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n\ntemplate <typename F>\
    \ double continuous_bisect(double ok, double ng, F f, int n) {\n    while (n--)\
    \ {\n        double mid = (ok + ng) / 2;\n        (f(mid) ? ok : ng) = mid;\n\
    \    }\n    return ok;\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename F> ll\
    \ bisect(ll ok, ll ng, F f) {\n    while (abs(ok - ng) > 1) {\n        ll mid\
    \ = (ok + ng) / 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n\
    }\n\ntemplate <typename F> double continuous_bisect(double ok, double ng, F f,\
    \ int n) {\n    while (n--) {\n        double mid = (ok + ng) / 2;\n        (f(mid)\
    \ ? ok : ng) = mid;\n    }\n    return ok;\n}"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: util/bisect.hpp
  requiredBy: []
  timestamp: '2021-09-04 20:56:23+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: util/bisect.hpp
layout: document
title: "\u4E8C\u5206\u6CD5"
---

# 概要
二分法を用いて、述語の成立 / 不成立の境界値を計算する。

# 詳細
- `<typename F> bisect(ll ok, ll ng, F f)`  
    $f(ok)\land \lnot f(ng)$ とする。 $f$ が成立し、 $ng$ 側に $1$ 動かすと成立しなくなるような整数を一つ返す。 $O(\log |ok - ng|)$ 時間。

- `<typename F> continuous_bisect(double ok, double ng, F f, int n)`  
    $f(ok), \lnot f(ng)$ とする。 $f$ が成立し、 $ng$ 側に微小量動かすと成立しなくなるような実数を一つ返す。精度は $\frac{|ok - ng|}{2^n}$ 。 $O(n)$ 時間。

# 参考
- [因幡めぐるさんのツイート](https://twitter.com/meguru_comp/status/697008509376835584)