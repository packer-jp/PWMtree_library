---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/segtree.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using\
    \ priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false;\
    \ }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) { return a\
    \ > b ? a = b, true : false; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(itr i) const { return v < *i; }\n    };\n    ll\
    \ l, r;\n    rep(ll l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n \
    \   itr begin() const { return l; };\n    itr end() const { return r; };\n};\n\
    struct per {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n \
    \       void operator++() { --v; }\n        ll operator*() const { return v; }\n\
    \        bool operator!=(itr i) const { return v > *i; }\n    };\n    ll l, r;\n\
    \    per(ll l, ll r) : l(l), r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\nstruct\
    \ io_setup {\n    static constexpr int PREC = 20;\n    io_setup() {\n        cout\
    \ << fixed << setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n\
    \    };\n} iOS;\n#line 4 \"data_structure/segtree.hpp\"\n\ntemplate <typename\
    \ S> struct segtree {\n    using V = typename S::val_t;\n    int n, size;\n  \
    \  vector<V> val;\n    segtree(int n) : segtree(vector(n, S::e())) {}\n    segtree(const\
    \ vector<V> &src) : n(src.size()) {\n        for (size = 1; size < n; size <<=\
    \ 1) {}\n        val.resize(size << 1);\n        copy(all(src), val.begin() +\
    \ size);\n        for (int i : per(1, size)) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    void set(int i, const V &a) {\n        val[i += size]\
    \ = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n\
    \    }\n    V get(int i) const { return val[i + size]; }\n    V prod(int l, int\
    \ r) const {\n        V a = S::e(), b = S::e();\n        for (l += size, r +=\
    \ size; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) a = S::op(a, val[l++]);\n\
    \            if (r & 1) b = S::op(val[--r], b);\n        }\n        return S::op(a,\
    \ b);\n    }\n    template <typename F> int max_right(int l, F f) const {\n  \
    \      if (l == n) return n;\n        V a = S::e();\n        l += size;\n    \
    \    do {\n            while (~l & 1) l >>= 1;\n            if (!f(S::op(a, val[l])))\
    \ {\n                while (l < size) {\n                    l = l << 1;\n   \
    \                 if (f(S::op(a, val[l]))) a = S::op(a, val[l++]);\n         \
    \       }\n                return l - size;\n            }\n            a = S::op(a,\
    \ val[l++]);\n        } while ((l & -l) != l);\n        return n;\n    }\n   \
    \ template <typename F> int min_left(int r, F f) const {\n        if (r == 0)\
    \ return 0;\n        V a = S::e();\n        r += size;\n        do {\n       \
    \     r--;\n            while (r > 1 && r & 1) r >>= 1;\n            if (!f(S::op(val[r],\
    \ a))) {\n                while (r < size) {\n                    r = r << 1 |\
    \ 1;\n                    if (f(S::op(val[r], a))) a = S::op(val[r--], a);\n \
    \               }\n                return r + 1 - size;\n            }\n     \
    \       a = S::op(val[r], a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid {\n    using val_t = ll;\n    static val_t\
    \ op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return LLONG_MAX;\
    \ }\n};\n\nstruct sum_monoid {\n    using val_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return a + b; }\n    static val_t e() { return 0; }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ segtree {\n    using V = typename S::val_t;\n    int n, size;\n    vector<V>\
    \ val;\n    segtree(int n) : segtree(vector(n, S::e())) {}\n    segtree(const\
    \ vector<V> &src) : n(src.size()) {\n        for (size = 1; size < n; size <<=\
    \ 1) {}\n        val.resize(size << 1);\n        copy(all(src), val.begin() +\
    \ size);\n        for (int i : per(1, size)) val[i] = S::op(val[i << 1 | 0], val[i\
    \ << 1 | 1]);\n    }\n    void set(int i, const V &a) {\n        val[i += size]\
    \ = a;\n        while (i >>= 1) val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n\
    \    }\n    V get(int i) const { return val[i + size]; }\n    V prod(int l, int\
    \ r) const {\n        V a = S::e(), b = S::e();\n        for (l += size, r +=\
    \ size; l < r; l >>= 1, r >>= 1) {\n            if (l & 1) a = S::op(a, val[l++]);\n\
    \            if (r & 1) b = S::op(val[--r], b);\n        }\n        return S::op(a,\
    \ b);\n    }\n    template <typename F> int max_right(int l, F f) const {\n  \
    \      if (l == n) return n;\n        V a = S::e();\n        l += size;\n    \
    \    do {\n            while (~l & 1) l >>= 1;\n            if (!f(S::op(a, val[l])))\
    \ {\n                while (l < size) {\n                    l = l << 1;\n   \
    \                 if (f(S::op(a, val[l]))) a = S::op(a, val[l++]);\n         \
    \       }\n                return l - size;\n            }\n            a = S::op(a,\
    \ val[l++]);\n        } while ((l & -l) != l);\n        return n;\n    }\n   \
    \ template <typename F> int min_left(int r, F f) const {\n        if (r == 0)\
    \ return 0;\n        V a = S::e();\n        r += size;\n        do {\n       \
    \     r--;\n            while (r > 1 && r & 1) r >>= 1;\n            if (!f(S::op(val[r],\
    \ a))) {\n                while (r < size) {\n                    r = r << 1 |\
    \ 1;\n                    if (f(S::op(val[r], a))) a = S::op(val[r--], a);\n \
    \               }\n                return r + 1 - size;\n            }\n     \
    \       a = S::op(val[r], a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid {\n    using val_t = ll;\n    static val_t\
    \ op(val_t a, val_t b) { return min(a, b); }\n    static val_t e() { return LLONG_MAX;\
    \ }\n};\n\nstruct sum_monoid {\n    using val_t = ll;\n    static val_t op(val_t\
    \ a, val_t b) { return a + b; }\n    static val_t e() { return 0; }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/segtree.hpp
  requiredBy: []
  timestamp: '2021-09-12 15:48:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.1.test.cpp
documentation_of: data_structure/segtree.hpp
layout: document
title: Segment Tree
---

## 概要
- モノイド $(V, \times)$ を考える。
- 長さ $n$ の $V$ の元の列 $s$ に対する処理を行う。

## 詳細

- `<typename S> struct segtree`  
    Segment Tree 本体。

    - `typename S`  
        テンプレート引数として与える構造体。

        - `using val_t`  
            $V$ を表す型。

        - `static val_t op(val_t a, val_t b)`  
            $a \times b$ を返す。
        
        - `static val_t e()`  
            $(V, \times)$ の単位元 $\mathrm{e}$ を返す。

    - `using V`  
        $V$ を表す型。

    - `(constructor)(int n)`  
        長さ $n$ 、全要素 $\mathrm{e}$ で初期化。

    - `(constructor)(vector<V> src)`  
        $s := src$ として初期化。

    - `void set(int i, V a)`  
        要素 $i$ を $a$ に置き換える。$O(\log n)$ 時間。

    - `V get(int i)`  
        $i$ 番目の要素を得る。 $O(\log n)$ 時間。
    
    - `V prod(int l, int r)`  
        $\mathrm{e} \times s_l \times \cdots \times s_{r-1}$ を計算する。 $O(\log n)$ 時間。

    - `<typename G> max_right(int l, G g)`  
        述語 $g$ について、
        - $g(\mathrm{prod}(l, r))$
        - $r = n \lor \lnot g(\mathrm{prod}(l, r + 1))$

        を共に満たす $r$ をいずれか一つ返す。 $O(\log n)$ 時間。 $g(\mathrm{e})$ を要請。


    - `<typename G> int min_left(int r, G g)`  
        述語 $g$ について、
        - $g(\mathrm{prod}(l, r))$
        - $l = 0 \lor \lnot g(\mathrm{prod}(l - 1, r))$

        を共に満たす $l$ をいずれか一つ返す。 $O(\log n)$ 時間。 $g(\mathrm{e})$ を要請。

- `struct min_monoid_with_addition`  
    区間最小/一点更新クエリを処理するときに`segtree`にテンプレート引数 `S` として与える。

- `struct sum_monoid_with_update`  
    区間和/一点更新クエリを処理するときに`segtree`にテンプレート引数 `S` として与える。

## 参考
- [ACL](https://atcoder.github.io/ac-library/production/document_ja/segtree.html)
- [えびちゃんさんのスライド](https://hcpc-hokudai.github.io/archive/structure_segtree_001.pdf)