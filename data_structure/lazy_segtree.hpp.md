---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
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
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/lazy_segtree.hpp\"\n\n#line 1 \"template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\nusing ll =\
    \ long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing\
    \ vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr\
    \ ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return\
    \ (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b)\
    \ < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr\
    \ ull bit(int n) { return 1ull << n; }\ntemplate <typename T> constexpr T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) { return a < b ? a = b, true : false; }\ntemplate <typename T, typename\
    \ U> bool chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a)\
    \ {\n    os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n\
    }\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const set<T>\
    \ &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr)\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n  \
    \  return os;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\"\
    ;\n    return os;\n}\ntemplate <typename T, typename U> ostream &operator<<(ostream\
    \ &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep\
    \ {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        ll operator*() const { return v; }\n        bool\
    \ operator!=(itr i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll\
    \ l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const\
    \ { return l; };\n    itr end() const { return r; };\n};\nstruct per {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { --v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l),\
    \ r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1;\
    \ };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static\
    \ constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"data_structure/lazy_segtree.hpp\"\
    \n\ntemplate <typename S> struct lazy_segtree {\n    using V = typename S::val_t;\n\
    \    using F = typename S::fn_t;\n    int n, size, log;\n    vector<V> val;\n\
    \    vector<F> lazy;\n    lazy_segtree(int n) : lazy_segtree(vector(n, S::e()))\
    \ {}\n    lazy_segtree(const vector<V> &src) : n(src.size()) {\n        for (size\
    \ = 1, log = 0; size < n; size <<= 1, log++) {}\n        val.resize(size << 1);\n\
    \        copy(all(src), val.begin() + size);\n        lazy.resize(size << 1, S::id());\n\
    \        for (int i : per(1, size)) val[i] = S::op(val[i << 1 | 0], val[i << 1\
    \ | 1]);\n    }\n    V reflect(int i) { return S::mapping(lazy[i], val[i]); }\n\
    \    void push(int i) {\n        val[i] = S::mapping(lazy[i], val[i]);\n     \
    \   lazy[i << 1 | 0] = S::composition(lazy[i], lazy[i << 1 | 0]);\n        lazy[i\
    \ << 1 | 1] = S::composition(lazy[i], lazy[i << 1 | 1]);\n        lazy[i] = S::id();\n\
    \    }\n    void thrust(int i) {\n        for (int j = log; j; j--) push(i >>\
    \ j);\n    }\n    void recalc(int i) {\n        while (i >>= 1) val[i] = S::op(reflect(i\
    \ << 1 | 0), reflect(i << 1 | 1));\n    }\n    void set(int i, const V &a) {\n\
    \        thrust(i += size);\n        val[i] = a;\n        lazy[i] = S::id();\n\
    \        recalc(i);\n    }\n    void apply(int l, int r, F f) {\n        thrust(l\
    \ += size);\n        thrust(r += size - 1);\n        for (int i = l, j = r + 1;\
    \ i < j; i >>= 1, j >>= 1) {\n            if (i & 1) lazy[i] = S::composition(f,\
    \ lazy[i]), ++i;\n            if (j & 1) --j, lazy[j] = S::composition(f, lazy[j]);\n\
    \        }\n        recalc(l);\n        recalc(r);\n    }\n    V get(int i) {\n\
    \        thrust(i += size);\n        return reflect(i);\n    }\n    V prod(int\
    \ l, int r) {\n        thrust(l += size);\n        thrust(r += size - 1);\n  \
    \      V a = S::e(), b = S::e();\n        for (r++; l < r; l >>= 1, r >>= 1) {\n\
    \            if (l & 1) a = S::op(a, reflect(l++));\n            if (r & 1) b\
    \ = S::op(reflect(--r), b);\n        }\n        return S::op(a, b);\n    }\n \
    \   template <typename G> int max_right(int l, G g) {\n        if (l == n) return\
    \ n;\n        thrust(l += size);\n        V a = S::e();\n        do {\n      \
    \      while (~l & 1) l >>= 1;\n            if (!g(S::op(a, reflect(l)))) {\n\
    \                while (l < size) {\n                    push(l);\n          \
    \          l = l << 1 | 0;\n                    if (g(S::op(a, reflect(l)))) a\
    \ = S::op(a, reflect(l++));\n                }\n                return l - size;\n\
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
    \ };\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ lazy_segtree {\n    using V = typename S::val_t;\n    using F = typename S::fn_t;\n\
    \    int n, size, log;\n    vector<V> val;\n    vector<F> lazy;\n    lazy_segtree(int\
    \ n) : lazy_segtree(vector(n, S::e())) {}\n    lazy_segtree(const vector<V> &src)\
    \ : n(src.size()) {\n        for (size = 1, log = 0; size < n; size <<= 1, log++)\
    \ {}\n        val.resize(size << 1);\n        copy(all(src), val.begin() + size);\n\
    \        lazy.resize(size << 1, S::id());\n        for (int i : per(1, size))\
    \ val[i] = S::op(val[i << 1 | 0], val[i << 1 | 1]);\n    }\n    V reflect(int\
    \ i) { return S::mapping(lazy[i], val[i]); }\n    void push(int i) {\n       \
    \ val[i] = S::mapping(lazy[i], val[i]);\n        lazy[i << 1 | 0] = S::composition(lazy[i],\
    \ lazy[i << 1 | 0]);\n        lazy[i << 1 | 1] = S::composition(lazy[i], lazy[i\
    \ << 1 | 1]);\n        lazy[i] = S::id();\n    }\n    void thrust(int i) {\n \
    \       for (int j = log; j; j--) push(i >> j);\n    }\n    void recalc(int i)\
    \ {\n        while (i >>= 1) val[i] = S::op(reflect(i << 1 | 0), reflect(i <<\
    \ 1 | 1));\n    }\n    void set(int i, const V &a) {\n        thrust(i += size);\n\
    \        val[i] = a;\n        lazy[i] = S::id();\n        recalc(i);\n    }\n\
    \    void apply(int l, int r, F f) {\n        thrust(l += size);\n        thrust(r\
    \ += size - 1);\n        for (int i = l, j = r + 1; i < j; i >>= 1, j >>= 1) {\n\
    \            if (i & 1) lazy[i] = S::composition(f, lazy[i]), ++i;\n         \
    \   if (j & 1) --j, lazy[j] = S::composition(f, lazy[j]);\n        }\n       \
    \ recalc(l);\n        recalc(r);\n    }\n    V get(int i) {\n        thrust(i\
    \ += size);\n        return reflect(i);\n    }\n    V prod(int l, int r) {\n \
    \       thrust(l += size);\n        thrust(r += size - 1);\n        V a = S::e(),\
    \ b = S::e();\n        for (r++; l < r; l >>= 1, r >>= 1) {\n            if (l\
    \ & 1) a = S::op(a, reflect(l++));\n            if (r & 1) b = S::op(reflect(--r),\
    \ b);\n        }\n        return S::op(a, b);\n    }\n    template <typename G>\
    \ int max_right(int l, G g) {\n        if (l == n) return n;\n        thrust(l\
    \ += size);\n        V a = S::e();\n        do {\n            while (~l & 1) l\
    \ >>= 1;\n            if (!g(S::op(a, reflect(l)))) {\n                while (l\
    \ < size) {\n                    push(l);\n                    l = l << 1 | 0;\n\
    \                    if (g(S::op(a, reflect(l)))) a = S::op(a, reflect(l++));\n\
    \                }\n                return l - size;\n            }\n        \
    \    a = S::op(a, reflect(l++));\n        } while ((l & -l) != l);\n        return\
    \ n;\n    }\n    template <typename G> int min_left(int r, G g) {\n        if\
    \ (r == 0) return 0;\n        thrust((r += size) - 1);\n        V a = S::e();\n\
    \        do {\n            r--;\n            while (r > 1 && r & 1) r >>= 1;\n\
    \            if (!g(S::op(reflect(r), a))) {\n                while (r < size)\
    \ {\n                    push(r);\n                    r = r << 1 | 1;\n     \
    \               if (g(S::op(reflect(r), a))) a = S::op(reflect(r--), a);\n   \
    \             }\n                return r + 1 - size;\n            }\n       \
    \     a = S::op(reflect(r), a);\n        } while ((r & -r) != r);\n        return\
    \ 0;\n    }\n};\n\nstruct min_monoid_with_addition {\n    using val_t = ll;\n\
    \    using fn_t = ll;\n    static val_t op(val_t a, val_t b) { return min(a, b);\
    \ }\n    static val_t e() { return LLONG_MAX; }\n    static val_t mapping(fn_t\
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
    \ };\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/lazy_segtree.hpp
  requiredBy: []
  timestamp: '2021-09-16 04:43:03+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.2.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RSQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RUQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/RMQ_and_RAQ.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/The_Smallest_Window_I.3.test.cpp
documentation_of: data_structure/lazy_segtree.hpp
layout: document
title: "\u9045\u5EF6\u8A55\u4FA1 Segment Tree"
---

## 概要
- $v, w \in V$ および $f, g \in F$ として、以下の条件を満たすモノイド $(V, \times)$ と作用素モノイド $(F, \circ)$ を考える。
    - $f(v \times w) = f(v) \times f(w)$
    - $f(g(v)) = f \circ g(v)$
- 長さ $n$ の $V$ の元の列 $s$ に対する処理を行う。

## 詳細
- `<typename S> struct lazy_segtree`  
    遅延評価 Segment Tree 本体。

    - `typename S`  
        テンプレート引数として与える構造体。

        - `using val_t`  
            $V$ を表す型。

        - `using fn_t`  
            $F$ を表す型。

        - `static val_t op(val_t a, val_t b)`  
            $a \times b$ を返す。
        
        - `static val_t e()`  
            $(V, \times)$ の単位元 $\mathrm{e}$ を返す。

        - `static val_t mapping(fn_t f, val_t a)`  
            $f(a)$ を返す。

        - `static fn_t composition(fn_t f, fn_t g)`  
            $f \circ g$ を返す。

        - `static fn_t id()`  
            $(F, \circ)$ の単位元 $\mathrm{id}$ を返す。

    - `using V`  
        $V$ を表す型。

    - `using F`  
        $F$ を表す型。

    - `(constructor)(int n)`  
        長さ $n$ 、全要素 $\mathrm{e}$ で初期化。

    - `(constructor)(vector<V> src)`  
        $s := src$ として初期化。

    - `void set(int i, V a)`  
        要素 $i$ を $a$ に置き換える。$O(\log n)$ 時間。

    - `void apply(int l, int r, F f)`  
        $s_l, \cdots s_{r-1}$ に $f$ を作用させる。 $O(\log n)$ 時間。

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
    区間最小/区間可算クエリを処理するときに`lazy_segtree`にテンプレート引数 `S` として与える。

- `struct min_monoid_with_update`  
    区間最小/区間更新クエリを処理するときに`lazy_segtree`にテンプレート引数 `S` として与える。

- `struct sum_monoid_with_addition`  
    区間和/区間可算クエリを処理するときに`lazy_segtree`にテンプレート引数 `S` として与える。

- `struct sum_monoid_with_update`  
    区間和/区間更新クエリを処理するときに`lazy_segtree`にテンプレート引数 `S` として与える。

## 参考
- [ACL](https://atcoder.github.io/ac-library/production/document_ja/lazysegtree.html)
- [Nyaan さんのライブラリ](https://nyaannyaan.github.io/library/segment-tree/lazy-segment-tree-utility.hpp)