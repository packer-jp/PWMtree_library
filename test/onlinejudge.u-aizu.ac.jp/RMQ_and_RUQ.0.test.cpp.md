---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/lazy_segtree.hpp
    title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_F
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_F
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp\"\n\
    #define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_F\"\
    \n#line 1 \"data_structure/lazy_segtree.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\
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
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"data_structure/lazy_segtree.hpp\"\n\
    \ntemplate <typename S> struct lazy_segtree {\n    using V = typename S::val_t;\n\
    \    using F = typename S::fn_t;\n    int n, size, log;\n    vector<V> val;\n\
    \    vector<F> lazy;\n    lazy_segtree(int n) : lazy_segtree(vector(n, S::e()))\
    \ {}\n    lazy_segtree(vector<V> src) : n(src.size()) {\n        for (size = 1,\
    \ log = 0; size < n; size <<= 1, log++) {}\n        val.resize(size << 1);\n \
    \       copy(all(src), val.begin() + size);\n        lazy.resize(size << 1, S::id());\n\
    \        for (int i = size - 1; i > 0; i--) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    V reflect(int i) { return S::mapping(lazy[i], val[i]);\
    \ }\n    void push(int i) {\n        val[i] = S::mapping(lazy[i], val[i]);\n \
    \       lazy[i << 1 | 0] = S::composition(lazy[i], lazy[i << 1 | 0]);\n      \
    \  lazy[i << 1 | 1] = S::composition(lazy[i], lazy[i << 1 | 1]);\n        lazy[i]\
    \ = S::id();\n    }\n    void thrust(int i) {\n        for (int j = log; j; j--)\
    \ push(i >> j);\n    }\n    void recalc(int i) {\n        while (i >>= 1) val[i]\
    \ = S::op(reflect(i << 1 | 0), reflect(i << 1 | 1));\n    }\n    void set(int\
    \ i, const V &a) {\n        thrust(i += size);\n        val[i] = a;\n        lazy[i]\
    \ = S::id();\n        recalc(i);\n    }\n    void apply(int l, int r, F f) {\n\
    \        thrust(l += size);\n        thrust(r += size - 1);\n        for (int\
    \ i = l, j = r + 1; i < j; i >>= 1, j >>= 1) {\n            if (i & 1) lazy[i++]\
    \ = S::composition(f, lazy[i]);\n            if (j & 1) lazy[j] = S::composition(f,\
    \ lazy[--j]);\n        }\n        recalc(l);\n        recalc(r);\n    }\n    V\
    \ get(int i) {\n        thrust(i += size);\n        return reflect(i);\n    }\n\
    \    V prod(int l, int r) {\n        thrust(l += size);\n        thrust(r += size\
    \ - 1);\n        V a = S::e(), b = S::e();\n        for (r++; l < r; l >>= 1,\
    \ r >>= 1) {\n            if (l & 1) a = S::op(a, reflect(l++));\n           \
    \ if (r & 1) b = S::op(reflect(--r), b);\n        }\n        return S::op(a, b);\n\
    \    }\n    template <typename G> int max_right(int l, G g) {\n        if (l ==\
    \ n) return n;\n        thrust(l += size);\n        V a = S::e();\n        do\
    \ {\n            while (~l & 1) l >>= 1;\n            if (!g(S::op(a, reflect(l))))\
    \ {\n                while (l < size) {\n                    push(l);\n      \
    \              l = l << 1 | 0;\n                    if (g(S::op(a, reflect(l))))\
    \ a = S::op(a, reflect(l++));\n                }\n                return l - size;\n\
    \            }\n            a = S::op(a, reflect(l++));\n        } while ((l &\
    \ -l) != l);\n        return n;\n    }\n    template <typename G> int min_left(int\
    \ r, G g) {\n        if (r == 0) return 0;\n        thrust((r += size) - 1);\n\
    \        V a = S::e();\n        do {\n            r--;\n            while (r >\
    \ 1 && r & 1) r >>= 1;\n            if (!g(S::op(reflect(r), a))) {\n        \
    \        while (r < size) {\n                    push(r);\n                  \
    \  r = r << 1 | 1;\n                    if (g(S::op(reflect(r), a))) a = S::op(reflect(r--),\
    \ a);\n                }\n                return r + 1 - size;\n            }\n\
    \            a = S::op(reflect(r), a);\n        } while ((r & -r) != r);\n   \
    \     return 0;\n    }\n};\n\nstruct min_monoid_with_addition {\n    using val_t\
    \ = ll;\n    using fn_t = ll;\n    static val_t op(val_t a, val_t b) { return\
    \ min(a, b); }\n    static val_t e() { return LLONG_MAX; }\n    static val_t mapping(fn_t\
    \ f, val_t a) { return a == e() ? a : f + a; }\n    static fn_t composition(fn_t\
    \ f, fn_t g) { return f + g; }\n    static fn_t id() { return 0; }\n};\n\nstruct\
    \ min_monoid_with_update {\n    using val_t = ll;\n    using fn_t = ll;\n    static\
    \ val_t op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return\
    \ LLONG_MAX; }\n    static val_t mapping(fn_t f, val_t a) { return f == id() ?\
    \ a : f; }\n    static fn_t composition(fn_t f, fn_t g) { return f == id() ? g\
    \ : f; }\n    static fn_t id() { return -1; };\n};\n\nstruct sum_monoid_with_addition\
    \ {\n    using val_t = pair<ll, ll>;\n    using fn_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return {a.first + b.first, a.second + b.second}; }\n    static\
    \ val_t e() { return {0, 0}; }\n    static val_t mapping(fn_t f, val_t a) { return\
    \ {a.first + f * a.second, a.second}; }\n    static fn_t composition(fn_t f, fn_t\
    \ g) { return f + g; }\n    static fn_t id() { return 0; };\n};\n\nstruct sum_monoid_with_update\
    \ {\n    using val_t = pair<ll, ll>;\n    using fn_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return {a.first + b.first, a.second + b.second}; }\n    static\
    \ val_t e() { return {0, 0}; }\n    static val_t mapping(fn_t f, val_t a) { return\
    \ f == id() ? a : make_pair(f * a.second, a.second); }\n    static fn_t composition(fn_t\
    \ f, fn_t g) { return f == id() ? g : f; }\n    static fn_t id() { return LLONG_MIN;\
    \ };\n};\n\n\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp\"\
    \n\n#line 5 \"test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp\"\nusing namespace\
    \ std;\n\nint main() {\n    ll n, q;\n    cin >> n >> q;\n    vector<ll> src(n,\
    \ INT_MAX);\n    lazy_segtree<min_monoid_with_update> lst(src);\n    while (q--)\
    \ {\n        ll com;\n        cin >> com;\n        if (com == 0) {\n         \
    \   ll s, t, x;\n            cin >> s >> t >> x;\n            lst.apply(s, t +\
    \ 1, x);\n        } else if (com == 1) {\n            ll s, t;\n            cin\
    \ >> s >> t;\n            cout << lst.prod(s, t + 1) << endl;\n        }\n   \
    \ }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_F\"\
    \n#include \"../../data_structure/lazy_segtree.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nint main() {\n    ll n, q;\n    cin >> n >> q;\n    vector<ll>\
    \ src(n, INT_MAX);\n    lazy_segtree<min_monoid_with_update> lst(src);\n    while\
    \ (q--) {\n        ll com;\n        cin >> com;\n        if (com == 0) {\n   \
    \         ll s, t, x;\n            cin >> s >> t >> x;\n            lst.apply(s,\
    \ t + 1, x);\n        } else if (com == 1) {\n            ll s, t;\n         \
    \   cin >> s >> t;\n            cout << lst.prod(s, t + 1) << endl;\n        }\n\
    \    }\n}"
  dependsOn:
  - data_structure/lazy_segtree.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  requiredBy: []
  timestamp: '2021-05-15 23:16:06+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
---
