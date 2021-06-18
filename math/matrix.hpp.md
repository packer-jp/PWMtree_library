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
  bundledCode: "#line 1 \"math/matrix.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\n\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (int i\
    \ = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define bit(n)\
    \ (1ull << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"math/matrix.hpp\"\n\ntemplate <typename\
    \ S> struct matrix {\n    using V = typename S::val_t;\n    vector<vector<V>>\
    \ val;\n    matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n\
    \    matrix(vector<vector<V>> src) : val(src) {}\n    vector<V> &operator[](int\
    \ i) { return val[i]; }\n    const vector<V> &operator[](int i) const { return\
    \ val[i]; }\n    int height() const { return val.size(); }\n    int width() const\
    \ { return val[0].size(); }\n    static matrix id(int n) {\n        matrix ret(n,\
    \ n);\n        rep(i, n) ret[i][i] = S::one();\n        return ret;\n    }\n \
    \   void row_add(int i, int j, V a) {\n        rep(k, width()) { val[i][k] +=\
    \ val[j][k] * a; }\n    }\n    bool place_nonzero(int i, int j) {\n        for\
    \ (int k = i; k < height(); k++) {\n            if (val[k][j] != S::zero()) {\n\
    \                if (k > i) row_add(i, k, S::one());\n                break;\n\
    \            }\n        }\n        return val[i][j] != S::zero();\n    }\n   \
    \ matrix upper_triangular() const {\n        matrix ret(val);\n        for (int\
    \ i = 0, j = 0; i < height() && j < width(); j++) {\n            if (!ret.place_nonzero(i,\
    \ j)) continue;\n            for (int k = i + 1; k < height(); k++) { ret.row_add(k,\
    \ i, -ret[k][j] / ret[i][j]); }\n            i++;\n        }\n        return ret;\n\
    \    }\n    V det() const {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        rep(i, height()) ret *= ut[i][i];\n        return ret;\n    }\n    matrix\
    \ inv() const {\n        matrix ex(height(), width() << 1);\n        rep(i, height())\
    \ {\n            rep(j, width()) { ex[i][j] = val[i][j]; }\n        }\n      \
    \  rep(i, height()) ex[i][width() + i] = S::one();\n        matrix ut = ex.upper_triangular();\n\
    \        for (int i = height() - 1; i >= 0; i--) {\n            ut.row_add(i,\
    \ i, S::one() / ut[i][i] - S::one());\n            rep(j, i) ut.row_add(j, i,\
    \ -ut[j][i] / ut[i][i]);\n        }\n        matrix ret(height(), width());\n\
    \        rep(i, height()) {\n            rep(j, width()) { ret[i][j] = ut[i][width()\
    \ + j]; }\n        }\n        return ret;\n    }\n    matrix pow(ll p) const {\n\
    \        matrix res = matrix::id(height()), mul = matrix(*this);\n        while\
    \ (p) {\n            if (p & 1) res *= mul;\n            mul *= mul;\n       \
    \     p >>= 1;\n        }\n        return res;\n    }\n    matrix &operator+=(const\
    \ matrix &a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j]\
    \ += a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator-=(const\
    \ matrix &a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j]\
    \ -= a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator*=(const\
    \ matrix &a) {\n        matrix res(height(), a.width());\n        rep(i, height())\
    \ {\n            rep(j, a.width()) {\n                rep(k, width()) { res[i][j]\
    \ += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
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
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k = i +\
    \ 1; k < height(); k++) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n  \
    \          val[i].swap(val[k]);\n            row_add(i, i, -2.0);\n        }\n\
    \    }\n    return abs(val[i][j]) > EPS;\n};\n\n\n"
  code: "#ifndef PWMTREE_MATRIX_HPP\n#define PWMTREE_MATRIX_HPP 1\n\n#include \"../template.hpp\"\
    \n\ntemplate <typename S> struct matrix {\n    using V = typename S::val_t;\n\
    \    vector<vector<V>> val;\n    matrix(int n, int m) : matrix(vector(n, vector(m,\
    \ S::zero()))) {}\n    matrix(vector<vector<V>> src) : val(src) {}\n    vector<V>\
    \ &operator[](int i) { return val[i]; }\n    const vector<V> &operator[](int i)\
    \ const { return val[i]; }\n    int height() const { return val.size(); }\n  \
    \  int width() const { return val[0].size(); }\n    static matrix id(int n) {\n\
    \        matrix ret(n, n);\n        rep(i, n) ret[i][i] = S::one();\n        return\
    \ ret;\n    }\n    void row_add(int i, int j, V a) {\n        rep(k, width())\
    \ { val[i][k] += val[j][k] * a; }\n    }\n    bool place_nonzero(int i, int j)\
    \ {\n        for (int k = i; k < height(); k++) {\n            if (val[k][j] !=\
    \ S::zero()) {\n                if (k > i) row_add(i, k, S::one());\n        \
    \        break;\n            }\n        }\n        return val[i][j] != S::zero();\n\
    \    }\n    matrix upper_triangular() const {\n        matrix ret(val);\n    \
    \    for (int i = 0, j = 0; i < height() && j < width(); j++) {\n            if\
    \ (!ret.place_nonzero(i, j)) continue;\n            for (int k = i + 1; k < height();\
    \ k++) { ret.row_add(k, i, -ret[k][j] / ret[i][j]); }\n            i++;\n    \
    \    }\n        return ret;\n    }\n    V det() const {\n        V ret = S::one();\n\
    \        matrix ut = upper_triangular();\n        rep(i, height()) ret *= ut[i][i];\n\
    \        return ret;\n    }\n    matrix inv() const {\n        matrix ex(height(),\
    \ width() << 1);\n        rep(i, height()) {\n            rep(j, width()) { ex[i][j]\
    \ = val[i][j]; }\n        }\n        rep(i, height()) ex[i][width() + i] = S::one();\n\
    \        matrix ut = ex.upper_triangular();\n        for (int i = height() - 1;\
    \ i >= 0; i--) {\n            ut.row_add(i, i, S::one() / ut[i][i] - S::one());\n\
    \            rep(j, i) ut.row_add(j, i, -ut[j][i] / ut[i][i]);\n        }\n  \
    \      matrix ret(height(), width());\n        rep(i, height()) {\n          \
    \  rep(j, width()) { ret[i][j] = ut[i][width() + j]; }\n        }\n        return\
    \ ret;\n    }\n    matrix pow(ll p) const {\n        matrix res = matrix::id(height()),\
    \ mul = matrix(*this);\n        while (p) {\n            if (p & 1) res *= mul;\n\
    \            mul *= mul;\n            p >>= 1;\n        }\n        return res;\n\
    \    }\n    matrix &operator+=(const matrix &a) {\n        rep(i, height()) {\n\
    \            rep(j, width()) { val[i][j] += a[i][j]; }\n        }\n        return\
    \ *this;\n    }\n    matrix &operator-=(const matrix &a) {\n        rep(i, height())\
    \ {\n            rep(j, width()) { val[i][j] -= a[i][j]; }\n        }\n      \
    \  return *this;\n    }\n    matrix &operator*=(const matrix &a) {\n        matrix\
    \ res(height(), a.width());\n        rep(i, height()) {\n            rep(j, a.width())\
    \ {\n                rep(k, width()) { res[i][j] += val[i][k] * a[k][j]; }\n \
    \           }\n        }\n        val.swap(res.val);\n        return *this;\n\
    \    }\n    matrix &operator/=(const matrix &a) { return *this *= a.inv(); }\n\
    \    bool operator==(const matrix &a) const { return val == a.val; }\n    bool\
    \ operator!=(const matrix &a) const { return rel_ops::operator!=(*this, a); }\n\
    \    matrix operator+() const { return *this; }\n    matrix operator-() const\
    \ { return matrix(height(), width()) -= *this; }\n    matrix operator+(const matrix\
    \ &a) const { return matrix(*this) += a; }\n    matrix operator-(const matrix\
    \ &a) const { return matrix(*this) -= a; }\n    matrix operator*(const matrix\
    \ &a) const { return matrix(*this) *= a; }\n    matrix operator/(const matrix\
    \ &a) const { return matrix(*this) /= a; }\n};\n\nstruct double_field {\n    using\
    \ val_t = double;\n    static val_t zero() { return 0.0; }\n    static val_t one()\
    \ { return 1.0; }\n};\n\ntemplate <> bool matrix<double_field>::place_nonzero(int\
    \ i, int j) {\n    static constexpr double EPS = 1e-12;\n    for (int k = i +\
    \ 1; k < height(); k++) {\n        if (abs(val[k][j]) > abs(val[i][j])) {\n  \
    \          val[i].swap(val[k]);\n            row_add(i, i, -2.0);\n        }\n\
    \    }\n    return abs(val[i][j]) > EPS;\n};\n\n#endif"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: math/matrix.hpp
  requiredBy: []
  timestamp: '2021-06-18 11:19:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Determinant_of_Matrix.0.test.cpp
documentation_of: math/matrix.hpp
layout: document
redirect_from:
- /library/math/matrix.hpp
- /library/math/matrix.hpp.html
title: math/matrix.hpp
---
