---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
    title: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/cht.hpp\"\n\n#line 2 \"template.hpp\"\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ull bit(int n) { return 1ull << n; }\nconstexpr ll sign(ll a) { return (a >\
    \ 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0\
    \ && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate\
    \ <typename T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename\
    \ T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b,\
    \ true : false; }\ntemplate <typename T, typename U> bool chmin(T &a, const U\
    \ &b) { return a > b ? a = b, true : false; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(const itr &i) const { return v != i.v; }\n   \
    \ };\n    ll l, r;\n    rep(ll r) : l(min(0ll, r)), r(r) {}\n    rep(ll l, ll\
    \ r) : l(min(l, r)), r(r) {}\n    itr begin() const { return l; };\n    itr end()\
    \ const { return r; };\n};\nstruct per {\n    struct itr {\n        ll v;\n  \
    \      itr(ll v) : v(v) {}\n        void operator++() { --v; }\n        ll operator*()\
    \ const { return v; }\n        bool operator!=(const itr &i) const { return v\
    \ != i.v; }\n    };\n    ll l, r;\n    per(ll r) : l(min(0ll, r)), r(r) {}\n \
    \   per(ll l, ll r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r\
    \ - 1; };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n   \
    \ static constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed <<\
    \ setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n    };\n\
    } iOS;\n#line 4 \"data_structure/cht.hpp\"\n\ntemplate <typename S, bool MIN>\
    \ struct cht {\n    using V = typename S::val_t;\n    struct line {\n        mutable\
    \ V a, b, l, r;\n        bool operator<(const line &o) const { return a < o.a;\
    \ };\n        bool operator<(V x) const { return r < x; };\n    };\n    set<line,\
    \ less<>> lines;\n    void add(V a, V b) {\n        if (MIN) a = -a, b = -b;\n\
    \        line cur = {a, b, -S::inf(), S::inf()};\n        auto p = lines.lower_bound(cur);\n\
    \        if (p != lines.end() && p->a == a) {\n            if (p->b > b) {\n \
    \               return;\n            } else {\n                p = lines.erase(p);\n\
    \            }\n        }\n        auto fi = [](const line &s, const line &t)\
    \ -> V { return S::div(-s.b + t.b, s.a - t.a); };\n        auto ci = [](const\
    \ line &s, const line &t) -> V { return -S::div(s.b - t.b, s.a - t.a); };\n  \
    \      if (p != lines.begin() && ci(cur, *prev(p)) >= prev(p)->r && p != lines.end()\
    \ && fi(cur, *p) <= p->l) return;\n        while (p != lines.begin()) {\n    \
    \        auto pp = prev(p);\n            if (ci(cur, *pp) <= pp->l) {\n      \
    \          lines.erase(pp);\n                continue;\n            }\n      \
    \      cur.l = ci(cur, *pp), pp->r = fi(cur, *pp);\n            break;\n     \
    \   }\n        while (p != lines.end()) {\n            if (fi(cur, *p) >= p->r)\
    \ {\n                p = lines.erase(p);\n                continue;\n        \
    \    }\n            cur.r = fi(cur, *p), p->l = ci(cur, *p);\n            break;\n\
    \        }\n        lines.insert(cur);\n    }\n    V get(V x) {\n        line\
    \ l = *lines.lower_bound(x);\n        V ret = l.a * x + l.b;\n        if (MIN)\
    \ ret = -ret;\n        return ret;\n    }\n};\n\nstruct ll_cht {\n    using val_t\
    \ = ll;\n    static val_t div(val_t num, val_t den) { return fdiv(num, den); }\n\
    \    static val_t inf() { return LLONG_MAX; }\n};\n\nstruct double_cht {\n   \
    \ using val_t = double;\n    static val_t div(val_t num, val_t den) { return num\
    \ / den; }\n    static val_t inf() { return numeric_limits<double>::infinity();\
    \ }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S, bool\
    \ MIN> struct cht {\n    using V = typename S::val_t;\n    struct line {\n   \
    \     mutable V a, b, l, r;\n        bool operator<(const line &o) const { return\
    \ a < o.a; };\n        bool operator<(V x) const { return r < x; };\n    };\n\
    \    set<line, less<>> lines;\n    void add(V a, V b) {\n        if (MIN) a =\
    \ -a, b = -b;\n        line cur = {a, b, -S::inf(), S::inf()};\n        auto p\
    \ = lines.lower_bound(cur);\n        if (p != lines.end() && p->a == a) {\n  \
    \          if (p->b > b) {\n                return;\n            } else {\n  \
    \              p = lines.erase(p);\n            }\n        }\n        auto fi\
    \ = [](const line &s, const line &t) -> V { return S::div(-s.b + t.b, s.a - t.a);\
    \ };\n        auto ci = [](const line &s, const line &t) -> V { return -S::div(s.b\
    \ - t.b, s.a - t.a); };\n        if (p != lines.begin() && ci(cur, *prev(p)) >=\
    \ prev(p)->r && p != lines.end() && fi(cur, *p) <= p->l) return;\n        while\
    \ (p != lines.begin()) {\n            auto pp = prev(p);\n            if (ci(cur,\
    \ *pp) <= pp->l) {\n                lines.erase(pp);\n                continue;\n\
    \            }\n            cur.l = ci(cur, *pp), pp->r = fi(cur, *pp);\n    \
    \        break;\n        }\n        while (p != lines.end()) {\n            if\
    \ (fi(cur, *p) >= p->r) {\n                p = lines.erase(p);\n             \
    \   continue;\n            }\n            cur.r = fi(cur, *p), p->l = ci(cur,\
    \ *p);\n            break;\n        }\n        lines.insert(cur);\n    }\n   \
    \ V get(V x) {\n        line l = *lines.lower_bound(x);\n        V ret = l.a *\
    \ x + l.b;\n        if (MIN) ret = -ret;\n        return ret;\n    }\n};\n\nstruct\
    \ ll_cht {\n    using val_t = ll;\n    static val_t div(val_t num, val_t den)\
    \ { return fdiv(num, den); }\n    static val_t inf() { return LLONG_MAX; }\n};\n\
    \nstruct double_cht {\n    using val_t = double;\n    static val_t div(val_t num,\
    \ val_t den) { return num / den; }\n    static val_t inf() { return numeric_limits<double>::infinity();\
    \ }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/cht.hpp
  requiredBy: []
  timestamp: '2021-09-11 00:10:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
documentation_of: data_structure/cht.hpp
layout: document
title: Convex Hull Trick
---

## 参考
- [えびちゃんさんのスライド](https://hcpc-hokudai.github.io/archive/algorithm_convex_hull_trick_001.pdf)
- [kactl](https://github.com/kth-competitive-programming/kactl/blob/main/content/data-structures/LineContainer.h)