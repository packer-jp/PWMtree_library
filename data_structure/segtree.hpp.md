---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
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
    \ \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n#line 2 \"data_structure/segtree.hpp\"\
    \n\ntemplate <typename S> struct segtree {\n    using V = typename S::val_t;\n\
    \    int n, size;\n    vector<V> val;\n    segtree(int n) : segtree(vector(n,\
    \ S::e())) {}\n    segtree(vector<V> src) : n(src.size()) {\n        for (size\
    \ = 1; size < n; size <<= 1) {}\n        val.resize(size << 1);\n        copy(all(src),\
    \ val.begin() + size);\n        for (int i = size - 1; i > 0; i--) val[i] = S::op(val[i\
    \ << 1 | 0], val[i << 1 | 1]);\n    }\n    void set(int i, V a) {\n        val[i\
    \ += size] = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    V get(int i) { return val[i + size]; }\n    V prod(int\
    \ l, int r) {\n        V a = S::e(), b = S::e();\n        for (l += size, r +=\
    \ size; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) a = S::op(a, val[l++]);\n\
    \            if (r & 1) b = S::op(val[--r], b);\n        }\n        return S::op(a,\
    \ b);\n    }\n    template <typename F> int max_right(int l, F f) {\n        if\
    \ (l == n) return n;\n        V a = S::e();\n        l += size;\n        do {\n\
    \            while (~l & 1) l >>= 1;\n            if (!f(S::op(a, val[l]))) {\n\
    \                while (l < size) {\n                    l = l << 1;\n       \
    \             if (f(S::op(a, val[l]))) a = S::op(a, val[l++]);\n             \
    \   }\n                return l - size;\n            }\n            a = S::op(a,\
    \ val[l++]);\n        } while ((l & -l) != l);\n        return n;\n    }\n   \
    \ template <typename F> int min_left(int r, F f) {\n        if (r == 0) return\
    \ 0;\n        V a = S::e();\n        r += size;\n        do {\n            r--;\n\
    \            while (r > 1 && r & 1) r >>= 1;\n            if (!f(S::op(val[r],\
    \ a))) {\n                while (r < size) {\n                    r = r << 1 |\
    \ 1;\n                    if (f(S::op(val[r], a))) a = S::op(val[r--], a);\n \
    \               }\n                return r + 1 - size;\n            }\n     \
    \       a = S::op(val[r], a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid {\n    using val_t = ll;\n    static val_t\
    \ op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return LLONG_MAX;\
    \ }\n};\n\nstruct sum_monoid {\n    using val_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return a + b; }\n    static val_t e() { return 0; }\n};\n"
  code: "#include \"../template.hpp\"\n\ntemplate <typename S> struct segtree {\n\
    \    using V = typename S::val_t;\n    int n, size;\n    vector<V> val;\n    segtree(int\
    \ n) : segtree(vector(n, S::e())) {}\n    segtree(vector<V> src) : n(src.size())\
    \ {\n        for (size = 1; size < n; size <<= 1) {}\n        val.resize(size\
    \ << 1);\n        copy(all(src), val.begin() + size);\n        for (int i = size\
    \ - 1; i > 0; i--) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n    }\n\
    \    void set(int i, V a) {\n        val[i += size] = a;\n        while (i >>=\
    \ 1) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n    }\n    V get(int i)\
    \ { return val[i + size]; }\n    V prod(int l, int r) {\n        V a = S::e(),\
    \ b = S::e();\n        for (l += size, r += size; l < r; l >>= 1, r >>= 1) {\n\
    \            if (l & 1) a = S::op(a, val[l++]);\n            if (r & 1) b = S::op(val[--r],\
    \ b);\n        }\n        return S::op(a, b);\n    }\n    template <typename F>\
    \ int max_right(int l, F f) {\n        if (l == n) return n;\n        V a = S::e();\n\
    \        l += size;\n        do {\n            while (~l & 1) l >>= 1;\n     \
    \       if (!f(S::op(a, val[l]))) {\n                while (l < size) {\n    \
    \                l = l << 1;\n                    if (f(S::op(a, val[l]))) a =\
    \ S::op(a, val[l++]);\n                }\n                return l - size;\n \
    \           }\n            a = S::op(a, val[l++]);\n        } while ((l & -l)\
    \ != l);\n        return n;\n    }\n    template <typename F> int min_left(int\
    \ r, F f) {\n        if (r == 0) return 0;\n        V a = S::e();\n        r +=\
    \ size;\n        do {\n            r--;\n            while (r > 1 && r & 1) r\
    \ >>= 1;\n            if (!f(S::op(val[r], a))) {\n                while (r <\
    \ size) {\n                    r = r << 1 | 1;\n                    if (f(S::op(val[r],\
    \ a))) a = S::op(val[r--], a);\n                }\n                return r +\
    \ 1 - size;\n            }\n            a = S::op(val[r], a);\n        } while\
    \ ((r & -r) != r);\n        return 0;\n    }\n};\n\nstruct min_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return min(a, b); }\n \
    \   static val_t e() { return LLONG_MAX; }\n};\n\nstruct sum_monoid {\n    using\
    \ val_t = ll;\n    static val_t op(val_t a, val_t b) { return a + b; }\n    static\
    \ val_t e() { return 0; }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/segtree.hpp
  requiredBy: []
  timestamp: '2021-05-11 17:03:13+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I_0.test.cpp
documentation_of: data_structure/segtree.hpp
layout: document
redirect_from:
- /library/data_structure/segtree.hpp
- /library/data_structure/segtree.hpp.html
title: data_structure/segtree.hpp
---
