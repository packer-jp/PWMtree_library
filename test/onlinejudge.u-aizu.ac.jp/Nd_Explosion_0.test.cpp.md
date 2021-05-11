---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/matrix.hpp
    title: math/matrix.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/beta/room.html#HUPC2020Day2/problems/I
    links:
    - https://onlinejudge.u-aizu.ac.jp/beta/room.html#HUPC2020Day2/problems/I
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp\"\n\
    #define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/beta/room.html#HUPC2020Day2/problems/I\"\
    \n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\n\
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)\n#define all(a) (a).begin(),\
    \ (a).end()\n#define bit(n) (1LL << (n))\nusing ll = long long;\ntemplate <typename\
    \ T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate\
    \ <typename T> T sq(T a) { return a * a; }\ntemplate <typename T, typename U>\
    \ bool chmax(T &a, const U &b) {\n    if (a < b) {\n        a = b;\n        return\
    \ true;\n    }\n    return false;\n}\ntemplate <typename T, typename U> bool chmin(T\
    \ &a, const U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n\
    \    }\n    return false;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, vector<T> a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr !=\
    \ a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n\
    \    os << \")\";\n    return os;\n}\n#line 2 \"math/matrix.hpp\"\n\ntemplate\
    \ <typename S> struct matrix {\n    using V = typename S::val_t;\n    vector<vector<V>>\
    \ val;\n    matrix(int n, int m) : matrix(vector(n, vector(m, S::zero()))) {}\n\
    \    matrix(vector<vector<V>> src) : val(src) {}\n    vector<V> &operator[](int\
    \ i) { return val[i]; }\n    int height() { return val.size(); }\n    int width()\
    \ { return val[0].size(); }\n    static matrix id(int n) {\n        matrix ret(n,\
    \ n);\n        rep(i, n) ret[i][i] = S::one();\n        return ret;\n    }\n \
    \   void row_add(int i, int j, V a) {\n        rep(k, width()) { val[i][k] +=\
    \ val[j][k] * a; }\n    }\n    void place_nonzero(int i, int j) {\n        for\
    \ (int k = i; k < height(); k++) {\n            if (val[k][j] != S::zero()) {\n\
    \                val[i].swap(val[k]);\n                break;\n            }\n\
    \        }\n    }\n    matrix upper_triangular() {\n        matrix ret(val);\n\
    \        for (int i = 0, j = 0; i < height() && j < width(); j++) {\n        \
    \    ret.place_nonzero(i, j);\n            if (ret[i][j] == S::zero()) continue;\n\
    \            for (int k = i + 1; k < height(); k++) { ret.row_add(k, i, -ret[k][j]\
    \ / ret[i][j]); }\n            i++;\n        }\n        return ret;\n    }\n \
    \   V det() {\n        V ret = S::one();\n        matrix ut = upper_triangular();\n\
    \        rep(i, height()) ret *= ut[i][i];\n        return ret;\n    }\n    matrix\
    \ inv() {\n        matrix ex(height(), width() << 1);\n        rep(i, height())\
    \ {\n            rep(j, width()) { ex[i][j] = val[i][j]; }\n        }\n      \
    \  rep(i, height()) ex[i][width() + i] = S::one();\n        matrix ut = ex.upper_triangular();\n\
    \        for (int i = height() - 1; i >= 0; i--) {\n            ut.row_add(i,\
    \ i, S::one() / ut[i][i] - S::one());\n            rep(j, i) ut.row_add(j, i,\
    \ -ut[j][i] / ut[i][i]);\n        }\n        matrix ret(height(), width());\n\
    \        rep(i, height()) {\n            rep(j, width()) { ret[i][j] = ut[i][width()\
    \ + j]; }\n        }\n        return ret;\n    }\n    matrix &operator+=(matrix\
    \ a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j] +=\
    \ a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator-=(matrix\
    \ a) {\n        rep(i, height()) {\n            rep(j, width()) { val[i][j] -=\
    \ a[i][j]; }\n        }\n        return *this;\n    }\n    matrix &operator*=(matrix\
    \ a) {\n        matrix res(height(), a.width());\n        rep(i, height()) {\n\
    \            rep(j, a.width()) {\n                rep(k, width()) { res[i][j]\
    \ += val[i][k] * a[k][j]; }\n            }\n        }\n        val.swap(res.val);\n\
    \        return *this;\n    }\n    matrix &operator/=(matrix a) { return *this\
    \ *= a.inv(); }\n    matrix &operator^=(ll p) {\n        matrix res = matrix::id(height());\n\
    \        while (p) {\n            if (p & 1) res *= *this;\n            *this\
    \ *= *this;\n            p >>= 1;\n        }\n        val.swap(res.val);\n   \
    \     return *this;\n    }\n    matrix operator+() { return *this; }\n    matrix\
    \ operator-() { return matrix(height(), width()) -= *this; }\n    matrix operator*(matrix\
    \ a) { return matrix(val) *= a; }\n    matrix operator/(matrix a) { return matrix(val)\
    \ /= a; }\n};\n\nstruct double_field {\n    using val_t = double;\n    static\
    \ val_t zero() { return 0.0; }\n    static val_t one() { return 1.0; }\n};\n\n\
    template <> void matrix<double_field>::place_nonzero(int i, int j) {\n    for\
    \ (int k = i + 1; k < height(); k++) {\n        if (abs(val[k][j]) > abs(val[i][j]))\
    \ val[i].swap(val[k]);\n    }\n};\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp\"\
    \n\nint main() {\n    int n;\n    cin >> n;\n    matrix<double_field> v(n, n),\
    \ p(n, 1), l(n, n);\n    rep(i, n) {\n        rep(j, n) {\n            cin >>\
    \ v[j][i];\n            l[i][i] += sq(v[j][i]);\n        }\n        l[i][i] =\
    \ sqrt(l[i][i]);\n    }\n    rep(i, n) cin >> p[i][0];\n    matrix<double_field>\
    \ q = l / v * p;\n    double ans = 0.0;\n    rep(i, n) { ans += sq(q[i][0] - clamp(q[i][0],\
    \ 0.0, l[i][i])); }\n    ans = sqrt(ans);\n    cout << ans << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/beta/room.html#HUPC2020Day2/problems/I\"\
    \n#include \"../../math/matrix.hpp\"\n\nint main() {\n    int n;\n    cin >> n;\n\
    \    matrix<double_field> v(n, n), p(n, 1), l(n, n);\n    rep(i, n) {\n      \
    \  rep(j, n) {\n            cin >> v[j][i];\n            l[i][i] += sq(v[j][i]);\n\
    \        }\n        l[i][i] = sqrt(l[i][i]);\n    }\n    rep(i, n) cin >> p[i][0];\n\
    \    matrix<double_field> q = l / v * p;\n    double ans = 0.0;\n    rep(i, n)\
    \ { ans += sq(q[i][0] - clamp(q[i][0], 0.0, l[i][i])); }\n    ans = sqrt(ans);\n\
    \    cout << ans << endl;\n}"
  dependsOn:
  - math/matrix.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
  requiredBy: []
  timestamp: '2021-05-11 17:03:13+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/Nd_Explosion_0.test.cpp
---
