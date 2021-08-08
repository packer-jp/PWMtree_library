---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/segtree.hpp\"\n\n\n\n#line 1 \"template.hpp\"\
    \n\n\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for\
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
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"data_structure/segtree.hpp\"\n\ntemplate\
    \ <class S> struct segtree {\n    using V = class S::val_t;\n    int n, size;\n\
    \    vector<V> val;\n    segtree(int n) : segtree(vector(n, S::e())) {}\n    segtree(vector<V>\
    \ src) : n(src.size()) {\n        for (size = 1; size < n; size <<= 1) {}\n  \
    \      val.resize(size << 1);\n        copy(all(src), val.begin() + size);\n \
    \       for (int i = size - 1; i > 0; i--) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    void set(int i, const V &a) {\n        val[i += size]\
    \ = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n\
    \    }\n    V get(int i) const { return val[i + size]; }\n    V prod(int l, int\
    \ r) const {\n        V a = S::e(), b = S::e();\n        for (l += size, r +=\
    \ size; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) a = S::op(a, val[l++]);\n\
    \            if (r & 1) b = S::op(val[--r], b);\n        }\n        return S::op(a,\
    \ b);\n    }\n    template <class F> int max_right(int l, F f) const {\n     \
    \   if (l == n) return n;\n        V a = S::e();\n        l += size;\n       \
    \ do {\n            while (~l & 1) l >>= 1;\n            if (!f(S::op(a, val[l])))\
    \ {\n                while (l < size) {\n                    l = l << 1;\n   \
    \                 if (f(S::op(a, val[l]))) a = S::op(a, val[l++]);\n         \
    \       }\n                return l - size;\n            }\n            a = S::op(a,\
    \ val[l++]);\n        } while ((l & -l) != l);\n        return n;\n    }\n   \
    \ template <class F> int min_left(int r, F f) const {\n        if (r == 0) return\
    \ 0;\n        V a = S::e();\n        r += size;\n        do {\n            r--;\n\
    \            while (r > 1 && r & 1) r >>= 1;\n            if (!f(S::op(val[r],\
    \ a))) {\n                while (r < size) {\n                    r = r << 1 |\
    \ 1;\n                    if (f(S::op(val[r], a))) a = S::op(val[r--], a);\n \
    \               }\n                return r + 1 - size;\n            }\n     \
    \       a = S::op(val[r], a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid {\n    using val_t = ll;\n    static val_t\
    \ op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return LLONG_MAX;\
    \ }\n};\n\nstruct sum_monoid {\n    using val_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return a + b; }\n    static val_t e() { return 0; }\n};\n\n\n"
  code: "#ifndef PWMTREE_SEGTREE_HPP\n#define PWMTREE_SEGTREE_HPP 1\n\n#include \"\
    ../template.hpp\"\n\ntemplate <class S> struct segtree {\n    using V = class\
    \ S::val_t;\n    int n, size;\n    vector<V> val;\n    segtree(int n) : segtree(vector(n,\
    \ S::e())) {}\n    segtree(vector<V> src) : n(src.size()) {\n        for (size\
    \ = 1; size < n; size <<= 1) {}\n        val.resize(size << 1);\n        copy(all(src),\
    \ val.begin() + size);\n        for (int i = size - 1; i > 0; i--) val[i] = S::op(val[i\
    \ << 1 | 0], val[i << 1 | 1]);\n    }\n    void set(int i, const V &a) {\n   \
    \     val[i += size] = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 |\
    \ 0], val[i << 1 | 1]);\n    }\n    V get(int i) const { return val[i + size];\
    \ }\n    V prod(int l, int r) const {\n        V a = S::e(), b = S::e();\n   \
    \     for (l += size, r += size; l < r; l >>= 1, r >>= 1) {\n            if (l\
    \ & 1) a = S::op(a, val[l++]);\n            if (r & 1) b = S::op(val[--r], b);\n\
    \        }\n        return S::op(a, b);\n    }\n    template <class F> int max_right(int\
    \ l, F f) const {\n        if (l == n) return n;\n        V a = S::e();\n    \
    \    l += size;\n        do {\n            while (~l & 1) l >>= 1;\n         \
    \   if (!f(S::op(a, val[l]))) {\n                while (l < size) {\n        \
    \            l = l << 1;\n                    if (f(S::op(a, val[l]))) a = S::op(a,\
    \ val[l++]);\n                }\n                return l - size;\n          \
    \  }\n            a = S::op(a, val[l++]);\n        } while ((l & -l) != l);\n\
    \        return n;\n    }\n    template <class F> int min_left(int r, F f) const\
    \ {\n        if (r == 0) return 0;\n        V a = S::e();\n        r += size;\n\
    \        do {\n            r--;\n            while (r > 1 && r & 1) r >>= 1;\n\
    \            if (!f(S::op(val[r], a))) {\n                while (r < size) {\n\
    \                    r = r << 1 | 1;\n                    if (f(S::op(val[r],\
    \ a))) a = S::op(val[r--], a);\n                }\n                return r +\
    \ 1 - size;\n            }\n            a = S::op(val[r], a);\n        } while\
    \ ((r & -r) != r);\n        return 0;\n    }\n};\n\nstruct min_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return min(a, b); }\n \
    \   static val_t e() { return LLONG_MAX; }\n};\n\nstruct sum_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return a + b; }\n    static\
    \ val_t e() { return 0; }\n};\n\n#endif"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/segtree.hpp
  requiredBy: []
  timestamp: '2021-08-08 17:00:54+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
documentation_of: data_structure/segtree.hpp
layout: document
redirect_from:
- /library/data_structure/segtree.hpp
- /library/data_structure/segtree.hpp.html
title: data_structure/segtree.hpp
---
