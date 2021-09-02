---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
    title: test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/matrix.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\null bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) { return\
    \ ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return ((a > b) ? (a = b, true) : (false)); }\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os\
    \ << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr\
    \ << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n\
    }\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep {\n    struct\
    \ itr {\n        int v;\n        itr(int v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        int operator*() const { return v; }\n        bool operator!=(const\
    \ itr &i) const { return v != i.v; }\n    };\n    int l, r;\n    rep(int r) :\
    \ l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l, r)), r(r) {}\n    itr\
    \ begin() const { return l; };\n    itr end() const { return r; };\n};\nstruct\
    \ per {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n    \
    \    void operator++() { --v; }\n        int operator*() const { return v; }\n\
    \        bool operator!=(const itr &i) const { return v != i.v; }\n    };\n  \
    \  int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int l, int r) :\
    \ l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n    itr end()\
    \ const { return l - 1; };\n};\n#line 4 \"math/matrix.hpp\"\n\ntemplate <typename\
    \ S> struct matrix {\n    using V = typename S::val_t;\n    vector<vector<V>>\
    \ val;\n    matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n\
    \    matrix(const vector<vector<V>> &src) : val(src) {}\n    vector<V> &operator[](int\
    \ i) { return val[i]; }\n    const vector<V> &operator[](int i) const { return\
    \ val[i]; }\n    int height() const { return val.size(); }\n    int width() const\
    \ { return val[0].size(); }\n    static matrix id(int n) {\n        matrix ret(n,\
    \ n);\n        for (int i : rep(n)) ret[i][i] = S::one();\n        return ret;\n\
    \    }\n    void row_add(int i, int j, V a) {\n        for (int k : rep(width()))\
    \ { val[i][k] += val[j][k] * a; }\n    }\n    bool place_nonzero(int i, int j)\
    \ {\n        for (int k : rep(i, height())) {\n            if (val[k][j] != S::zero())\
    \ {\n                if (k > i) row_add(i, k, S::one());\n                break;\n\
    \            }\n        }\n        return val[i][j] != S::zero();\n    }\n   \
    \ matrix upper_triangular() const {\n        matrix ret(*this);\n        for (int\
    \ i = 0, j = 0; i < height() && j < width(); j++) {\n            if (!ret.place_nonzero(i,\
    \ j)) continue;\n            for (int k : rep(i + 1, height())) ret.row_add(k,\
    \ i, -ret[k][j] / ret[i][j]);\n            i++;\n        }\n        return ret;\n\
    \    }\n    V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        for (int i : rep(height())) ret *= ut[i][i];\n        return ret;\n \
    \   }\n    matrix inv() const {\n        matrix ex(height(), width() << 1);\n\
    \        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { ex[i][j] = val[i][j]; }\n        }\n        for (int i : rep(height())) ex[i][width()\
    \ + i] = S::one();\n        matrix ut = ex.upper_triangular();\n        for (int\
    \ i : per(height())) {\n            ut.row_add(i, i, S::one() / ut[i][i] - S::one());\n\
    \            for (int j : rep(i)) ut.row_add(j, i, -ut[j][i] / ut[i][i]);\n  \
    \      }\n        matrix ret(height(), width());\n        for (int i : rep(height()))\
    \ {\n            for (int j : rep(width())) { ret[i][j] = ut[i][width() + j];\
    \ }\n        }\n        return ret;\n    }\n    matrix pow(ll k) const {\n   \
    \     matrix ret = matrix::id(height()), mul(*this);\n        while (k) {\n  \
    \          if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>=\
    \ 1;\n        }\n        return ret;\n    }\n    matrix &operator+=(const matrix\
    \ &a) {\n        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { val[i][j] += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix\
    \ &operator-=(const matrix &a) {\n        for (int i : rep(height())) {\n    \
    \        for (int j : rep(width())) { val[i][j] -= a[i][j]; }\n        }\n   \
    \     return *this;\n    }\n    matrix &operator*=(const matrix &a) {\n      \
    \  matrix res(height(), a.width());\n        for (int i : rep(height())) {\n \
    \           for (int j : rep(a.width())) {\n                for (int k : rep(width()))\
    \ { res[i][j] += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(const matrix &a) { return\
    \ *this *= a.inv(); }\n    bool operator==(const matrix &a) const { return val\
    \ == a.val; }\n    bool operator!=(const matrix &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    matrix operator+() const { return *this; }\n    matrix operator-()\
    \ const { return matrix(height(), width()) -= *this; }\n    matrix operator+(const\
    \ matrix &a) const { return matrix(*this) += a; }\n    matrix operator-(const\
    \ matrix &a) const { return matrix(*this) -= a; }\n    matrix operator*(const\
    \ matrix &a) const { return matrix(*this) *= a; }\n    matrix operator/(const\
    \ matrix &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n\
    \    using val_t = double;\n    static val_t zero() { return 0.0; }\n    static\
    \ val_t one() { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k : rep(i\
    \ + 1, height())) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n        \
    \    swap(val[i], val[k]);\n            row_add(i, i, -2.0);\n        }\n    }\n\
    \    return abs(val[i][j]) > EPS;\n}\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ matrix {\n    using V = typename S::val_t;\n    vector<vector<V>> val;\n   \
    \ matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n    matrix(const\
    \ vector<vector<V>> &src) : val(src) {}\n    vector<V> &operator[](int i) { return\
    \ val[i]; }\n    const vector<V> &operator[](int i) const { return val[i]; }\n\
    \    int height() const { return val.size(); }\n    int width() const { return\
    \ val[0].size(); }\n    static matrix id(int n) {\n        matrix ret(n, n);\n\
    \        for (int i : rep(n)) ret[i][i] = S::one();\n        return ret;\n   \
    \ }\n    void row_add(int i, int j, V a) {\n        for (int k : rep(width()))\
    \ { val[i][k] += val[j][k] * a; }\n    }\n    bool place_nonzero(int i, int j)\
    \ {\n        for (int k : rep(i, height())) {\n            if (val[k][j] != S::zero())\
    \ {\n                if (k > i) row_add(i, k, S::one());\n                break;\n\
    \            }\n        }\n        return val[i][j] != S::zero();\n    }\n   \
    \ matrix upper_triangular() const {\n        matrix ret(*this);\n        for (int\
    \ i = 0, j = 0; i < height() && j < width(); j++) {\n            if (!ret.place_nonzero(i,\
    \ j)) continue;\n            for (int k : rep(i + 1, height())) ret.row_add(k,\
    \ i, -ret[k][j] / ret[i][j]);\n            i++;\n        }\n        return ret;\n\
    \    }\n    V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        for (int i : rep(height())) ret *= ut[i][i];\n        return ret;\n \
    \   }\n    matrix inv() const {\n        matrix ex(height(), width() << 1);\n\
    \        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { ex[i][j] = val[i][j]; }\n        }\n        for (int i : rep(height())) ex[i][width()\
    \ + i] = S::one();\n        matrix ut = ex.upper_triangular();\n        for (int\
    \ i : per(height())) {\n            ut.row_add(i, i, S::one() / ut[i][i] - S::one());\n\
    \            for (int j : rep(i)) ut.row_add(j, i, -ut[j][i] / ut[i][i]);\n  \
    \      }\n        matrix ret(height(), width());\n        for (int i : rep(height()))\
    \ {\n            for (int j : rep(width())) { ret[i][j] = ut[i][width() + j];\
    \ }\n        }\n        return ret;\n    }\n    matrix pow(ll k) const {\n   \
    \     matrix ret = matrix::id(height()), mul(*this);\n        while (k) {\n  \
    \          if (k & 1) ret *= mul;\n            mul *= mul;\n            k >>=\
    \ 1;\n        }\n        return ret;\n    }\n    matrix &operator+=(const matrix\
    \ &a) {\n        for (int i : rep(height())) {\n            for (int j : rep(width()))\
    \ { val[i][j] += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix\
    \ &operator-=(const matrix &a) {\n        for (int i : rep(height())) {\n    \
    \        for (int j : rep(width())) { val[i][j] -= a[i][j]; }\n        }\n   \
    \     return *this;\n    }\n    matrix &operator*=(const matrix &a) {\n      \
    \  matrix res(height(), a.width());\n        for (int i : rep(height())) {\n \
    \           for (int j : rep(a.width())) {\n                for (int k : rep(width()))\
    \ { res[i][j] += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(const matrix &a) { return\
    \ *this *= a.inv(); }\n    bool operator==(const matrix &a) const { return val\
    \ == a.val; }\n    bool operator!=(const matrix &a) const { return rel_ops::operator!=(*this,\
    \ a); }\n    matrix operator+() const { return *this; }\n    matrix operator-()\
    \ const { return matrix(height(), width()) -= *this; }\n    matrix operator+(const\
    \ matrix &a) const { return matrix(*this) += a; }\n    matrix operator-(const\
    \ matrix &a) const { return matrix(*this) -= a; }\n    matrix operator*(const\
    \ matrix &a) const { return matrix(*this) *= a; }\n    matrix operator/(const\
    \ matrix &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n\
    \    using val_t = double;\n    static val_t zero() { return 0.0; }\n    static\
    \ val_t one() { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k : rep(i\
    \ + 1, height())) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n        \
    \    swap(val[i], val[k]);\n            row_add(i, i, -2.0);\n        }\n    }\n\
    \    return abs(val[i][j]) > EPS;\n}"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/matrix.hpp
  requiredBy: []
  timestamp: '2021-09-01 12:58:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
documentation_of: math/matrix.hpp
layout: document
title: "\u884C\u5217"
---

# 概要
- 集合 $V$ について定めた代数的構造上の $n \times m$ 行列に関する各種演算をサポートする。

# 詳細
- `<typename S> struct matrix`  
    行列本体。

    - `typename S`  
        テンプレート引数として与える構造体。

        - `using val_t`  
            $V$ を表す型。各種演算、比較、複合代入をサポートする必要がある。

        - `val_t zero()`  
            加法単位元 $0$ を返す。
        
        - `val_t one()`  
            乗法単位元 $1$ を返す。

    - `using V`  
        $V$ を表す型。

    - `(constructor)(int n, int m)`  
        大きさ $n \times m$ 、全要素 $\mathrm{0}$ で初期化。

    - `(constructor)(vector<vector<V>> src)`  
        $src$ で初期化。

    - 要素アクセス  
        二次元配列のように、`[]`演算子を用いて行う。

    - `int height()`  
        高さ $n$ を返す。

    - `int width()`  
        幅 $m$ を返す。

    - `static matrix id(int n)`  
        $n \times n$ の単位行列を返す。

    - `V det()`  
        行列式を返す。定義に従った計算ではなく、上三角化を経由する関係上、`V` の除法を要請する。 $O(n^3)$ 時間。

    - `matrix inv()`  
        逆行列を返す。正則でない場合の動作は未定義。 $O(n^3)$ 時間。

    - `matrix pow(ll k)`  
        $k$ 乗した結果を返す。`V` が半環 (加法について可換モノイド、乗法についてモノイド、分配的、加法単位元は乗法吸収元) であることを要請する。 $O(n^3 \log k)$ 時間。

    - 四則演算、比較、複合代入

- `struct double_field`  
    実数体を載せるときに`matrix`にテンプレート引数 `S` として与える。誤差周りの事情から、特殊化を行っている。

# 参考
- [うしさんのライブラリ](https://ei1333.github.io/library/math/matrix/matrix.cpp)