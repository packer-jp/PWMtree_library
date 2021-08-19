---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':x:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':x:'
    path: math/modint.hpp
    title: math/modint.hpp
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/log_of_formal_power_series
    links:
    - https://judge.yosupo.jp/problem/log_of_formal_power_series
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/log_of_formal_power_series\"\
    \n#line 1 \"math/fps.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\n\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long\
    \ long;\nusing ull = unsigned ll;\null bit(int n) { return 1ull << n; }\ntemplate\
    \ <typename T> using priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\n\
    template <typename T> T sq(const T &a) { return a * a; }\ntemplate <typename T,\
    \ typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\ntemplate <typename T, typename\
    \ U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a = b;\n      \
    \  return true;\n    }\n    return false;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n\nstruct rep {\n    struct itr {\n\
    \        int v;\n        itr(int v) : v(v) {}\n        void operator++() { ++v;\
    \ }\n        int operator*() const { return v; }\n        bool operator!=(const\
    \ itr &i) const { return v != i.v; }\n    };\n    int l, r;\n    rep(int r) :\
    \ l(0), r(r) {}\n    rep(int l, int r) : l(l), r(r) {}\n    itr begin() const\
    \ { return l; };\n    itr end() const { return r; };\n};\nstruct per {\n    struct\
    \ itr {\n        int v;\n        itr(int v) : v(v) {}\n        void operator++()\
    \ { --v; }\n        int operator*() const { return v; }\n        bool operator!=(const\
    \ itr &i) const { return v != i.v; }\n    };\n    int l, r;\n    per(int r) :\
    \ l(0), r(r) {}\n    per(int l, int r) : l(l), r(r) {}\n    itr begin() const\
    \ { return r - 1; };\n    itr end() const { return l - 1; };\n};\n\n\n#line 1\
    \ \"math/convolution.hpp\"\n\n\n\n#line 1 \"math/modint.hpp\"\n\n\n\n#line 5 \"\
    math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007> struct modint {\n    ll val;\n\
    \    modint(ll val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD)\
    \ {}\n    static ll mod() { return MOD; }\n    modint inv() const {\n        ll\
    \ a = val, b = MOD, u = 1, v = 0, t;\n        while (b > 0) {\n            t =\
    \ a / b;\n            swap(a -= t * b, b);\n            swap(u -= t * v, v);\n\
    \        }\n        return modint(u);\n    }\n    modint pow(ll p) const {\n \
    \       modint res = 1, mul = val;\n        while (p) {\n            if (p & 1)\
    \ res *= mul;\n            mul *= mul;\n            p >>= 1;\n        }\n    \
    \    return res;\n    }\n    modint &operator+=(const modint &a) {\n        if\
    \ ((val += a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint\
    \ &operator-=(const modint &a) {\n        if ((val += MOD - a.val) >= MOD) val\
    \ -= MOD;\n        return *this;\n    }\n    modint &operator*=(const modint &a)\
    \ {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n    modint\
    \ &operator/=(const modint &a) { return *this *= a.inv(); }\n    bool operator==(const\
    \ modint &a) const { return val == a.val; }\n    bool operator!=(const modint\
    \ &a) const { return rel_ops::operator!=(*this, a); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend modint operator+(const modint &a, const modint &b) { return modint(a)\
    \ += b; }\n    friend modint operator-(const modint &a, const modint &b) { return\
    \ modint(a) -= b; }\n    friend modint operator*(const modint &a, const modint\
    \ &b) { return modint(a) *= b; }\n    friend modint operator/(const modint &a,\
    \ const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n\n\n#line 6 \"math/convolution.hpp\"\
    \n\ntemplate <typename mint> void ntt(vector<mint> &a, mint wn) {\n    int n =\
    \ a.size(), m = n >> 1;\n    vector<mint> b(n);\n    for (int i = 1; i < n; i\
    \ <<= 1, wn *= wn, swap(a, b)) {\n        mint wj = 1;\n        for (int j = 0;\
    \ j < m; j += i, wj *= wn) {\n            for (int k : rep(i)) {\n           \
    \     b[(j << 1) + k + 0] = (a[j + k] + a[j + k + m]);\n                b[(j <<\
    \ 1) + k + i] = (a[j + k] - a[j + k + m]) * wj;\n            }\n        }\n  \
    \  }\n}\n\ntemplate <typename mint> mint getw(ll n) {\n    mint root = 2;\n  \
    \  while (root.pow((mint::mod() - 1) >> 1) == 1) root += 1;\n    return root.pow((mint::mod()\
    \ - 1) / n);\n}\n\ntemplate <typename mint> vector<mint> convolution_friendly(vector<mint>\
    \ a, vector<mint> b) {\n    int n_ = a.size() + b.size() - 1, n;\n    for (n =\
    \ 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    mint wn = getw<mint>(n);\n\
    \    ntt(a, wn), ntt(b, wn);\n    for (int i : rep(n)) a[i] *= b[i];\n    ntt(a,\
    \ wn.inv());\n    mint ninv = mint(n).inv();\n    a.resize(n_);\n    for (int\
    \ i : rep(n_)) a[i] *= ninv;\n    return a;\n}\n\n\n#line 7 \"math/fps.hpp\"\n\
    \ntemplate <typename mint> struct fps : vector<mint> {\n    using vector<mint>::vector;\n\
    \    using vector<mint>::operator=;\n    fps() : vector<mint>() {}\n    fps(const\
    \ mint &a) : vector<mint>(1, a) {}\n    fps(const fps &a) : vector<mint>(a) {}\n\
    \    fps &operator=(const fps &a) {\n        *this = (vector<mint>)a;\n      \
    \  return *this;\n    }\n    fps &operator+=(const fps &a) {\n        if (a.size()\
    \ > this->size()) this->resize(a.size());\n        for (int i : rep(a.size()))\
    \ (*this)[i] += a[i];\n        return *this;\n    }\n    fps &operator-=(const\
    \ fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n  \
    \      for (int i : rep(a.size())) (*this)[i] -= a[i];\n        return *this;\n\
    \    }\n    fps &operator*=(const fps &a);\n    fps &operator>>=(int d) {\n  \
    \      if (this->size() <= d) {\n            *this = {};\n        } else {\n \
    \           this->erase(this->begin(), this->begin() + d);\n        }\n      \
    \  return *this;\n    }\n    fps &operator<<=(int d) {\n        this->insert(this->begin(),\
    \ d, mint(0));\n        return *this;\n    }\n    fps prefix(int d) const { return\
    \ fps(this->begin(), this->begin() + min((int)this->size(), d)); }\n    fps differential()\
    \ const {\n        int n = this->size();\n        fps ret(max(0, n - 1));\n  \
    \      for (int i : rep(1, n)) { ret[i - 1] = i * (*this)[i]; }\n        return\
    \ ret;\n    }\n    fps integral() const {\n        int n = this->size();\n   \
    \     fps ret(n + 1);\n        ret[0] = mint(0);\n        if (n > 0) ret[1] =\
    \ mint(1);\n        ll mod = mint::mod();\n        for (int i : rep(2, n + 1))\
    \ ret[i] = (-ret[mod % i]) * (mod / i);\n        for (int i : rep(n)) ret[i +\
    \ 1] *= (*this)[i];\n        return ret;\n    }\n    fps inv(int d = -1) const\
    \ {\n        if (d == -1) d = this->size();\n        fps ret{(*this)[0].inv()};\n\
    \        for (int m = 1; m < d; m <<= 1) ret = (ret + ret - ret * ret * this->prefix(m\
    \ << 1)).prefix(m << 1);\n        return ret.prefix(d);\n    }\n    fps log(int\
    \ d = -1) const {\n        assert((*this)[0] == mint(1));\n        if (d == -1)\
    \ d = this->size();\n        return (this->differential() * this->inv(d)).prefix(d\
    \ - 1).integral();\n    }\n    fps exp(int d = -1) const {\n        assert(this->size()\
    \ == 0 || (*this)[0] == mint(0));\n        if (d == -1) d = this->size();\n  \
    \      fps ret{1};\n        for (int m = 1; m < d; m <<= 1) ret = (ret * (prefix(m\
    \ << 1) + mint(1) - ret.log(m << 1))).prefix(m << 1);\n        return ret.prefix(d);\n\
    \    }\n    fps pow(ll k, int d = -1) const {\n        if (d == -1) d = this->size();\n\
    \        for (int i : rep(this->size())) {\n            if ((*this)[i] != mint(0))\
    \ {\n                if (i * k > d) return fps(d);\n                fps ret =\
    \ (((*this * (*this)[i].inv()) >> i).log(d) * mint(k)).exp(d) * ((*this)[i].pow(k));\n\
    \                ret = (ret << (i * k)).prefix(d);\n                ret.resize(d);\n\
    \                return ret;\n            }\n        }\n        return fps(d);\n\
    \    }\n    friend fps operator-(const fps &a) { return fps() -= a; }\n    friend\
    \ fps operator+(const fps &a, const fps &b) { return fps(a) += b; }\n    friend\
    \ fps operator-(const fps &a, const fps &b) { return fps(a) -= b; }\n    friend\
    \ fps operator*(const fps &a, const fps &b) { return fps(a) *= b; }\n    friend\
    \ fps operator>>(const fps &a, int d) { return fps(a) >>= d; }\n    friend fps\
    \ operator<<(const fps &a, int d) { return fps(a) <<= d; }\n};\n\nusing m9 = modint<998244353>;\n\
    \ntemplate <> fps<m9> &fps<m9>::operator*=(const fps<m9> &a) {\n    *this = convolution_friendly<m9>(*this,\
    \ a);\n    return *this;\n}\ntemplate <> fps<m9> fps<m9>::inv(int d) const {\n\
    \    if (d == -1) d = this->size();\n    fps ret{(*this)[0].inv()};\n    for (int\
    \ m = 1; m < d; m <<= 1) {\n        m9 wn = getw<m9>(m << 1);\n        fps f =\
    \ this->prefix(m << 1);\n        fps g = ret;\n        f.resize(m << 1), ntt(f,\
    \ wn);\n        g.resize(m << 1), ntt(g, wn);\n        for (int i : rep(m << 1))\
    \ f[i] *= g[i];\n        ntt(f, wn.inv());\n        f >>= m, f.resize(m << 1),\
    \ ntt(f, wn);\n        for (int i : rep(m << 1)) f[i] *= g[i];\n        ntt(f,\
    \ wn.inv());\n        m9 iz = m9(m << 1).inv();\n        iz *= -iz;\n        for\
    \ (int i : rep(m)) f[i] *= iz;\n        ret.insert(ret.end(), f.begin(), f.begin()\
    \ + m);\n    }\n    return ret.prefix(d);\n}\n\n\n#line 3 \"test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    ll n;\n    cin >> n;\n\
    \    fps<mint> a(n);\n    for (ll i : rep(n)) cin >> a[i];\n    fps<mint> b =\
    \ a.log();\n    for (ll i : rep(n)) cout << b[i] << \" \";\n    cout << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/log_of_formal_power_series\"\
    \n#include \"../../math/fps.hpp\"\n\nint main() {\n    using mint = modint<998244353>;\n\
    \    ll n;\n    cin >> n;\n    fps<mint> a(n);\n    for (ll i : rep(n)) cin >>\
    \ a[i];\n    fps<mint> b = a.log();\n    for (ll i : rep(n)) cout << b[i] << \"\
    \ \";\n    cout << endl;\n}"
  dependsOn:
  - math/fps.hpp
  - template.hpp
  - math/convolution.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
  requiredBy: []
  timestamp: '2021-08-19 12:39:30+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
- /verify/test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp.html
title: test/judge.yosupo.jp/Log_of_Formal_Power_Series.0.test.cpp
---
